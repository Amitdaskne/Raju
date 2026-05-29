// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分22秒
#include "../SDK.hpp"

namespace SDK
{
//Functions
// Function iTOP.FBHelper.DelayToSetAutoInitFacebookLog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           IsAutoInit                     (Parm, ZeroConstructor, IsPlainOldData)

void UFBHelper::DelayToSetAutoInitFacebookLog(bool IsAutoInit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function iTOP.FBHelper.DelayToSetAutoInitFacebookLog");

	UFBHelper_DelayToSetAutoInitFacebookLog_Params params;
	params.IsAutoInit = IsAutoInit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function iTOP.FBHelper.DelayToInitFacebookSDK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           IsAutoInit                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WithLaunchOption               (Parm, ZeroConstructor, IsPlainOldData)

void UFBHelper::DelayToInitFacebookSDK(bool IsAutoInit, bool WithLaunchOption)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function iTOP.FBHelper.DelayToInitFacebookSDK");

	UFBHelper_DelayToInitFacebookSDK_Params params;
	params.IsAutoInit = IsAutoInit;
	params.WithLaunchOption = WithLaunchOption;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

