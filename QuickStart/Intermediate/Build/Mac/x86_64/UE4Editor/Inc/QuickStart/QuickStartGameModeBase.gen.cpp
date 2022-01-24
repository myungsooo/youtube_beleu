// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickStart/QuickStartGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickStartGameModeBase() {}
// Cross Module References
	QUICKSTART_API UClass* Z_Construct_UClass_AQuickStartGameModeBase_NoRegister();
	QUICKSTART_API UClass* Z_Construct_UClass_AQuickStartGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_QuickStart();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AQuickStartGameModeBase::execChangeMenuWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void AQuickStartGameModeBase::StaticRegisterNativesAQuickStartGameModeBase()
	{
		UClass* Class = AQuickStartGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &AQuickStartGameModeBase::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics
	{
		struct QuickStartGameModeBase_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuickStartGameModeBase_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMG_Game" },
		{ "ModuleRelativePath", "QuickStartGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuickStartGameModeBase, nullptr, "ChangeMenuWidget", nullptr, nullptr, sizeof(QuickStartGameModeBase_eventChangeMenuWidget_Parms), Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AQuickStartGameModeBase_NoRegister()
	{
		return AQuickStartGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AQuickStartGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuickStartGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickStart,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuickStartGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuickStartGameModeBase_ChangeMenuWidget, "ChangeMenuWidget" }, // 969930397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuickStartGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "QuickStartGameModeBase.h" },
		{ "ModuleRelativePath", "QuickStartGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData[] = {
		{ "Category", "UMG_Game" },
		{ "ModuleRelativePath", "QuickStartGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_StartingWidgetClass = { "StartingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuickStartGameModeBase, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "QuickStartGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuickStartGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_CurrentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuickStartGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_StartingWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuickStartGameModeBase_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuickStartGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuickStartGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuickStartGameModeBase_Statics::ClassParams = {
		&AQuickStartGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuickStartGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuickStartGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AQuickStartGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuickStartGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuickStartGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuickStartGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuickStartGameModeBase, 384081267);
	template<> QUICKSTART_API UClass* StaticClass<AQuickStartGameModeBase>()
	{
		return AQuickStartGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuickStartGameModeBase(Z_Construct_UClass_AQuickStartGameModeBase, &AQuickStartGameModeBase::StaticClass, TEXT("/Script/QuickStart"), TEXT("AQuickStartGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuickStartGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
