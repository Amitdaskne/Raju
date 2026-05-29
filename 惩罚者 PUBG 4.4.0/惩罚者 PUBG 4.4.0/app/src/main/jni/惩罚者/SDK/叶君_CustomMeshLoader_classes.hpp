#pragma once

// SDK生成作者:叶君  
// PUBG MOBILE 游戏位数:64Bit 4.4.0
// Telegram频道: @PUBGMYJ
// 生成时间 2026年05月11日 19时31分24秒
namespace SDK
{
//Classes
// Class CustomMeshLoader.CustomMeshLoaderBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UCustomMeshLoaderBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomMeshLoader.CustomMeshLoaderBPLibrary");
		return pStaticClass;
	}


	static class UStaticMesh* LoadSModelFromMemory(TArray<unsigned char> Data, const struct FString& MeshName);
	static void LoadSModelFileAsync(const struct FString& FilePath, const struct FString& MeshName, const struct FScriptDelegate& OnComplete);
	static class UStaticMesh* LoadSModelFile(const struct FString& FilePath, const struct FString& MeshName);
	static bool IsValidSModelFile(const struct FString& FilePath);
	static bool GetSModelFileInfo(const struct FString& FilePath, int* OutSectionCount, int* OutMaterialCount, int* OutVertexCount);
};


}

