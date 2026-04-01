// WidgetBlueprintGeneratedClass CharacterRecruitmentAvailablePopup.CharacterRecruitmentAvailablePopup_C
// Size: 0x328 (Inherited: 0x318)
struct UCharacterRecruitmentAvailablePopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UConfirmationModal_C* ConfirmationModal; // 0x320(0x08)

	void FindLockedCharacter(struct UCharacterDataAsset*& Character); // Function CharacterRecruitmentAvailablePopup.CharacterRecruitmentAvailablePopup_C.FindLockedCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function CharacterRecruitmentAvailablePopup.CharacterRecruitmentAvailablePopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnConfirmationPressed(); // Function CharacterRecruitmentAvailablePopup.CharacterRecruitmentAvailablePopup_C.OnConfirmationPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCancelPressed(); // Function CharacterRecruitmentAvailablePopup.CharacterRecruitmentAvailablePopup_C.OnCancelPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterRecruitmentAvailablePopup(int32_t EntryPoint); // Function CharacterRecruitmentAvailablePopup.CharacterRecruitmentAvailablePopup_C.ExecuteUbergraph_CharacterRecruitmentAvailablePopup // (Final|UbergraphFunction) // @ game+0x1af5410
};

