// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuickStart/Countdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountdown() {}
// Cross Module References
	QUICKSTART_API UClass* Z_Construct_UClass_ACountdown_NoRegister();
	QUICKSTART_API UClass* Z_Construct_UClass_ACountdown();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuickStart();
// End Cross Module References
	DEFINE_FUNCTION(ACountdown::execCountdownHasFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CountdownHasFinished_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACountdown_CountdownHasFinished = FName(TEXT("CountdownHasFinished"));
	void ACountdown::CountdownHasFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACountdown_CountdownHasFinished),NULL);
	}
	void ACountdown::StaticRegisterNativesACountdown()
	{
		UClass* Class = ACountdown::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CountdownHasFinished", &ACountdown::execCountdownHasFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACountdown_CountdownHasFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACountdown_CountdownHasFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xeb\x94\x94\xec\x9e\x90\xec\x9d\xb4\xeb\x84\x88\xea\xb0\x80 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xed\x95\xa8\xec\x88\x98\xec\x9d\x98 \xea\xb8\xb0\xeb\x8a\xa5\xec\x9d\x84 \xec\x88\x98\xec\xa0\x95\xed\x95\xa0\xec\x88\x98 \xec\x9e\x88\xea\xb2\x8c \xed\x95\xb4\xec\xa4\x8d\xeb\x8b\x88\xeb\x8b\xa4.\n" },
		{ "ModuleRelativePath", "Countdown.h" },
		{ "ToolTip", "\xeb\x94\x94\xec\x9e\x90\xec\x9d\xb4\xeb\x84\x88\xea\xb0\x80 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xed\x95\xa8\xec\x88\x98\xec\x9d\x98 \xea\xb8\xb0\xeb\x8a\xa5\xec\x9d\x84 \xec\x88\x98\xec\xa0\x95\xed\x95\xa0\xec\x88\x98 \xec\x9e\x88\xea\xb2\x8c \xed\x95\xb4\xec\xa4\x8d\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACountdown_CountdownHasFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACountdown, nullptr, "CountdownHasFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACountdown_CountdownHasFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACountdown_CountdownHasFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACountdown_CountdownHasFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACountdown_CountdownHasFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACountdown_NoRegister()
	{
		return ACountdown::StaticClass();
	}
	struct Z_Construct_UClass_ACountdown_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountdownTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACountdown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuickStart,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACountdown_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACountdown_CountdownHasFinished, "CountdownHasFinished" }, // 2201708230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACountdown_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Countdown.h" },
		{ "ModuleRelativePath", "Countdown.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACountdown_Statics::NewProp_CountdownTime_MetaData[] = {
		{ "Category", "Countdown" },
		{ "Comment", "// How long, in Seconds, the countdown will run\n" },
		{ "ModuleRelativePath", "Countdown.h" },
		{ "ToolTip", "How long, in Seconds, the countdown will run" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACountdown_Statics::NewProp_CountdownTime = { "CountdownTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACountdown, CountdownTime), METADATA_PARAMS(Z_Construct_UClass_ACountdown_Statics::NewProp_CountdownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACountdown_Statics::NewProp_CountdownTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACountdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACountdown_Statics::NewProp_CountdownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACountdown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACountdown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACountdown_Statics::ClassParams = {
		&ACountdown::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACountdown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACountdown_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACountdown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACountdown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACountdown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACountdown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACountdown, 2969234194);
	template<> QUICKSTART_API UClass* StaticClass<ACountdown>()
	{
		return ACountdown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACountdown(Z_Construct_UClass_ACountdown, &ACountdown::StaticClass, TEXT("/Script/QuickStart"), TEXT("ACountdown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACountdown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
