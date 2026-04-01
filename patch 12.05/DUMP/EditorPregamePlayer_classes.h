// WidgetBlueprintGeneratedClass EditorPregamePlayer.EditorPregamePlayer_C
// Size: 0x370 (Inherited: 0x318)
struct UEditorPregamePlayer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_104; // 0x320(0x08)
	struct UImage* Image_119; // 0x328(0x08)
	struct UButton* LockInButton; // 0x330(0x08)
	struct UTextBlock* Name; // 0x338(0x08)
	struct UButton* SelectButton; // 0x340(0x08)
	struct UPregamePlayerModel* PlayerModel; // 0x348(0x08)
	struct TArray<struct UCharacterDataAsset*> PotentialCharacters; // 0x350(0x10)
	struct FMulticastInlineDelegate OnLockedIn; // 0x360(0x10)

	void Init(struct UPregamePlayerModel* PlayerModel); // Function EditorPregamePlayer.EditorPregamePlayer_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function EditorPregamePlayer.EditorPregamePlayer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LockInButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function EditorPregamePlayer.EditorPregamePlayer_C.BndEvt__LockInButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EditorPregamePlayer.EditorPregamePlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function EditorPregamePlayer.EditorPregamePlayer_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EditorPregamePlayer(int32_t EntryPoint); // Function EditorPregamePlayer.EditorPregamePlayer_C.ExecuteUbergraph_EditorPregamePlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnLockedIn__DelegateSignature(); // Function EditorPregamePlayer.EditorPregamePlayer_C.OnLockedIn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

