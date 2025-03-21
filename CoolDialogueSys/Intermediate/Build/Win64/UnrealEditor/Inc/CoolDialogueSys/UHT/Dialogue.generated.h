// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dialogue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogue;
#ifdef COOLDIALOGUESYS_Dialogue_generated_h
#error "Dialogue.generated.h already included, missing '#pragma once' in Dialogue.h"
#endif
#define COOLDIALOGUESYS_Dialogue_generated_h

#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execnextDialogue); \
	DECLARE_FUNCTION(execresetDialogue); \
	DECLARE_FUNCTION(execgetNextDialogue);


#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend struct Z_Construct_UClass_UDialogue_Statics; \
public: \
	DECLARE_CLASS(UDialogue, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoolDialogueSys"), NO_API) \
	DECLARE_SERIALIZER(UDialogue)


#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogue(UDialogue&&); \
	UDialogue(const UDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogue) \
	NO_API virtual ~UDialogue();


#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_12_PROLOG
#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOLDIALOGUESYS_API UClass* StaticClass<class UDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
