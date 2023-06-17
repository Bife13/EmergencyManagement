// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NodeBase.h"
#include "Document.generated.h"

/**
 * 
 */
UCLASS()
class EMERGENCYMANAGEMENT_API UDocument : public UNodeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<int32> InputArray;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<int32> OutputArray;
};
