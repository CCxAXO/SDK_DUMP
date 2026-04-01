// BlueprintGeneratedClass Comp_FXC_HUD.Comp_FXC_HUD_C
// Size: 0x125 (Inherited: 0xe8)
struct UComp_FXC_HUD_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0xf0(0x08)
	struct UUserWidget* HUD_Element; // 0xf8(0x08)
	int32_t ZOrder; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UUserWidget* HUD_Class; // 0x108(0x08)
	struct FMulticastInlineDelegate SetupHUD; // 0x110(0x10)
	bool AllowThirdPerson; // 0x120(0x01)
	bool HUD_Active; // 0x121(0x01)
	bool Default_HUD_Active; // 0x122(0x01)
	bool UseTailTime; // 0x123(0x01)
	bool HideInCinematicMode; // 0x124(0x01)

	void UpdateHUD_Visbility(bool NewVisibilty); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.UpdateHUD_Visbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateHUD(struct UUserWidget*& HUD_Element); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.CreateHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ManualRemoveHUD(); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ManualRemoveHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ManualAddHUD(); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ManualAddHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupHUD_Event(struct UUserWidget* InHUD); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.SetupHUD_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCinemtaticModeChanged(); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_FXC_HUD(int32_t EntryPoint); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.ExecuteUbergraph_Comp_FXC_HUD // (Final|UbergraphFunction) // @ game+0x1b42740
	void SetupHUD__DelegateSignature(struct UUserWidget* InHUD); // Function Comp_FXC_HUD.Comp_FXC_HUD_C.SetupHUD__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

