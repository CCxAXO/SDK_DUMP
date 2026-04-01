// WidgetBlueprintGeneratedClass TournamentsTeamColorButton.TournamentsTeamColorButton_C
// Size: 0x3a2 (Inherited: 0x370)
struct UTournamentsTeamColorButton_C : UTournamentsTeamColorButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UImage* Background; // 0x378(0x08)
	struct UButton* ColorButton; // 0x380(0x08)
	struct UImage* ColorImage; // 0x388(0x08)
	struct UImage* SelectedIndicator; // 0x390(0x08)
	struct UAkAudioEvent* SoundClick; // 0x398(0x08)
	bool isCurrentlyHovered; // 0x3a0(0x01)
	bool IsActive; // 0x3a1(0x01)

	void SetIsActive(bool IsActive); // Function TournamentsTeamColorButton.TournamentsTeamColorButton_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetColor(struct FLinearColor Color, struct FString Name); // Function TournamentsTeamColorButton.TournamentsTeamColorButton_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TournamentsTeamColorButton.TournamentsTeamColorButton_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TournamentsTeamColorButton.TournamentsTeamColorButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsTeamColorButton(int32_t EntryPoint); // Function TournamentsTeamColorButton.TournamentsTeamColorButton_C.ExecuteUbergraph_TournamentsTeamColorButton // (Final|UbergraphFunction) // @ game+0x1b42740
};

