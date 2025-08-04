// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFuncsLDtk.h"

FVector UBPFuncsLDtk::LDtKPosToUEPos(FVector2D In)
{
	return FVector(In.X,0,-In.Y);
}

FString UBPFuncsLDtk::BranchOnLDTKFieldType(FLDtkEntity Entity, FString FieldName, ELDtkEntityFieldType& Branches)
{
	if (Entity.BoolFields.Contains(FieldName))
	{
		Branches = ELDtkEntityFieldType::Bool;
	}
	else if (Entity.IntFields.Contains(FieldName))
	{
		Branches = ELDtkEntityFieldType::Int;
	}
	else if (Entity.FloatFields.Contains(FieldName))
	{
		Branches = ELDtkEntityFieldType::Float;
	}
	else if (Entity.StringFields.Contains(FieldName))
	{
		Branches = ELDtkEntityFieldType::String;
	}
	else if (Entity.EntityRefFields.Contains(FieldName))
	{
		Branches = ELDtkEntityFieldType::EntityRef;
	}
	else if (Entity.EnumFields.Contains(FieldName))
	{
		Branches = ELDtkEntityFieldType::Enum;
	}
	else if (Entity.EnumFields.Contains(FieldName))
	{
		Branches = ELDtkEntityFieldType::Enum;
	}

	return FieldName;
}
