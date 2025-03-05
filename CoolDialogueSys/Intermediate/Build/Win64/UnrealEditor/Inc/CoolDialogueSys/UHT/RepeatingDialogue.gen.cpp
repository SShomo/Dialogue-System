// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoolDialogueSys/Public/RepeatingDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepeatingDialogue() {}

// Begin Cross Module References
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_UDialogue();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_URepeatingDialogue();
COOLDIALOGUESYS_API UClass* Z_Construct_UClass_URepeatingDialogue_NoRegister();
UPackage* Z_Construct_UPackage__Script_CoolDialogueSys();
// End Cross Module References

// Begin Class URepeatingDialogue
void URepeatingDialogue::StaticRegisterNativesURepeatingDialogue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URepeatingDialogue);
UClass* Z_Construct_UClass_URepeatingDialogue_NoRegister()
{
	return URepeatingDialogue::StaticClass();
}
struct Z_Construct_UClass_URepeatingDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RepeatingDialogue.h" },
		{ "ModuleRelativePath", "Public/RepeatingDialogue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URepeatingDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URepeatingDialogue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogue,
	(UObject* (*)())Z_Construct_UPackage__Script_CoolDialogueSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URepeatingDialogue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URepeatingDialogue_Statics::ClassParams = {
	&URepeatingDialogue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URepeatingDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_URepeatingDialogue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URepeatingDialogue()
{
	if (!Z_Registration_Info_UClass_URepeatingDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URepeatingDialogue.OuterSingleton, Z_Construct_UClass_URepeatingDialogue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URepeatingDialogue.OuterSingleton;
}
template<> COOLDIALOGUESYS_API UClass* StaticClass<URepeatingDialogue>()
{
	return URepeatingDialogue::StaticClass();
}
URepeatingDialogue::URepeatingDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URepeatingDialogue);
URepeatingDialogue::~URepeatingDialogue() {}
// End Class URepeatingDialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_RepeatingDialogue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URepeatingDialogue, URepeatingDialogue::StaticClass, TEXT("URepeatingDialogue"), &Z_Registration_Info_UClass_URepeatingDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URepeatingDialogue), 3373645476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_RepeatingDialogue_h_1162357685(TEXT("/Script/CoolDialogueSys"),
	Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_RepeatingDialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavier_olmstead_repos_Dialogue_System_CoolDialogueSys_Source_CoolDialogueSys_Public_RepeatingDialogue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
