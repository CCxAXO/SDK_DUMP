// WidgetBlueprintGeneratedClass EditorPregameController.EditorPregameController_C
// Size: 0x348 (Inherited: 0x318)
struct UEditorPregameController_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UEditorPregameTeam_C* AlliedTeam; // 0x320(0x08)
	struct UEditorPregameTeam_C* EnemyTeam; // 0x328(0x08)
	struct UButton* ObserverCoach; // 0x330(0x08)
	struct UButton* ObserverToggle; // 0x338(0x08)
	struct UPregameViewModel* Model; // 0x340(0x08)

	void Init(struct UPregameViewController* ViewController); // Function EditorPregameController.EditorPregameController_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EditorPregameController.EditorPregameController_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleEnemyPlayerLockedIn(); // Function EditorPregameController.EditorPregameController_C.HandleEnemyPlayerLockedIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ObserverToggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function EditorPregameController.EditorPregameController_C.BndEvt__ObserverToggle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ObserverCoach_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function EditorPregameController.EditorPregameController_C.BndEvt__ObserverCoach_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EditorPregameController(int32_t EntryPoint); // Function EditorPregameController.EditorPregameController_C.ExecuteUbergraph_EditorPregameController // (Final|UbergraphFunction) // @ game+0x1af5410
};

