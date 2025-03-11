// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoolDialogueSys/Public/SequenceDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceDialogue() {}

// Begin Cross Module References
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UDialogue();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_USequenceDialogue();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_USequenceDialogue_NoRegister();
UPackage* Z_Construct_UPackage__Script_CoolDialogueSys();
// End Cross Module References

// Begin Class USequenceDialogue
void USequenceDialogue::StaticRegisterNativesUSequenceDialogue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceDialogue);
UClass* Z_Construct_UClass_USequenceDialogue_NoRegister()
{
	return USequenceDialogue::StaticClass();
}
struct Z_Construct_UClass_USequenceDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SequenceDialogue.h" },
		{ "ModuleRelativePath", "Public/SequenceDialogue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USequenceDialogue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogue,
	(UObject* (*)())Z_Construct_UPackage__Script_CoolDialogueSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceDialogue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceDialogue_Statics::ClassParams = {
	&USequenceDialogue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_USequenceDialogue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequenceDialogue()
{
	if (!Z_Registration_Info_UClass_USequenceDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceDialogue.OuterSingleton, Z_Construct_UClass_USequenceDialogue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequenceDialogue.OuterSingleton;
}
template<> COOLDIALOGUESYS_API UClass* StaticClass<USequenceDialogue>()
{
	return USequenceDialogue::StaticClass();
}
USequenceDialogue::USequenceDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceDialogue);
USequenceDialogue::~USequenceDialogue() {}
// End Class USequenceDialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_SequenceDialogue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequenceDialogue, USequenceDialogue::StaticClass, TEXT("USequenceDialogue"), &Z_Registration_Info_UClass_USequenceDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceDialogue), 2271934738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_SequenceDialogue_h_3095389305(TEXT("/Script/CoolDialogueSys"),
	Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_SequenceDialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_SequenceDialogue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
