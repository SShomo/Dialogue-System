// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoolDialogueSys/Public/SequencedDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencedDialogue() {}

// Begin Cross Module References
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UDialogue();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_USequencedDialogue();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_USequencedDialogue_NoRegister();
UPackage* Z_Construct_UPackage__Script_CoolDialogueSys();
// End Cross Module References

// Begin Class USequencedDialogue
void USequencedDialogue::StaticRegisterNativesUSequencedDialogue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencedDialogue);
UClass* Z_Construct_UClass_USequencedDialogue_NoRegister()
{
	return USequencedDialogue::StaticClass();
}
struct Z_Construct_UClass_USequencedDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SequencedDialogue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SequencedDialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_next_MetaData[] = {
		{ "Category", "SequencedDialogue" },
		{ "ModuleRelativePath", "Public/SequencedDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_next;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencedDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequencedDialogue_Statics::NewProp_next = { "next", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USequencedDialogue, next), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_next_MetaData), NewProp_next_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencedDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencedDialogue_Statics::NewProp_next,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequencedDialogue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USequencedDialogue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogue,
	(UObject* (*)())Z_Construct_UPackage__Script_CoolDialogueSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequencedDialogue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencedDialogue_Statics::ClassParams = {
	&USequencedDialogue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USequencedDialogue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USequencedDialogue_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequencedDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_USequencedDialogue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequencedDialogue()
{
	if (!Z_Registration_Info_UClass_USequencedDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencedDialogue.OuterSingleton, Z_Construct_UClass_USequencedDialogue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequencedDialogue.OuterSingleton;
}
template<> COOLDIALOGUESYS_API UClass* StaticClass<USequencedDialogue>()
{
	return USequencedDialogue::StaticClass();
}
USequencedDialogue::USequencedDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequencedDialogue);
USequencedDialogue::~USequencedDialogue() {}
// End Class USequencedDialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_SequencedDialogue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequencedDialogue, USequencedDialogue::StaticClass, TEXT("USequencedDialogue"), &Z_Registration_Info_UClass_USequencedDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencedDialogue), 990829254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_SequencedDialogue_h_133281434(TEXT("/Script/CoolDialogueSys"),
	Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_SequencedDialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_SequencedDialogue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
