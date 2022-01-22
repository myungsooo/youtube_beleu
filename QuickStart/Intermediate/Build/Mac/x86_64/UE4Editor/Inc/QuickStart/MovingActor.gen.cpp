// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickStart/3/MovingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingActor() {}
// Cross Module References
	QUICKSTART_API UClass* Z_Construct_UClass_AMovingActor_NoRegister();
	QUICKSTART_API UClass* Z_Construct_UClass_AMovingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuickStart();
// End Cross Module References
	void AMovingActor::StaticRegisterNativesAMovingActor()
	{
	}
	UClass* Z_Construct_UClass_AMovingActor_NoRegister()
	{
		return AMovingActor::StaticClass();
	}
	struct Z_Construct_UClass_AMovingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "3/MovingActor.h" },
		{ "ModuleRelativePath", "3/MovingActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingActor_Statics::ClassParams = {
		&AMovingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingActor, 3039819580);
	template<> QUICKSTART_API UClass* StaticClass<AMovingActor>()
	{
		return AMovingActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingActor(Z_Construct_UClass_AMovingActor, &AMovingActor::StaticClass, TEXT("/Script/QuickStart"), TEXT("AMovingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
