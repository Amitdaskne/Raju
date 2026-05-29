#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分16秒
#include "../SDK.hpp"

namespace SDK
{
//Parameters
// Function OMobileFBPL.OMobileFBPL.IsRunningOnBattery
struct UOMobileFBPL_IsRunningOnBattery_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.IsBatteryStateCharging
struct UOMobileFBPL_IsBatteryStateCharging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.GetVolumeState
struct UOMobileFBPL_GetVolumeState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.GetDeviceName
struct UOMobileFBPL_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OMobileFBPL.OMobileFBPL.GetBatteryTemperature
struct UOMobileFBPL_GetBatteryTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.GetBatteryLevel
struct UOMobileFBPL_GetBatteryLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OMobileFBPL.OMobileFBPL.AreHeadphonesPluggedIn
struct UOMobileFBPL_AreHeadphonesPluggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

