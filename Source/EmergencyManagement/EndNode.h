// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NodeBase.h"
#include "EndNode.generated.h"

/**
 * 
 */
UCLASS()
class EMERGENCYMANAGEMENT_API UEndNode : public UNodeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<int32> InputArray;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom")
	FString InfoText;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom")
	float TimeLimit;
};
