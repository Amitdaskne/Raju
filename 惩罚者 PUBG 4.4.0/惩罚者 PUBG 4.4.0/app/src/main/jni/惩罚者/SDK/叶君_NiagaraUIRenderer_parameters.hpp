#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分24秒
#include "../SDK.hpp"

namespace SDK
{
//Parameters
// Function NiagaraUIRenderer.NiagaraSystemWidget.SetIsActivated
struct UNiagaraSystemWidget_SetIsActivated_Params
{
	bool                                               bInIsActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
struct UNiagaraSystemWidget_GetNiagaraComponent_Params
{
	class UNiagaraUIComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetIsActivated
struct UNiagaraSystemWidget_GetIsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
struct UNiagaraSystemWidget_DeactivateSystem_Params
{
};

// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
struct UNiagaraSystemWidget_ActivateSystem_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

