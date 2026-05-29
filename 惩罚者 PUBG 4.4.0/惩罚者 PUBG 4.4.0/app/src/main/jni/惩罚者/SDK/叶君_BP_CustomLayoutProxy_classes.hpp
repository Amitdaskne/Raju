#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分32秒
namespace SDK
{
//Classes
// BlueprintGeneratedClass BP_CustomLayoutProxy.BP_CustomLayoutProxy_C
// 0x0000 (0x01A8 - 0x01A8)
class UBP_CustomLayoutProxy_C : public UCustomLayoutProxy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_CustomLayoutProxy.BP_CustomLayoutProxy_C");
		return pStaticClass;
	}


	void AddLayoutDetailCache(bool Invalid, struct FBP_STRUCT_UIElemLayoutDetail* BPStruct);
};


}

