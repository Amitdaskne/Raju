#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分19秒
#include "../SDK.hpp"

namespace SDK
{
//Parameters
// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
struct UGameFrameworkComponentManager_RemoveReceiver_Params
{
	class AActor*                                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
struct UGameFrameworkComponentManager_AddReceiver_Params
{
	class AActor*                                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddOnlyInGameWorlds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

