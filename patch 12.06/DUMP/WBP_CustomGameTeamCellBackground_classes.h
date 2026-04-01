// WidgetBlueprintGeneratedClass WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C
// Size: 0x4f1 (Inherited: 0x3e0)
struct UWBP_CustomGameTeamCellBackground_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* ImgBackground; // 0x3e8(0x08)
	struct FLinearColor BackgroundColor; // 0x3f0(0x10)
	struct FLinearColor EdgeColor; // 0x400(0x10)
	struct UMaterialInstanceDynamic* Material; // 0x410(0x08)
	struct FName MatParam_BackgroundColor; // 0x418(0x0c)
	struct FName MatParam_EdgeColor; // 0x424(0x0c)
	struct FName MatParam_IsShowHardEdge; // 0x430(0x0c)
	struct FName MatParam_IsFocused; // 0x43c(0x0c)
	bool bShowHardEdge; // 0x448(0x01)
	bool bIsLocalPlayer; // 0x449(0x01)
	enum class BPE_CustomLobbyCellIconType IconDisplayType; // 0x44a(0x01)
	char pad_44B[0x1]; // 0x44b(0x01)
	struct FLinearColor LocalPlayerEdgeColor; // 0x44c(0x10)
	struct FName MatParam_FocusTopGradientColor; // 0x45c(0x0c)
	struct FName MatParam_FocusBottomGradientColor; // 0x468(0x0c)
	struct FName MatParam_IconTexture; // 0x474(0x0c)
	struct TMap<enum class BPE_CustomLobbyCellIconType, struct UTexture2D*> IconMap; // 0x480(0x50)
	struct FLinearColor FocusGradientTopColor; // 0x4d0(0x10)
	struct FLinearColor FocusGradientBottomColor; // 0x4e0(0x10)
	bool bIsFocused; // 0x4f0(0x01)

	void SetFocusColors(struct FLinearColor Gradient_TopColor, struct FLinearColor Gradient_BottomColor); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.SetFocusColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsLocalPlayer(bool bIsLocalPlayer); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.SetIsLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateEdgeColor(); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.UpdateEdgeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIconDisplayType(enum class BPE_CustomLobbyCellIconType IconDisplayType); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.SetIconDisplayType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowHardEdge(bool bShow); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.SetShowHardEdge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetVisuallyFocused(bool bIsFocused); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.SetVisuallyFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEdgeColor(struct FLinearColor EdgeColor); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.SetEdgeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundColor(struct FLinearColor BackgroundColor); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateMaterial(); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.CreateMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_CustomGameTeamCellBackground(int32_t EntryPoint); // Function WBP_CustomGameTeamCellBackground.WBP_CustomGameTeamCellBackground_C.ExecuteUbergraph_WBP_CustomGameTeamCellBackground // (Final|UbergraphFunction) // @ game+0x1b42740
};

