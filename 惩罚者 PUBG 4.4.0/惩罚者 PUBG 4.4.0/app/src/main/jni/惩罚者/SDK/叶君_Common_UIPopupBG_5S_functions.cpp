// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分47秒
#include "../SDK.hpp"

namespace SDK
{
//Functions
// Function Common_UIPopupBG_5S.Common_UIPopupBG_5S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommon_UIPopupBG_5S_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_UIPopupBG_5S.Common_UIPopupBG_5S_C.Construct");

	UCommon_UIPopupBG_5S_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_UIPopupBG_5S.Common_UIPopupBG_5S_C.ExecuteUbergraph_Common_UIPopupBG_5S
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_UIPopupBG_5S_C::ExecuteUbergraph_Common_UIPopupBG_5S(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_UIPopupBG_5S.Common_UIPopupBG_5S_C.ExecuteUbergraph_Common_UIPopupBG_5S");

	UCommon_UIPopupBG_5S_C_ExecuteUbergraph_Common_UIPopupBG_5S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

