// WidgetBlueprintGeneratedClass WBP_ProgressBar_MilestoneSegmented.WBP_ProgressBar_MilestoneSegmented_C
// Size: 0x438 (Inherited: 0x3e0)
struct UWBP_ProgressBar_MilestoneSegmented_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UUniformGridPanel* MilestoneOverlay; // 0x3e8(0x08)
	struct UWBP_ProgressBar_Material_C* WBP_ProgressBar_Material; // 0x3f0(0x08)
	struct UTexture2D* CompletedMilestoneImage; // 0x3f8(0x08)
	struct UTexture2D* RemainingMilestoneImage; // 0x400(0x08)
	struct UTexture2D* ConnectorImage; // 0x408(0x08)
	bool bUseConnectorImage; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FVector2D ConnectorSizeOverride; // 0x418(0x10)
	struct FVector2D IconSizeOverride; // 0x428(0x10)

	void Create Milestones with Connectors(int32_t NumMilestones, struct UTexture2D* MilestoneImage, int32_t ColumnOffset, bool bHasTrailingConnector); // Function WBP_ProgressBar_MilestoneSegmented.WBP_ProgressBar_MilestoneSegmented_C.Create Milestones with Connectors // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Create Milestones(int32_t NumMilestones, struct UTexture2D* MilestoneImage, int32_t ColumnOffset); // Function WBP_ProgressBar_MilestoneSegmented.WBP_ProgressBar_MilestoneSegmented_C.Create Milestones // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateMilestones(int32_t CompletedMilestones, int32_t RemainingMilestones, bool HasValidData); // Function WBP_ProgressBar_MilestoneSegmented.WBP_ProgressBar_MilestoneSegmented_C.UpdateMilestones // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_ProgressBar_MilestoneSegmented.WBP_ProgressBar_MilestoneSegmented_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_ProgressBar_MilestoneSegmented(int32_t EntryPoint); // Function WBP_ProgressBar_MilestoneSegmented.WBP_ProgressBar_MilestoneSegmented_C.ExecuteUbergraph_WBP_ProgressBar_MilestoneSegmented // (Final|UbergraphFunction) // @ game+0x1af5410
};

