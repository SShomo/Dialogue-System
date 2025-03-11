// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dialogue.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType)
class COOLDIALOGUESYS_API UDialogue : public UObject
{
	GENERATED_BODY()
  public: 
	  UFUNCTION(BlueprintCallable)
	  virtual void getNextDialogue(FString& text_out, bool& isFinished_out);
	  UFUNCTION(BlueprintCallable)
	  void resetDialogue();
	  UFUNCTION(BlueprintCallable)
	  virtual UDialogue* nextDialogue();

  protected: 
	  UPROPERTY(VisibleAnywhere)
	  TArray<FString> dialogue;
	  UPROPERTY(VisibleAnywhere)
	  FString speakerName;	  
	  UPROPERTY(VisibleAnywhere)
	  int dialogueIndex;	  
	  UPROPERTY(VisibleAnywhere)
	  FColor nameColor;
};
