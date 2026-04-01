// BlueprintGeneratedClass BombMinimapComponent.BombMinimapComponent_C
// Size: 0x6e8 (Inherited: 0x6d0)
struct UBombMinimapComponent_C : UBombMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct FLinearColor Enemy Tint; // 0x6d8(0x10)

	void ReceiveBeginPlay(); // Function BombMinimapComponent.BombMinimapComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerViewTargetChanged_Event(); // Function BombMinimapComponent.BombMinimapComponent_C.OnPlayerViewTargetChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamChanged_Event(); // Function BombMinimapComponent.BombMinimapComponent_C.OnTeamChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerViewTargetModeChanged_Event(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function BombMinimapComponent.BombMinimapComponent_C.OnPlayerViewTargetModeChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTintForTeam(); // Function BombMinimapComponent.BombMinimapComponent_C.UpdateTintForTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleViewTargetChanged(); // Function BombMinimapComponent.BombMinimapComponent_C.HandleViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombDropped_Event(struct AShooterCharacter* OldCharacter); // Function BombMinimapComponent.BombMinimapComponent_C.OnBombDropped_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombPickedUp_Event(struct AShooterCharacter* Character); // Function BombMinimapComponent.BombMinimapComponent_C.OnBombPickedUp_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombMinimapComponent(int32_t EntryPoint); // Function BombMinimapComponent.BombMinimapComponent_C.ExecuteUbergraph_BombMinimapComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

