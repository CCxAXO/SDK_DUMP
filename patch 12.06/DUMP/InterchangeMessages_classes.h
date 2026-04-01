// Class InterchangeMessages.InterchangeResultMeshWarning
// Size: 0x78 (Inherited: 0x68)
struct UInterchangeResultMeshWarning : UInterchangeResultWarning {
	struct FString MeshName; // 0x68(0x10)
};

// Class InterchangeMessages.InterchangeResultTextureWarning
// Size: 0x78 (Inherited: 0x68)
struct UInterchangeResultTextureWarning : UInterchangeResultWarning {
	struct FString TextureName; // 0x68(0x10)
};

// Class InterchangeMessages.InterchangeResultMeshError
// Size: 0x78 (Inherited: 0x68)
struct UInterchangeResultMeshError : UInterchangeResultError {
	struct FString MeshName; // 0x68(0x10)
};

// Class InterchangeMessages.InterchangeResultMeshWarning_Generic
// Size: 0x90 (Inherited: 0x78)
struct UInterchangeResultMeshWarning_Generic : UInterchangeResultMeshWarning {
	struct FText Text; // 0x78(0x18)
};

// Class InterchangeMessages.InterchangeResultMeshError_Generic
// Size: 0x90 (Inherited: 0x78)
struct UInterchangeResultMeshError_Generic : UInterchangeResultMeshError {
	struct FText Text; // 0x78(0x18)
};

// Class InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
// Size: 0x80 (Inherited: 0x78)
struct UInterchangeResultMeshWarning_TooManyUVs : UInterchangeResultMeshWarning {
	int32_t ExcessUVs; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
// Size: 0xa0 (Inherited: 0x78)
struct UInterchangeResultTextureWarning_TextureFileDoNotExist : UInterchangeResultTextureWarning {
	struct FText Text; // 0x78(0x18)
	struct FString MaterialName; // 0x90(0x10)
};

