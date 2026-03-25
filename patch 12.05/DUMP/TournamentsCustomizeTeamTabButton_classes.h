// WidgetBlueprintGeneratedClass TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C
// Size: 0x3b9 (Inherited: 0x340)
struct UTournamentsCustomizeTeamTabButton_C : UTabButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UImage* Background; // 0x348(0x08)
	struct UImage* Highlight; // 0x350(0x08)
	struct UButton* TabButton; // 0x358(0x08)
	struct UImage* TabContentImage; // 0x360(0x08)
	struct UAkAudioEvent* SoundClick; // 0x368(0x08)
	struct UAkAudioEvent* SoundHover; // 0x370(0x08)
	bool isCurrentlyHovered; // 0x378(0x01)
	bool IsActive; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
	struct UWidgetAnimation* Unhover; // 0x380(0x08)
	struct UWidgetAnimation* Active; // 0x388(0x08)
	struct UWidgetAnimation* hover; // 0x390(0x08)
	struct UMaterialInterface* IconDefaultMaterial; // 0x398(0x08)
	struct UMaterialInterface* ColorDefaultMaterial; // 0x3a0(0x08)
	bool IsIcon; // 0x3a8(0x01)
	bool IsColor; // 0x3a9(0x01)
	char pad_3AA[0x6]; // 0x3aa(0x06)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x3b0(0x08)
	bool IsAlreadyInit; // 0x3b8(0x01)

	void SetColor(struct FLinearColor Color); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIcon(struct UTexture* Texture); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(bool IsIcon, bool IsColor); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void SetIsActive(bool IsActive); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetVisuals(struct FText Text, struct UTexture* Image); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.SetVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsCustomizeTeamTabButton(int32_t EntryPoint); // Function TournamentsCustomizeTeamTabButton.TournamentsCustomizeTeamTabButton_C.ExecuteUbergraph_TournamentsCustomizeTeamTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

