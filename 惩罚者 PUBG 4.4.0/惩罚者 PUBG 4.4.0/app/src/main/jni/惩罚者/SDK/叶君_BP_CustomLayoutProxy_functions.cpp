// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分32秒
#include "../SDK.hpp"

namespace SDK
{
//Functions
// Function BP_CustomLayoutProxy.BP_CustomLayoutProxy_C.AddLayoutDetailCache
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_STRUCT_UIElemLayoutDetail BPStruct                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Invalid                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CustomLayoutProxy_C::AddLayoutDetailCache(bool Invalid, struct FBP_STRUCT_UIElemLayoutDetail* BPStruct)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_CustomLayoutProxy.BP_CustomLayoutProxy_C.AddLayoutDetailCache");

	UBP_CustomLayoutProxy_C_AddLayoutDetailCache_Params params;
	params.Invalid = Invalid;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BPStruct != nullptr)
		*BPStruct = params.BPStruct;
}


}

