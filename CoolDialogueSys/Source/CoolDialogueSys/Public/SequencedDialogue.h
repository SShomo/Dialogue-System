// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dialogue.h"
#include "SequencedDialogue.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class COOLDIALOGUESYS_API USequencedDialogue : public UDialogue
{
	GENERATED_BODY()
public:
	UDialogue* nextDialogue() override;
private:
	UPROPERTY(VisibleAnywhere)
	UDialogue* next;
};
