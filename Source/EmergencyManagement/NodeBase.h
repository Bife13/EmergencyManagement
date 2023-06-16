// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NodeBase.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FNodeConnection
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Node")
	class UNodeBase* InputNode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output Node")
	class UNodeBase* OutputNode;
};

UCLASS()
class EMERGENCYMANAGEMENT_API UNodeBase : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	UNodeBase* InputNode;
	UPROPERTY(BlueprintReadWrite)
	UNodeBase* OutputNode;
	UPROPERTY(BlueprintReadWrite)
	FNodeConnection Connection;
	UPROPERTY(BlueprintReadWrite)
	FString Name;
	UPROPERTY(BlueprintReadWrite)
	FString Description;
	UPROPERTY(BlueprintReadWrite)
	FColor Color;
	UPROPERTY(BlueprintReadWrite)
	FVector2D CanvasOffset;
	// TODO ACTUAL NODE VARIABLES LATER

	// Type
	// Stress
	// Location
};
