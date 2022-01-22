// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickStart/CameraDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirector() {}
// Cross Module References
	QUICKSTART_API UScriptStruct* Z_Construct_UScriptStruct_FChangeCameraData();
	UPackage* Z_Construct_UPackage__Script_QuickStart();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUICKSTART_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	QUICKSTART_API UClass* Z_Construct_UClass_ACameraDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FChangeCameraData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUICKSTART_API uint32 Get_Z_Construct_UScriptStruct_FChangeCameraData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChangeCameraData, Z_Construct_UPackage__Script_QuickStart(), TEXT("ChangeCameraData"), sizeof(FChangeCameraData), Get_Z_Construct_UScriptStruct_FChangeCameraData_Hash());
	}
	return Singleton;
}
template<> QUICKSTART_API UScriptStruct* StaticStruct<FChangeCameraData>()
{
	return FChangeCameraData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChangeCameraData(FChangeCameraData::StaticStruct, TEXT("/Script/QuickStart"), TEXT("ChangeCameraData"), false, nullptr, nullptr);
static struct FScriptStruct_QuickStart_StaticRegisterNativesFChangeCameraData
{
	FScriptStruct_QuickStart_StaticRegisterNativesFChangeCameraData()
	{
		UScriptStruct::DeferCppStructOps<FChangeCameraData>(FName(TEXT("ChangeCameraData")));
	}
} ScriptStruct_QuickStart_StaticRegisterNativesFChangeCameraData;
	struct Z_Construct_UScriptStruct_FChangeCameraData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenCameraChanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenCameraChanges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothBlendTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeCameraData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChangeCameraData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "ChangeCameraData" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeCameraData, Camera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges_MetaData[] = {
		{ "Category", "ChangeCameraData" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges = { "TimeBetweenCameraChanges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeCameraData, TimeBetweenCameraChanges), METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime_MetaData[] = {
		{ "Category", "ChangeCameraData" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime = { "SmoothBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeCameraData, SmoothBlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChangeCameraData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_TimeBetweenCameraChanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeCameraData_Statics::NewProp_SmoothBlendTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChangeCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuickStart,
		nullptr,
		&NewStructOps,
		"ChangeCameraData",
		sizeof(FChangeCameraData),
		alignof(FChangeCameraData),
		Z_Construct_UScriptStruct_FChangeCameraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeCameraData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeCameraData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChangeCameraData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChangeCameraData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuickStart();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChangeCameraData"), sizeof(FChangeCameraData), Get_Z_Construct_UScriptStruct_FChangeCameraData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChangeCameraData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChangeCameraData_Hash() { return 949733072U; }
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
	}
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_ACameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cameras_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cameras_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cameras;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToNextCameraChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToNextCameraChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraDirector.h" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_Inner = { "Cameras", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChangeCameraData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras = { "Cameras", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraDirector, Cameras), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "Comment", "// UPROPERTY(EditAnywhere)\n// AActor* CameraOne;\n//\n// UPROPERTY(EditAnywhere)\n// AActor* CameraTwo;\n" },
		{ "ModuleRelativePath", "CameraDirector.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nAActor* CameraOne;\n\nUPROPERTY(EditAnywhere)\nAActor* CameraTwo;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange = { "TimeToNextCameraChange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraDirector, TimeToNextCameraChange), METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_Cameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_TimeToNextCameraChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraDirector_Statics::ClassParams = {
		&ACameraDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraDirector, 2070025664);
	template<> QUICKSTART_API UClass* StaticClass<ACameraDirector>()
	{
		return ACameraDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraDirector(Z_Construct_UClass_ACameraDirector, &ACameraDirector::StaticClass, TEXT("/Script/QuickStart"), TEXT("ACameraDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
