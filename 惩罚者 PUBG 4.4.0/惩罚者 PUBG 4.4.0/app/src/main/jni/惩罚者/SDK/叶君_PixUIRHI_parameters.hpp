#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分21秒
#include "../SDK.hpp"

namespace SDK
{
//Parameters
// Function PixUIRHI.PxRHIImage.GetHandleObject
struct UPxRHIImage_GetHandleObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUIRHI.PxRHIMgr.RHIImageUpdate
struct UPxRHIMgr_RHIImageUpdate_Params
{
	class UPxRHIMgr*                                   pPxRHIImage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUIRHI.PxRHIMgr.RHIImageFindByObject
struct UPxRHIMgr_RHIImageFindByObject_Params
{
	class UObject*                                     pCoreObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPxRHIMgr*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUIRHI.PxRHIMgr.RHIImageDestroy
struct UPxRHIMgr_RHIImageDestroy_Params
{
	class UPxRHIMgr*                                   pPxRHIImage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUIRHI.PxRHIMgr.RHIImageCreate
struct UPxRHIMgr_RHIImageCreate_Params
{
	class UPxRHIImage*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUIRHI.PxRHIMgr.Get
struct UPxRHIMgr_Get_Params
{
	class UPxRHIMgr*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

