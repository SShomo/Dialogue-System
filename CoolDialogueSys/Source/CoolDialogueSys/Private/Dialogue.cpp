// Fill out your copyright notice in the Description page of Project Settings.


#include "Dialogue.h"

std::pair<FString, bool> UDialogue::getNextDialogue()
{
	if(dialogueIndex >= dialogue.GetAllocatedSize())
		return std::pair(FString(), true);

	dialogueIndex++;
	return std::pair(dialogue[dialogueIndex - 1], false);
}

void UDialogue::resetDialogue()
{
	dialogueIndex = 0;
}

UDialogue* UDialogue::nextDialogue()
{
	return nullptr;
}
