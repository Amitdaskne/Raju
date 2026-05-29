#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分19秒
#include "../SDK.hpp"

namespace SDK
{
//Parameters
// Function QRCodeUtility.VideoThumbnailGenerator.GenerateVideoThumbnailAsync
struct UVideoThumbnailGenerator_GenerateVideoThumbnailAsync_Params
{
	struct FString                                     videoPath;                                                // (Parm, ZeroConstructor)
	int                                                thumbnailSize;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnThumbnailGenerated;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function QRCodeUtility.ZXingScanner.Encode
struct UZXingScanner_Encode_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QRCodeUtility.ZXingScanner.Decode
struct UZXingScanner_Decode_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FZXingScanResult                            OutResult;                                                // (Parm, OutParm)
	struct FVector4                                    InRect;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

