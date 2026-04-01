// Class Renderer.AresLightMapPolicyBase
// Size: 0x90 (Inherited: 0x30)
struct UAresLightMapPolicyBase : UObject {
	struct TArray<struct FString> ShouldCompileWithVertexFactory; // 0x30(0x10)
	struct TMap<struct FString, struct FString> CompilationEnvironment; // 0x40(0x50)
};

// Class Renderer.AresEnvironmentLightMapPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresEnvironmentLightMapPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresEnvironmentFallbackPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresEnvironmentFallbackPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresEnvironmentCachedLightingPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresEnvironmentCachedLightingPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresCharacterPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresCharacterPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresFirstPersonPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresFirstPersonPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresFirstPersonFallbackPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresFirstPersonFallbackPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresFirstPersonCsmPolicy
// Size: 0x90 (Inherited: 0x90)
struct UAresFirstPersonCsmPolicy : UAresLightMapPolicyBase {
};

// Class Renderer.AresOutlineRendering
// Size: 0x30 (Inherited: 0x30)
struct UAresOutlineRendering : UObject {

	void SetOutlineColorsForRender(struct UObject* WorldContextObject, struct FLinearColor& AllyColor, struct FLinearColor& EnemyColor); // Function Renderer.AresOutlineRendering.SetOutlineColorsForRender // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x28c42a0
};

// Class Renderer.SparseVolumeTextureViewerComponent
// Size: 0x6d0 (Inherited: 0x690)
struct USparseVolumeTextureViewerComponent : UPrimitiveComponent {
	struct USparseVolumeTexture* SparseVolumeTexturePreview; // 0x690(0x08)
	char bAnimate : 1; // 0x698(0x01)
	char bReversePlayback : 1; // 0x698(0x01)
	char bBlockingStreamingRequests : 1; // 0x698(0x01)
	char pad_698_3 : 5; // 0x698(0x01)
	char pad_699[0x3]; // 0x699(0x03)
	float AnimationFrame; // 0x69c(0x04)
	float FrameRate; // 0x6a0(0x04)
	float AnimationTime; // 0x6a4(0x04)
	enum class ESparseVolumeTexturePreviewAttribute PreviewAttribute; // 0x6a8(0x01)
	char pad_6A9[0x3]; // 0x6a9(0x03)
	int32_t MipLevel; // 0x6ac(0x04)
	float Extinction; // 0x6b0(0x04)
	char pad_6B4[0x1c]; // 0x6b4(0x1c)
};

// Class Renderer.SparseVolumeTextureViewer
// Size: 0x468 (Inherited: 0x460)
struct ASparseVolumeTextureViewer : AInfo {
	struct USparseVolumeTextureViewerComponent* SparseVolumeTextureViewerComponent; // 0x460(0x08)
};

