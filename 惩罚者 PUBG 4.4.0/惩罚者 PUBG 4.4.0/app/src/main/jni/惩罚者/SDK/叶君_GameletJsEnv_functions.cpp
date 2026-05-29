// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分21秒
#include "../SDK.hpp"

namespace SDK
{
//Functions
// Function GameletJsEnv.GameletDynamicDelegateProxy.Fire
// (Final, Native, Public, BlueprintCallable)

void UGameletDynamicDelegateProxy::Fire()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameletJsEnv.GameletDynamicDelegateProxy.Fire");

	UGameletDynamicDelegateProxy_Fire_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

