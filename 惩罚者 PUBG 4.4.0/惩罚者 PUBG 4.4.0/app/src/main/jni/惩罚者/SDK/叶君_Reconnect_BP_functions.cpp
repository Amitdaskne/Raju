// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分44秒
#include "../SDK.hpp"

namespace SDK
{
//Functions
// Function Reconnect_BP.Reconnect_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReconnect_BP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.Construct");

	UReconnect_BP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Reconnect_BP.Reconnect_BP_C.ExecuteUbergraph_Reconnect_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReconnect_BP_C::ExecuteUbergraph_Reconnect_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.ExecuteUbergraph_Reconnect_BP");

	UReconnect_BP_C_ExecuteUbergraph_Reconnect_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

