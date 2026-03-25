// WidgetBlueprintGeneratedClass TournamentsTeamIconButton.TournamentsTeamIconButton_C
// Size: 0x3a8 (Inherited: 0x358)
struct UTournamentsTeamIconButton_C : UTournamentsTeamIconButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UImage* Background; // 0x360(0x08)
	struct UButton* IconButton; // 0x368(0x08)
	struct UImage* IconImage; // 0x370(0x08)
	struct UImage* Image_93; // 0x378(0x08)
	struct UImage* SelectedIndicator; // 0x380(0x08)
	struct UAkAudioEvent* SoundClick; // 0x388(0x08)
	bool isCurrentlyHovered; // 0x390(0x01)
	bool IsActive; // 0x391(0x01)
	char pad_392[0x6]; // 0x392(0x06)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x398(0x08)
	struct UTexture* CurrentTexture; // 0x3a0(0x08)

	void SetIconTexture(); // Function TournamentsTeamIconButton.TournamentsTeamIconButton_C.SetIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TournamentsTeamIconButton.TournamentsTeamIconButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TournamentsTeamIconButton.TournamentsTeamIconButton_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void SetIsActive(bool IsActive); // Function TournamentsTeamIconButton.TournamentsTeamIconButton_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTexture(struct UTexture* Texture); // Function TournamentsTeamIconButton.TournamentsTeamIconButton_C.SetTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsTeamIconButton(int32_t EntryPoint); // Function TournamentsTeamIconButton.TournamentsTeamIconButton_C.ExecuteUbergraph_TournamentsTeamIconButton // (Final|UbergraphFunction) // @ game+0x1af5410
};

