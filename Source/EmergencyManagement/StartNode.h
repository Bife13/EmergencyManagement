// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NodeBase.h"
#include "StartNode.generated.h"

/**
 * 
 */
UCLASS()
class EMERGENCYMANAGEMENT_API UStartNode : public UNodeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<int32> OutputArray;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom")
	FString InfoText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom")
	float TimeNeeded;
};
