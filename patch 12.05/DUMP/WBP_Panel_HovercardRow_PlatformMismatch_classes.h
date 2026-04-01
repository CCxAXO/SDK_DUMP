// WidgetBlueprintGeneratedClass WBP_Panel_HovercardRow_PlatformMismatch.WBP_Panel_HovercardRow_PlatformMismatch_C
// Size: 0x450 (Inherited: 0x3e0)
struct UWBP_Panel_HovercardRow_PlatformMismatch_C : UWBP_Panel_HovercardSection_SocialPanelPlayer_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UPlayerClientPlatformViewModel* PlayerClientPlatformViewModel; // 0x3e8(0x08)
	struct UImage* Image_Icon; // 0x3f0(0x08)
	struct UAresCommonText* Text_Description; // 0x3f8(0x08)
	struct UWBP_Template_HovercardDetailRow_Social_C* WBP_Template_HovercardDetailRow_Social; // 0x400(0x08)
	struct UTexture2D* DesktopIcon; // 0x408(0x08)
	struct UTexture2D* ConsoleIcon; // 0x410(0x08)
	enum class EAresPlatformType PreviewPlatform; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FText DesktopDescription; // 0x420(0x18)
	struct FText ConsoleDescription; // 0x438(0x18)

	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_Panel_HovercardRow_PlatformMismatch.WBP_Panel_HovercardRow_PlatformMismatch_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDisplayedMessage(enum class EAresPlatformType InPlatformType); // Function WBP_Panel_HovercardRow_PlatformMismatch.WBP_Panel_HovercardRow_PlatformMismatch_C.SetDisplayedMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function WBP_Panel_HovercardRow_PlatformMismatch.WBP_Panel_HovercardRow_PlatformMismatch_C.UpdateVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_HovercardRow_PlatformMismatch.WBP_Panel_HovercardRow_PlatformMismatch_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnClientPlatformChanged(enum class EAresPlatformType InClientPlatform); // Function WBP_Panel_HovercardRow_PlatformMismatch.WBP_Panel_HovercardRow_PlatformMismatch_C.OnClientPlatformChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHasValidDataChanged(bool bInHasValidData); // Function WBP_Panel_HovercardRow_PlatformMismatch.WBP_Panel_HovercardRow_PlatformMismatch_C.OnHasValidDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_HovercardRow_PlatformMismatch(int32_t EntryPoint); // Function WBP_Panel_HovercardRow_PlatformMismatch.WBP_Panel_HovercardRow_PlatformMismatch_C.ExecuteUbergraph_WBP_Panel_HovercardRow_PlatformMismatch // (Final|UbergraphFunction) // @ game+0x1af5410
};

