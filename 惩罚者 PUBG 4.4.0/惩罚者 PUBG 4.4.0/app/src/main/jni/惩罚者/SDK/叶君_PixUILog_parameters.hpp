#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分21秒
#include "../SDK.hpp"

namespace SDK
{
//Parameters
// Function PixUILog.PxLogMgr.PxLogToggleSwitchLevel
struct UPxLogMgr_PxLogToggleSwitchLevel_Params
{
	EPxLogLevels                                       eLogLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beOpen;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUILog.PxLogMgr.PxLogToggleSwitchGroup
struct UPxLogMgr_PxLogToggleSwitchGroup_Params
{
	EPxLogGroups                                       eLogGroup;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beOpen;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUILog.PxLogMgr.PxLogToggleForceLocalOutPut
struct UPxLogMgr_PxLogToggleForceLocalOutPut_Params
{
	bool                                               beOpen;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUILog.PxLogMgr.PxLogEnable
struct UPxLogMgr_PxLogEnable_Params
{
	bool                                               beEnable;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUILog.PxLogMgr.Get
struct UPxLogMgr_Get_Params
{
	class UPxLogMgr*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUILog.PxLogMgr.DispatchLog
struct UPxLogMgr_DispatchLog_Params
{
	EPxLogGroups                                       eLogGroup;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EPxLogLevels                                       eLogLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strLogContent;                                            // (Parm, ZeroConstructor)
};

}

