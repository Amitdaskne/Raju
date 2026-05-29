#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分20秒
namespace SDK
{
//Enums
// Enum Gamelet.EGameletEnvironment
enum class EGameletEnvironment : uint8_t
{
	Gamelet_Test                   = 0,
	Gamelet_Product                = 1,
	Gamelet_Tyf_Test               = 2,
	Gamelet_Tyf_Product            = 3,
	Gamelet_MAX                    = 4
};


// Enum Gamelet.ECmd
enum class ECmd : uint8_t
{
	ECmdGSendMessageToApp          = 0,
	ECmdS2ESDKInitialized          = 1,
	ECmdS2EOnCgiProcessComplete    = 2,
	ECmdS2EStartPuertsVM           = 3,
	ECmdS2EPrepareGcrpRes          = 4,
	ECmdS2PMin                     = 5,
	ECmdS2PMax                     = 6,
	ECmd_MAX                       = 7
};



}

