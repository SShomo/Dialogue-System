// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dialogue.h"
#include "BranchingDialogue.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class COOLDIALOGUESYS_API UBranchingDialogue : public UDialogue
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	UDialogue* chooseDialogue(int selection);
private:
	TArray<UDialogue> dialogueOptions;
};
