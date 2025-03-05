// Fill out your copyright notice in the Description page of Project Settings.


#include "BranchingDialogue.h"

UDialogue* UBranchingDialogue::chooseDialogue(int selection)
{
    return &dialogueOptions[selection];
}
