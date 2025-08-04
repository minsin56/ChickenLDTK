// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFuncsLDtk.h"

FVector UBPFuncsLDtk::LDtKPosToUEPos(FVector2D In)
{
	return FVector(In.X,0,-In.Y);
}
