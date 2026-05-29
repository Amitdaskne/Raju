#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分10秒
namespace SDK
{
//Classes
// Class TableResInclude.BaseTableResMap
// 0x0060 (0x0088 - 0x0028)
class UBaseTableResMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	class UScriptStruct*                               DataStruct;                                               // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TableResInclude.BaseTableResMap");
		return pStaticClass;
	}

};


// Class TableResInclude.EvoBaseMapUIMarkTableMap
// 0x0000 (0x0088 - 0x0088)
class UEvoBaseMapUIMarkTableMap : public UBaseTableResMap
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TableResInclude.EvoBaseMapUIMarkTableMap");
		return pStaticClass;
	}


	void TraversTable(class UUAEDataTable* TableData, const struct FName& Key);
};


// Class TableResInclude.EvoBaseModTableTestTableMap
// 0x0000 (0x0088 - 0x0088)
class UEvoBaseModTableTestTableMap : public UBaseTableResMap
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TableResInclude.EvoBaseModTableTestTableMap");
		return pStaticClass;
	}


	void TraversTable(class UUAEDataTable* TableData, const struct FName& Key);
};


}

