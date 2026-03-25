// WidgetBlueprintGeneratedClass CharactersScreenV2.CharactersScreenV2_C
// Size: 0x430 (Inherited: 0x3d4)
struct UCharactersScreenV2_C : UCharactersScreen_Base_C {
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* Intro_FromRight; // 0x3e0(0x08)
	struct UWidgetAnimation* Intro_fromLeft; // 0x3e8(0x08)
	struct UAgentBackgroundText_C* AgentBackgroundText; // 0x3f0(0x08)
	struct UAgentGlitchPortrait_C* AgentGlitchPortrait; // 0x3f8(0x08)
	struct UImage* Background; // 0x400(0x08)
	struct UCharacterAbilities_C* CharacterAbilities; // 0x408(0x08)
	struct UCharacterContractPanel_C* CharacterContractPanel; // 0x410(0x08)
	struct UGenericCarousel_C* GenericCarousel; // 0x418(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x420(0x08)
	struct UUniversalModalVignette_C* UniversalModalVignette; // 0x428(0x08)

	void OpenContractDetailsPopup(struct UContractViewModel* ContractViewModel); // Function CharactersScreenV2.CharactersScreenV2_C.OpenContractDetailsPopup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharactersInitialized(); // Function CharactersScreenV2.CharactersScreenV2_C.OnCharactersInitialized // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectCharacter(struct UCharacterHandle* Character); // Function CharactersScreenV2.CharactersScreenV2_C.SelectCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateCharacterUIs(); // Function CharactersScreenV2.CharactersScreenV2_C.PopulateCharacterUIs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CharactersScreenV2.CharactersScreenV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_2_OnObjectSelected__DelegateSignature(struct UObject* Object); // Function CharactersScreenV2.CharactersScreenV2_C.BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_2_OnObjectSelected__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CharactersScreenV2_CharacterContractPanel_K2Node_ComponentBoundEvent_0_OnContractDetailsRequested__DelegateSignature(struct UContractViewModel* ContractViewModel); // Function CharactersScreenV2.CharactersScreenV2_C.BndEvt__CharactersScreenV2_CharacterContractPanel_K2Node_ComponentBoundEvent_0_OnContractDetailsRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharactersScreenV2(int32_t EntryPoint); // Function CharactersScreenV2.CharactersScreenV2_C.ExecuteUbergraph_CharactersScreenV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

