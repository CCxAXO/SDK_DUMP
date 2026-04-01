// WidgetBlueprintGeneratedClass WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C
// Size: 0x439 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerCardImage_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Image_PlayerCard; // 0x3e8(0x08)
	struct USizeBox* SizeBox_FancyContainer; // 0x3f0(0x08)
	struct USizeBox* SizeBox_Image; // 0x3f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Card; // 0x400(0x08)
	struct UVM_PlayerCardImage_C* PlayerCardImageVM; // 0x408(0x08)
	struct FString PlayerSubject; // 0x410(0x10)
	enum class EPlayerCardImageType PlayerCardImageType; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UMaterialInterface* OverrideMaterial; // 0x428(0x08)
	struct UPlayerCardWidgetBase* CurrentCardWidget; // 0x430(0x08)
	bool GamepadHoverOverride; // 0x438(0x01)

	void HandlePlayerCardPayloadChanged(struct FPlayerCardPayload InPlayerCardPayload); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.HandlePlayerCardPayloadChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Setup Card Widget Switcher(struct UPlayerCardWidgetBase* Player Card Widget Type); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.Setup Card Widget Switcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetOverrideMaterialIsActive(bool& Return Value); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.GetOverrideMaterialIsActive // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Set Displayed Player Card(struct UMaterialInterface* Material, struct UPlayerCardWidgetBase* PlayerCardWidgetType); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.Set Displayed Player Card // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayViewModelPlayerCard(); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.DisplayViewModelPlayerCard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOverridePlayerCardMaterial(struct UMaterialInterface* OverrideMaterial); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.SetOverridePlayerCardMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.BindOrUnbindViewModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateViewModel(struct UVM_PlayerCardImage_C*& ViewModel); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.CreateViewModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOverridePlayerCardID(struct FGuid OverridePlayerCardID); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.SetOverridePlayerCardID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayer(struct FString PlayerSubject); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerCardImage(int32_t EntryPoint); // Function WBP_Panel_PlayerCardImage.WBP_Panel_PlayerCardImage_C.ExecuteUbergraph_WBP_Panel_PlayerCardImage // (Final|UbergraphFunction) // @ game+0x1b42740
};

