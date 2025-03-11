// Fill out your copyright notice in the Description page of Project Settings.


#include "Dialogue.h"

void UDialogue::getNextDialogue(FString& out_text, bool& out_isFinished)
{
	if (dialogueIndex >= dialogue.GetAllocatedSize()) {
		out_isFinished = true;
		out_text = FString();
		return;
	}

	dialogueIndex++;
	out_text = dialogue[dialogueIndex - 1];
	out_isFinished = dialogueIndex >= dialogue.GetAllocatedSize();
}

void UDialogue::resetDialogue()
{
	dialogueIndex = 0;
}

UDialogue* UDialogue::nextDialogue()
{
	return nullptr;
}
