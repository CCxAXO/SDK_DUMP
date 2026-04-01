// WidgetBlueprintGeneratedClass EditorPregameTeam.EditorPregameTeam_C
// Size: 0x348 (Inherited: 0x318)
struct UEditorPregameTeam_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* PlayerContainer; // 0x320(0x08)
	struct UTextBlock* TeamName; // 0x328(0x08)
	struct FMulticastInlineDelegate OnPlayerLockedIn; // 0x330(0x10)
	struct UPregameTeamModel* TeamModel; // 0x340(0x08)

	void UpdateNumLockedIn(); // Function EditorPregameTeam.EditorPregameTeam_C.UpdateNumLockedIn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function EditorPregameTeam.EditorPregameTeam_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPregameTeamModel* Team); // Function EditorPregameTeam.EditorPregameTeam_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerLockedIn(); // Function EditorPregameTeam.EditorPregameTeam_C.HandlePlayerLockedIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_EditorPregameTeam(int32_t EntryPoint); // Function EditorPregameTeam.EditorPregameTeam_C.ExecuteUbergraph_EditorPregameTeam // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnPlayerLockedIn__DelegateSignature(); // Function EditorPregameTeam.EditorPregameTeam_C.OnPlayerLockedIn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

