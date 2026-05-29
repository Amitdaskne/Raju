// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分47秒
#include "../SDK.hpp"

namespace SDK
{
//Functions
// Function Com_MsgBox_Small_5S_UIBP.Com_MsgBox_Small_5S_UIBP_C.SetButtonOkState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInIsEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCom_MsgBox_Small_5S_UIBP_C::SetButtonOkState(bool bInIsEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Com_MsgBox_Small_5S_UIBP.Com_MsgBox_Small_5S_UIBP_C.SetButtonOkState");

	UCom_MsgBox_Small_5S_UIBP_C_SetButtonOkState_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

