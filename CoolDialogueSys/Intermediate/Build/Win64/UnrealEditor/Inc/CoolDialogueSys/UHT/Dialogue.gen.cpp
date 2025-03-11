// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoolDialogueSys/Public/Dialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue() {}

// Begin Cross Module References
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UDialogue();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
UPackage* Z_Construct_UPackage__Script_CoolDialogueSys();
// End Cross Module References

// Begin Class UDialogue Function getNextDialogue
struct Z_Construct_UFunction_UDialogue_getNextDialogue_Statics
{
	struct Dialogue_eventgetNextDialogue_Parms
	{
		FString text_out;
		bool isFinished_out;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_text_out;
	static void NewProp_isFinished_out_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFinished_out;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::NewProp_text_out = { "text_out", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventgetNextDialogue_Parms, text_out), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::NewProp_isFinished_out_SetBit(void* Obj)
{
	((Dialogue_eventgetNextDialogue_Parms*)Obj)->isFinished_out = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::NewProp_isFinished_out = { "isFinished_out", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dialogue_eventgetNextDialogue_Parms), &Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::NewProp_isFinished_out_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::NewProp_text_out,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::NewProp_isFinished_out,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "getNextDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::Dialogue_eventgetNextDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::Dialogue_eventgetNextDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogue_getNextDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_getNextDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogue::execgetNextDialogue)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_text_out);
	P_GET_UBOOL_REF(Z_Param_Out_isFinished_out);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->getNextDialogue(Z_Param_Out_text_out,Z_Param_Out_isFinished_out);
	P_NATIVE_END;
}
// End Class UDialogue Function getNextDialogue

// Begin Class UDialogue Function nextDialogue
struct Z_Construct_UFunction_UDialogue_nextDialogue_Statics
{
	struct Dialogue_eventnextDialogue_Parms
	{
		UDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogue_nextDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dialogue_eventnextDialogue_Parms, ReturnValue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogue_nextDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogue_nextDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_nextDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_nextDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "nextDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogue_nextDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_nextDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogue_nextDialogue_Statics::Dialogue_eventnextDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_nextDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_nextDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogue_nextDialogue_Statics::Dialogue_eventnextDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogue_nextDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_nextDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogue::execnextDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogue**)Z_Param__Result=P_THIS->nextDialogue();
	P_NATIVE_END;
}
// End Class UDialogue Function nextDialogue

// Begin Class UDialogue Function resetDialogue
struct Z_Construct_UFunction_UDialogue_resetDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogue_resetDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, nullptr, "resetDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogue_resetDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogue_resetDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogue_resetDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogue_resetDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogue::execresetDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->resetDialogue();
	P_NATIVE_END;
}
// End Class UDialogue Function resetDialogue

// Begin Class UDialogue
void UDialogue::StaticRegisterNativesUDialogue()
{
	UClass* Class = UDialogue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "getNextDialogue", &UDialogue::execgetNextDialogue },
		{ "nextDialogue", &UDialogue::execnextDialogue },
		{ "resetDialogue", &UDialogue::execresetDialogue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogue);
UClass* Z_Construct_UClass_UDialogue_NoRegister()
{
	return UDialogue::StaticClass();
}
struct Z_Construct_UClass_UDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Dialogue.h" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speakerName_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dialogueIndex_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nameColor_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_dialogue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_dialogue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_speakerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_dialogueIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_nameColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogue_getNextDialogue, "getNextDialogue" }, // 3409156770
		{ &Z_Construct_UFunction_UDialogue_nextDialogue, "nextDialogue" }, // 3891148742
		{ &Z_Construct_UFunction_UDialogue_resetDialogue, "resetDialogue" }, // 3542391249
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_dialogue_Inner = { "dialogue", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_dialogue = { "dialogue", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, dialogue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dialogue_MetaData), NewProp_dialogue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_speakerName = { "speakerName", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, speakerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speakerName_MetaData), NewProp_speakerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_dialogueIndex = { "dialogueIndex", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, dialogueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dialogueIndex_MetaData), NewProp_dialogueIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogue_Statics::NewProp_nameColor = { "nameColor", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogue, nameColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nameColor_MetaData), NewProp_nameColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_dialogue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_speakerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_dialogueIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogue_Statics::NewProp_nameColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CoolDialogueSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogue_Statics::ClassParams = {
	&UDialogue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogue()
{
	if (!Z_Registration_Info_UClass_UDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogue.OuterSingleton, Z_Construct_UClass_UDialogue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogue.OuterSingleton;
}
template<> COOLDIALOGUESYS_API UClass* StaticClass<UDialogue>()
{
	return UDialogue::StaticClass();
}
UDialogue::UDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogue);
UDialogue::~UDialogue() {}
// End Class UDialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogue, UDialogue::StaticClass, TEXT("UDialogue"), &Z_Registration_Info_UClass_UDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogue), 2779256732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_739675322(TEXT("/Script/CoolDialogueSys"),
	Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_Dialogue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
