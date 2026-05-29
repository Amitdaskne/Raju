#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分16秒
namespace SDK
{
//Classes
// Class OMobileFBPL.OMobileFBPL
// 0x0000 (0x0028 - 0x0028)
class UOMobileFBPL : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OMobileFBPL.OMobileFBPL");
		return pStaticClass;
	}


	static bool IsRunningOnBattery();
	static bool IsBatteryStateCharging();
	static int GetVolumeState();
	static struct FString GetDeviceName();
	static float GetBatteryTemperature();
	static int GetBatteryLevel();
	static bool AreHeadphonesPluggedIn();
};


}

