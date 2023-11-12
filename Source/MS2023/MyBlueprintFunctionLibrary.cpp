// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Runtime/Core/Public/Templates/Sorting.h"

float UMyBlueprintFunctionLibrary::gcd(int value1, int value2) {
	return FEuclidDivisionGCD::GCD(value1, value2);
}