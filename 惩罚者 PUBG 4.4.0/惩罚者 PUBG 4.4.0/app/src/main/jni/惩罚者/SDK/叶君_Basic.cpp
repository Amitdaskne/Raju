// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分47秒
#include "../SDK.hpp"

namespace SDK
{
TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GUObjectArray = nullptr;
//---------------------叶君---------------------------
bool FWeakObjectPtr::IsValid() const
{
    if (ObjectSerialNumber == 0)
    {
        return false;
    }
    if (ObjectIndex < 0)
    {
        return false;
    }
    auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
    if (!ObjectItem)
    {
        return false;
    }
    if (!SerialNumbersMatch(ObjectItem))
    {
        return false;
    }
    return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------叶君---------------------------
UObject* FWeakObjectPtr::Get() const
{
    if (IsValid())
    {
        auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
        if (ObjectItem)
        {
            return ObjectItem->Object;
        }
    }
    return nullptr;
}
//---------------------叶君---------------------------
}

