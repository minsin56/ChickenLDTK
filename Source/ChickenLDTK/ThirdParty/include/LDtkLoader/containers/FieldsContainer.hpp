// Created by Modar Nasser on 27/01/2021.

#pragma once

#include <memory>
#include <unordered_map>
#include <vector>

#include "LDtkLoader/defs/FieldDef.hpp"
#include "LDtkLoader/thirdparty/json_fwd.hpp"
#include "LDtkLoader/thirdparty/optional.hpp"

#include "LDtkLoader/DataTypes.hpp"
#include "LDtkLoader/Field.hpp"
#include "LDtkLoader/Utils.hpp"

namespace ldtk {

    class World;

    class FieldsContainer
    {
    public:
        FieldsContainer() = default;

        template <FieldType T>
        auto getField(const std::string& name) const -> const getFieldType<T>&;

        template <typename T>
        auto getField(const std::string& name) const -> const Field<T>&;

        template <typename T>
        auto getArrayField(const std::string& name) const -> const ArrayField<T>&;

    protected:
        FieldsContainer(const nlohmann::json& j, const World* w);

        template <typename T>
        auto addField(const std::string& name, const T& field) -> Field<T>&;

        template <typename T>
        auto addField(const std::string& name, const Field<T>& field) -> Field<T>&;

        template <typename T>
        auto addArrayField(const std::string& name, const std::vector<Field<T>>& field) -> ArrayField<T>&;

        template <typename T>
        auto addArrayField(const std::string& name, const ArrayField<T>& field) -> ArrayField<T>&;

    private:
        void parseFields(const nlohmann::json& j, const World* w);
        void parseArrayField(
            const nlohmann::json& field,
            const std::string& type,
            const std::string& name,
            const World* w
        );
        void parseValueField(
            const nlohmann::json& field,
            const std::string& type,
            const std::string& name,
            const World* w
        );

        std::vector<std::unique_ptr<IField>> m_gc;
        std::unordered_map<std::string, IField*> m_fields;
        std::unordered_map<std::string, IField*> m_array_fields;
    };

    template <FieldType T>
    auto FieldsContainer::getField(const std::string& name) const -> const getFieldType<T>&
    {
        using FieldT = getFieldType<T>;
        const auto is_array = std::is_base_of<FieldT, ArrayField<typename FieldT::value_type>>::value;
        if (is_array) {
            return getArrayField<typename FieldT::value_type>(name);
        }
        else {
            return getField<typename FieldT::value_type>(name);
        }
    }

    template <typename T>
    auto FieldsContainer::getField(const std::string& name) const -> const Field<T>&
    {
        if (m_fields.count(name) > 0) {
            const auto* field = m_fields.at(name);
            const auto* ret = static_cast<const Field<T>*>(field);
            if (ret) {
                return *ret;
            }
            ldtk_error("Field \"" + name + "\" is not of type " + typeid(T).name() + ".");
        }
        ldtk_error("Field \"" + name + "\" does not exist.");
    }

    template <typename T>
    auto FieldsContainer::getArrayField(const std::string& name) const -> const ArrayField<T>&
    {
        if (m_array_fields.count(name) > 0) {
            const auto* field = m_array_fields.at(name);
            const auto* ret = static_cast<const ArrayField<T>*>(field);
            if (ret) {
                return *ret;
            }
            ldtk_error("ArrayField \"" + name + "\" is not of type " + typeid(T).name() + ".");
        }
        ldtk_error("ArrayField \"" + name + "\" does not exist.");
    }

    template <typename T>
    auto FieldsContainer::addField(const std::string& name, const T& field) -> Field<T>&
    {
        auto* new_field = new Field<T>(field);
        m_fields.emplace(name, new_field);
        m_gc.emplace_back(new_field);
        return *new_field;
    }

    template <typename T>
    auto FieldsContainer::addField(const std::string& name, const Field<T>& field) -> Field<T>&
    {
        auto* new_field = new Field<T>(field);
        m_fields.emplace(name, new_field);
        m_gc.emplace_back(new_field);
        return *new_field;
    }

    template <typename T>
    auto FieldsContainer::addArrayField(const std::string& name, const std::vector<Field<T>>& field)
        -> ArrayField<T>&
    {
        auto* new_field = new ArrayField<T>(field);
        m_array_fields.emplace(name, new_field);
        m_gc.emplace_back(new_field);
        return *new_field;
    }

    template <typename T>
    auto FieldsContainer::addArrayField(const std::string& name, const ArrayField<T>& field) -> ArrayField<T>&
    {
        auto* new_field = new ArrayField<T>(field);
        m_array_fields.emplace(name, new_field);
        m_gc.emplace_back(new_field);
        return *new_field;
    }

} // namespace ldtk
