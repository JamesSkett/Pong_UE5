// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/Paddle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PONG_API UClass* Z_Construct_UClass_APaddle();
PONG_API UClass* Z_Construct_UClass_APaddle_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References

// Begin Class APaddle
void APaddle::StaticRegisterNativesAPaddle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaddle);
UClass* Z_Construct_UClass_APaddle_NoRegister()
{
	return APaddle::StaticClass();
}
struct Z_Construct_UClass_APaddle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Paddle.h" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OurVisibleComponent_MetaData[] = {
		{ "Category", "Paddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OurVisibleComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_OurVisibleComponent = { "OurVisibleComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, OurVisibleComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OurVisibleComponent_MetaData), NewProp_OurVisibleComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_OurVisibleComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaddle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Pong,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Statics::ClassParams = {
	&APaddle::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APaddle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams), Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaddle()
{
	if (!Z_Registration_Info_UClass_APaddle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaddle.OuterSingleton, Z_Construct_UClass_APaddle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaddle.OuterSingleton;
}
template<> PONG_API UClass* StaticClass<APaddle>()
{
	return APaddle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
APaddle::~APaddle() {}
// End Class APaddle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pong_Source_Pong_Paddle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaddle, APaddle::StaticClass, TEXT("APaddle"), &Z_Registration_Info_UClass_APaddle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaddle), 2521074369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pong_Source_Pong_Paddle_h_1096284245(TEXT("/Script/Pong"),
	Z_CompiledInDeferFile_FID_Pong_Source_Pong_Paddle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pong_Source_Pong_Paddle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
