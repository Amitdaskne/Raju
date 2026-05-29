#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分42秒
namespace SDK
{
//Classes
// BlueprintGeneratedClass BattleItemHandle_VirtualCharacter.BattleItemHandle_VirtualCharacter_C
// 0x0000 (0x0138 - 0x0138)
class UBattleItemHandle_VirtualCharacter_C : public UBattleItemHandle_VirtualItem_C
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_VirtualCharacter.BattleItemHandle_VirtualCharacter_C");
		return pStaticClass;
	}


	struct FBattleItemData ExtractItemData();
};


}

