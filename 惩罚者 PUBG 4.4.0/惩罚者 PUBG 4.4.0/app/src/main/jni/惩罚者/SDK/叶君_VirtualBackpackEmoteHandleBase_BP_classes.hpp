#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分42秒
namespace SDK
{
//Classes
// BlueprintGeneratedClass VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C
// 0x0000 (0x01E8 - 0x01E8)
class UVirtualBackpackEmoteHandleBase_BP_C : public UBackpackEmoteHandle
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C");
		return pStaticClass;
	}


	struct FBattleItemData ExtractItemData();
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
};


}

