// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDeliveryService/SDS_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDS_GameMode() {}
// Cross Module References
	SPACEDELIVERYSERVICE_API UClass* Z_Construct_UClass_ASDS_GameMode_NoRegister();
	SPACEDELIVERYSERVICE_API UClass* Z_Construct_UClass_ASDS_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceDeliveryService();
// End Cross Module References
	void ASDS_GameMode::StaticRegisterNativesASDS_GameMode()
	{
	}
	UClass* Z_Construct_UClass_ASDS_GameMode_NoRegister()
	{
		return ASDS_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASDS_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASDS_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceDeliveryService,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDS_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SDS_GameMode.h" },
		{ "ModuleRelativePath", "SDS_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASDS_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDS_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASDS_GameMode_Statics::ClassParams = {
		&ASDS_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASDS_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASDS_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASDS_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASDS_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASDS_GameMode, 1193309247);
	template<> SPACEDELIVERYSERVICE_API UClass* StaticClass<ASDS_GameMode>()
	{
		return ASDS_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASDS_GameMode(Z_Construct_UClass_ASDS_GameMode, &ASDS_GameMode::StaticClass, TEXT("/Script/SpaceDeliveryService"), TEXT("ASDS_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDS_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
