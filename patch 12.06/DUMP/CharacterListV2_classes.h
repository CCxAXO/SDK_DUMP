// WidgetBlueprintGeneratedClass CharacterListV2.CharacterListV2_C
// Size: 0x391 (Inherited: 0x318)
struct UCharacterListV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWrapBox* CharactersContainer; // 0x320(0x08)
	struct UImage* Image_130; // 0x328(0x08)
	struct USharedButtonMaster_C* LockInButton; // 0x330(0x08)
	struct TMap<struct UCharacterHandle*, struct UCharacterListEntryV2_C*> CharacterWidgets; // 0x338(0x50)
	struct UPregameViewController* PregameViewController; // 0x388(0x08)
	enum class CharacterSelectState State; // 0x390(0x01)

	void HandleLockInStateChanged(enum class EPregameLockInState NewState); // Function CharacterListV2.CharacterListV2_C.HandleLockInStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SortCharacters(struct UObject* A, struct UObject* B, bool& A<B); // Function CharacterListV2.CharacterListV2_C.SortCharacters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLockInButton(); // Function CharacterListV2.CharacterListV2_C.UpdateLockInButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetLocalPlayerIndex(int32_t& PlayerIndex); // Function CharacterListV2.CharacterListV2_C.GetLocalPlayerIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetState(enum class CharacterSelectState NewState); // Function CharacterListV2.CharacterListV2_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateState(); // Function CharacterListV2.CharacterListV2_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLockedInChanged(bool LockedIn); // Function CharacterListV2.CharacterListV2_C.HandleLockedInChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemoveCharacter(struct UCharacterHandle* CharacterHandle); // Function CharacterListV2.CharacterListV2_C.RemoveCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewController* PregameViewController); // Function CharacterListV2.CharacterListV2_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateCharacters(struct FCharacterHandles& Character); // Function CharacterListV2.CharacterListV2_C.PopulateCharacters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddCharacter(struct UCharacterHandle* CharacterHandle); // Function CharacterListV2.CharacterListV2_C.AddCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CharacterListV2.CharacterListV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__NewLockinButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function CharacterListV2.CharacterListV2_C.BndEvt__NewLockinButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function CharacterListV2.CharacterListV2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterListV2(int32_t EntryPoint); // Function CharacterListV2.CharacterListV2_C.ExecuteUbergraph_CharacterListV2 // (Final|UbergraphFunction) // @ game+0x1b42740
};

