// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dialogue.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class COOLDIALOGUESYS_API UDialogue : public UObject
{
	GENERATED_BODY()
  public: 
	  UFUNCTION(BlueprintCallable)
	  virtual std::pair<FString, bool> getNextDialogue();
	  UFUNCTION(BlueprintCallable)
	  void resetDialogue();
	  UFUNCTION(BlueprintCallable)
	  virtual UDialogue* nextDialogue();

  private: 
	  UPROPERTY(VisibleAnywhere)
	  TArray<FString> dialogue;
	  UPROPERTY(VisibleAnywhere)
	  FString speakerName;	  
	  UPROPERTY(VisibleAnywhere)
	  int dialogueIndex;	  
	  UPROPERTY(VisibleAnywhere)
	  FColor nameColor;
};
