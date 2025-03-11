// Fill out your copyright notice in the Description page of Project Settings.


#include "RepeatingDialogue.h"

void URepeatingDialogue::getNextDialogue(FString& out_text, bool& out_isFinished)
{
	Super::getNextDialogue(out_text, out_isFinished);

	if (out_isFinished) {
		dialogueIndex = 0;
	}
}
