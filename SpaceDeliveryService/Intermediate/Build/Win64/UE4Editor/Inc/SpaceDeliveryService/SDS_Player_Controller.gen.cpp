// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceDeliveryService/SDS_Player_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDS_Player_Controller() {}
// Cross Module References
	SPACEDELIVERYSERVICE_API UClass* Z_Construct_UClass_ASDS_Player_Controller_NoRegister();
	SPACEDELIVERYSERVICE_API UClass* Z_Construct_UClass_ASDS_Player_Controller();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SpaceDeliveryService();
// End Cross Module References
	void ASDS_Player_Controller::StaticRegisterNativesASDS_Player_Controller()
	{
	}
	UClass* Z_Construct_UClass_ASDS_Player_Controller_NoRegister()
	{
		return ASDS_Player_Controller::StaticClass();
	}
	struct Z_Construct_UClass_ASDS_Player_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASDS_Player_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceDeliveryService,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDS_Player_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SDS_Player_Controller.h" },
		{ "ModuleRelativePath", "SDS_Player_Controller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASDS_Player_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDS_Player_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASDS_Player_Controller_Statics::ClassParams = {
		&ASDS_Player_Controller::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASDS_Player_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASDS_Player_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASDS_Player_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASDS_Player_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASDS_Player_Controller, 4187681488);
	template<> SPACEDELIVERYSERVICE_API UClass* StaticClass<ASDS_Player_Controller>()
	{
		return ASDS_Player_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASDS_Player_Controller(Z_Construct_UClass_ASDS_Player_Controller, &ASDS_Player_Controller::StaticClass, TEXT("/Script/SpaceDeliveryService"), TEXT("ASDS_Player_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDS_Player_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
