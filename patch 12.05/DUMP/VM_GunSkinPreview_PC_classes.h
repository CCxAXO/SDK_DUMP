// BlueprintGeneratedClass VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C
// Size: 0x1c0 (Inherited: 0x90)
struct UVM_GunSkinPreview_PC_C : UAresViewModelBase {
	struct FMulticastInlineDelegate OnPreviewTitleChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate OnPreviewTextChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnStreamedVideoChanged; // 0xb0(0x10)
	struct FText TitleText; // 0xc0(0x18)
	struct FText PreviewText; // 0xd8(0x18)
	struct UStreamedVideoDataAsset* StreamedVideo; // 0xf0(0x08)
	bool IsVideoAvailable; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UEquippableSkinHandle* SkinHandle; // 0x100(0x08)
	struct UEquippableSkinLevelHandle* LevelHandle; // 0x108(0x08)
	struct UEquippableSkinChromaHandle* ChromaHandle; // 0x110(0x08)
	bool SkinHasLevels; // 0x118(0x01)
	bool SkinHasChromas; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	int32_t CurrentLevelIndex; // 0x11c(0x04)
	int32_t CurrentChromaIndex; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FText PreviewText_NotAvailable; // 0x128(0x18)
	struct FText PreviewText_Base; // 0x140(0x18)
	struct FText PreviewText_Level; // 0x158(0x18)
	struct FText PreviewText_Chroma; // 0x170(0x18)
	struct FText PreviewText_LevelAndChroma; // 0x188(0x18)
	struct FMulticastInlineDelegate OnIsVideoAvailableChanged; // 0x1a0(0x10)
	struct UStreamMediaSource* MediaSource; // 0x1b0(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x1b8(0x08)

	void DEBUG_IncrementLevelChromaHandle(); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.DEBUG_IncrementLevelChromaHandle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePreviewText(struct FText TextFormat); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.UpdatePreviewText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PrepareVideoFromHandle(struct UBaseHandle* Handle, bool& Success); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.PrepareVideoFromHandle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleAnyHandleUpdated(); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.HandleAnyHandleUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsVideoAvailable(bool IsVideoAvailable); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.SetIsVideoAvailable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStreamedVideo(struct UStreamedVideoDataAsset* StreamedVideo); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.SetStreamedVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPreviewText(struct FText PreviewText); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.SetPreviewText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTitleText(struct FText TitleText); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.SetTitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleChromaChanged(struct UEquippableSkinChromaHandle* NewChromaHandle); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.HandleChromaChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleLevelChanged(struct UEquippableSkinLevelHandle* NewLevelHandle); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.HandleLevelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSkinChanged(struct UEquippableSkinHandle* NewSkinHandle); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.HandleSkinChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsVideoAvailableChanged__DelegateSignature(bool IsVideoAvailable); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.OnIsVideoAvailableChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStreamedVideoChanged__DelegateSignature(struct UStreamedVideoDataAsset* StreamedVideo); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.OnStreamedVideoChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPreviewTitleChanged__DelegateSignature(struct FText TitleText); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.OnPreviewTitleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPreviewTextChanged__DelegateSignature(struct FText PreviewText); // Function VM_GunSkinPreview_PC.VM_GunSkinPreview_PC_C.OnPreviewTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

