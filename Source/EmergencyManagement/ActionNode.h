// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NodeBase.h"
#include "ActionNode.generated.h"

/**
 * 
 */
UCLASS()
class EMERGENCYMANAGEMENT_API UActionNode : public UNodeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> InputArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> OutputArray;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InfoText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StressImpact;
};
