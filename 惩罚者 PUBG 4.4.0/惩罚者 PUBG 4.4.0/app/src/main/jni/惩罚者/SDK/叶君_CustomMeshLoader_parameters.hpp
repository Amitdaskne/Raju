#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分24秒
#include "../SDK.hpp"

namespace SDK
{
//Parameters
// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFromMemory
struct UCustomMeshLoaderBPLibrary_LoadSModelFromMemory_Params
{
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFileAsync
struct UCustomMeshLoaderBPLibrary_LoadSModelFileAsync_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnComplete;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFile
struct UCustomMeshLoaderBPLibrary_LoadSModelFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     MeshName;                                                 // (Parm, ZeroConstructor)
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSModelFile
struct UCustomMeshLoaderBPLibrary_IsValidSModelFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshLoader.CustomMeshLoaderBPLibrary.GetSModelFileInfo
struct UCustomMeshLoaderBPLibrary_GetSModelFileInfo_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	int                                                OutSectionCount;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutMaterialCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutVertexCount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

