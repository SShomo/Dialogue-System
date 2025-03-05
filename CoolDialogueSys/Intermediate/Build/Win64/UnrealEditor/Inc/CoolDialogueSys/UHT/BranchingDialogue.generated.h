// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BranchingDialogue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogue;
#ifdef COOLDIALOGUESYS_BranchingDialogue_generated_h
#error "BranchingDialogue.generated.h already included, missing '#pragma once' in BranchingDialogue.h"
#endif
#define COOLDIALOGUESYS_BranchingDialogue_generated_h

#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execchooseDialogue);


#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBranchingDialogue(); \
	friend struct Z_Construct_UClass_UBranchingDialogue_Statics; \
public: \
	DECLARE_CLASS(UBranchingDialogue, UDialogue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoolDialogueSys"), NO_API) \
	DECLARE_SERIALIZER(UBranchingDialogue)


#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBranchingDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBranchingDialogue(UBranchingDialogue&&); \
	UBranchingDialogue(const UBranchingDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBranchingDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBranchingDialogue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBranchingDialogue) \
	NO_API virtual ~UBranchingDialogue();


#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_12_PROLOG
#define FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOLDIALOGUESYS_API UClass* StaticClass<class UBranchingDialogue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
