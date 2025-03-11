// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dialogue.h"
#include "RepeatingDialogue.generated.h"

/**
 * 
 */
UCLASS()
class COOLDIALOGUESYS_API URepeatingDialogue : public UDialogue
{
	GENERATED_BODY()
public:
	void getNextDialogue(FString& out_text, bool& out_isFinished) override;
};
