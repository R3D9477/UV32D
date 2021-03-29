// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "UV32DUtilities.generated.h"

/**
 * 
 */
UCLASS()
class UV32D_API UUV32DUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, BlueprintPure=true)
	static FString StringFromBinaryArray(const TArray<uint8>& BinaryArray)
	{
		FString Result = FString(UTF8_TO_TCHAR(BinaryArray.GetData()));
		return Result;

	}
};
