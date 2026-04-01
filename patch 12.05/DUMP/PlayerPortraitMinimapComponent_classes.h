// BlueprintGeneratedClass PlayerPortraitMinimapComponent.PlayerPortraitMinimapComponent_C
// Size: 0x6c0 (Inherited: 0x6b0)
struct UPlayerPortraitMinimapComponent_C : UShooterCharacterMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b0(0x08)
	struct AShooterPlayerState* PlayerState; // 0x6b8(0x08)

	void SetCharacterPortrait(struct UTexture* NewIcon); // Function PlayerPortraitMinimapComponent.PlayerPortraitMinimapComponent_C.SetCharacterPortrait // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function PlayerPortraitMinimapComponent.PlayerPortraitMinimapComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterDeath(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function PlayerPortraitMinimapComponent.PlayerPortraitMinimapComponent_C.OnCharacterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRoundEnd(int32_t RoundNumberEnded); // Function PlayerPortraitMinimapComponent.PlayerPortraitMinimapComponent_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InPerilStarted(struct UAresAbilitySystemComponent* AbilitySystem); // Function PlayerPortraitMinimapComponent.PlayerPortraitMinimapComponent_C.InPerilStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InPerilEndedDelegate(struct UAresAbilitySystemComponent* AbilitySystem); // Function PlayerPortraitMinimapComponent.PlayerPortraitMinimapComponent_C.InPerilEndedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIconsChanged(); // Function PlayerPortraitMinimapComponent.PlayerPortraitMinimapComponent_C.HandleIconsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerPortraitMinimapComponent(int32_t EntryPoint); // Function PlayerPortraitMinimapComponent.PlayerPortraitMinimapComponent_C.ExecuteUbergraph_PlayerPortraitMinimapComponent // (Final|UbergraphFunction) // @ game+0x1af5410
};

