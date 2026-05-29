// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分38秒
#include "../SDK.hpp"

namespace SDK
{
//Functions
// Function SplashScreen_UIBP.SplashScreen_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USplashScreen_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SplashScreen_UIBP.SplashScreen_UIBP_C.Construct");

	USplashScreen_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SplashScreen_UIBP.SplashScreen_UIBP_C.ExecuteUbergraph_SplashScreen_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USplashScreen_UIBP_C::ExecuteUbergraph_SplashScreen_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SplashScreen_UIBP.SplashScreen_UIBP_C.ExecuteUbergraph_SplashScreen_UIBP");

	USplashScreen_UIBP_C_ExecuteUbergraph_SplashScreen_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

