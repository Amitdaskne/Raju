#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分42秒
namespace SDK
{
//Classes
// BlueprintGeneratedClass VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C
// 0x000E (0x0BA0 - 0x0B92)
class UVirtualBattleItemHandle_AvatarBP_C : public UBattleItemHandle_AvatarBP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B92(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B98(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C");
		return pStaticClass;
	}


	void GetWrapperClass(class UClass** WrapperClass);
	void Constuct(struct FItemDefineID* InDefineID);
	void ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP(int EntryPoint);
};


}

