// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoolDialogueSys/Public/BranchingDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBranchingDialogue() {}

// Begin Cross Module References
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UBranchingDialogue();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UBranchingDialogue_NoRegister();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UDialogue();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
UPackage* Z_Construct_UPackage__Script_CoolDialogueSys();
// End Cross Module References

// Begin Class UBranchingDialogue Function chooseDialogue
struct Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics
{
	struct BranchingDialogue_eventchooseDialogue_Parms
	{
		int32 selection;
		UDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BranchingDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_selection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::NewProp_selection = { "selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BranchingDialogue_eventchooseDialogue_Parms, selection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BranchingDialogue_eventchooseDialogue_Parms, ReturnValue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::NewProp_selection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBranchingDialogue, nullptr, "chooseDialogue", nullptr, nullptr, Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::BranchingDialogue_eventchooseDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::BranchingDialogue_eventchooseDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBranchingDialogue_chooseDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBranchingDialogue_chooseDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBranchingDialogue::execchooseDialogue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_selection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogue**)Z_Param__Result=P_THIS->chooseDialogue(Z_Param_selection);
	P_NATIVE_END;
}
// End Class UBranchingDialogue Function chooseDialogue

// Begin Class UBranchingDialogue
void UBranchingDialogue::StaticRegisterNativesUBranchingDialogue()
{
	UClass* Class = UBranchingDialogue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "chooseDialogue", &UBranchingDialogue::execchooseDialogue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBranchingDialogue);
UClass* Z_Construct_UClass_UBranchingDialogue_NoRegister()
{
	return UBranchingDialogue::StaticClass();
}
struct Z_Construct_UClass_UBranchingDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BranchingDialogue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BranchingDialogue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBranchingDialogue_chooseDialogue, "chooseDialogue" }, // 3369169906
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBranchingDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBranchingDialogue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogue,
	(UObject* (*)())Z_Construct_UPackage__Script_CoolDialogueSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBranchingDialogue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBranchingDialogue_Statics::ClassParams = {
	&UBranchingDialogue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBranchingDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_UBranchingDialogue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBranchingDialogue()
{
	if (!Z_Registration_Info_UClass_UBranchingDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBranchingDialogue.OuterSingleton, Z_Construct_UClass_UBranchingDialogue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBranchingDialogue.OuterSingleton;
}
template<> COOLDIALOGUESYS_API UClass* StaticClass<UBranchingDialogue>()
{
	return UBranchingDialogue::StaticClass();
}
UBranchingDialogue::UBranchingDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBranchingDialogue);
UBranchingDialogue::~UBranchingDialogue() {}
// End Class UBranchingDialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBranchingDialogue, UBranchingDialogue::StaticClass, TEXT("UBranchingDialogue"), &Z_Registration_Info_UClass_UBranchingDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBranchingDialogue), 1407384921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_2724346027(TEXT("/Script/CoolDialogueSys"),
	Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_BranchingDialogue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
