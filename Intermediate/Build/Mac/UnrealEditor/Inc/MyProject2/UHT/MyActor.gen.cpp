// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Public/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT2_API UClass* Z_Construct_UClass_AMyActor();
MYPROJECT2_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References

// Begin Class AMyActor Function TransformedCos
struct Z_Construct_UFunction_AMyActor_TransformedCos_Statics
{
	struct MyActor_eventTransformedCos_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_TransformedCos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventTransformedCos_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_TransformedCos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_TransformedCos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_TransformedCos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_TransformedCos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "TransformedCos", nullptr, nullptr, Z_Construct_UFunction_AMyActor_TransformedCos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_TransformedCos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_TransformedCos_Statics::MyActor_eventTransformedCos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_TransformedCos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_TransformedCos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyActor_TransformedCos_Statics::MyActor_eventTransformedCos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyActor_TransformedCos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_TransformedCos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor::execTransformedCos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TransformedCos();
	P_NATIVE_END;
}
// End Class AMyActor Function TransformedCos

// Begin Class AMyActor Function TransformedSin
struct Z_Construct_UFunction_AMyActor_TransformedSin_Statics
{
	struct MyActor_eventTransformedSin_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_TransformedSin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventTransformedSin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_TransformedSin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_TransformedSin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_TransformedSin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_TransformedSin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "TransformedSin", nullptr, nullptr, Z_Construct_UFunction_AMyActor_TransformedSin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_TransformedSin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_TransformedSin_Statics::MyActor_eventTransformedSin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_TransformedSin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_TransformedSin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyActor_TransformedSin_Statics::MyActor_eventTransformedSin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyActor_TransformedSin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_TransformedSin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor::execTransformedSin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TransformedSin();
	P_NATIVE_END;
}
// End Class AMyActor Function TransformedSin

// Begin Class AMyActor
void AMyActor::StaticRegisterNativesAMyActor()
{
	UClass* Class = AMyActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TransformedCos", &AMyActor::execTransformedCos },
		{ "TransformedSin", &AMyActor::execTransformedSin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
UClass* Z_Construct_UClass_AMyActor_NoRegister()
{
	return AMyActor::StaticClass();
}
struct Z_Construct_UClass_AMyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeConstant_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyActor" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "MyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_TransformedCos, "TransformedCos" }, // 3042990986
		{ &Z_Construct_UFunction_AMyActor_TransformedSin, "TransformedSin" }, // 235151516
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_TimeConstant = { "TimeConstant", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, TimeConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeConstant_MetaData), NewProp_TimeConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, RunningTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunningTime_MetaData), NewProp_RunningTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_TimeConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_RunningTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_ItemMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
	&AMyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor()
{
	if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
}
template<> MYPROJECT2_API UClass* StaticClass<AMyActor>()
{
	return AMyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
AMyActor::~AMyActor() {}
// End Class AMyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_mubashirosmani_Desktop_Unreal_MyProject2_5_4_Source_MyProject2_Public_MyActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 1683705189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mubashirosmani_Desktop_Unreal_MyProject2_5_4_Source_MyProject2_Public_MyActor_h_677487034(TEXT("/Script/MyProject2"),
	Z_CompiledInDeferFile_FID_mubashirosmani_Desktop_Unreal_MyProject2_5_4_Source_MyProject2_Public_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mubashirosmani_Desktop_Unreal_MyProject2_5_4_Source_MyProject2_Public_MyActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
