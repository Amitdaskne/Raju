#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分18秒
namespace SDK
{
//Classes
// Class ReAutomatic.AutomaticCommonHelper
// 0x0000 (0x0028 - 0x0028)
class UAutomaticCommonHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticCommonHelper");
		return pStaticClass;
	}


	static bool IsClassOf(class UObject* Object, class UClass* Class);
};


// Class ReAutomatic.AutomaticPlatformHelper
// 0x0000 (0x0028 - 0x0028)
class UAutomaticPlatformHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticPlatformHelper");
		return pStaticClass;
	}


	static struct FString GetDeviceName();
};


// Class ReAutomatic.AutomaticUIHelper
// 0x0000 (0x0028 - 0x0028)
class UAutomaticUIHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticUIHelper");
		return pStaticClass;
	}


	static bool IsWidgetVisibleWithUICondition(const struct FFindUICondition& Condition, int Index);
	static bool IsWidgetVisible(class UWidget* Widget);
	static bool IsWidgetTextMatchRegex(class UWidget* Widget, const struct FString& Text);
	static bool IsWidgetMatchType(class UWidget* Widget, EUIType Type);
	static class UWidget* FindWidgetObjectWithUICondition(const struct FFindUICondition& Condition, int Index);
	static class UWidget* FindUWidgetObject(const struct FString& Name, int Index);
};


}

