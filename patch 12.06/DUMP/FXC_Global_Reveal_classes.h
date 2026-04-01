// BlueprintGeneratedClass FXC_Global_Reveal.FXC_Global_Reveal_C
// Size: 0x6d5 (Inherited: 0x630)
struct AFXC_Global_Reveal_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)
	struct UMaterialInterface* Material; // 0x648(0x08)
	struct AShooterCharacter* RevealedCharacter; // 0x650(0x08)
	bool OnlyRevealForInstigator; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)
	struct AShooterCharacter* EffectInstigator; // 0x660(0x08)
	bool HideIfDead; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct UWarningMessageHUD_C* HUD_Warning; // 0x670(0x08)
	struct FText WarningMessageText; // 0x678(0x18)
	struct FText WarningMessageSubtext; // 0x690(0x18)
	struct UAkAudioEvent* HUD_WarningPulse; // 0x6a8(0x08)
	bool ShowHUD_Warning; // 0x6b0(0x01)
	bool HideIfInvisible; // 0x6b1(0x01)
	char pad_6B2[0x6]; // 0x6b2(0x06)
	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x6b8(0x08)
	bool RevealToAllies; // 0x6c0(0x01)
	bool Initialized; // 0x6c1(0x01)
	char pad_6C2[0x2]; // 0x6c2(0x02)
	int32_t ThrottlingDelayFrames; // 0x6c4(0x04)
	struct FName ThrottlingKey; // 0x6c8(0x0c)
	bool EnableDebugLogging; // 0x6d4(0x01)

	void UpdateHiddenState(); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.UpdateHiddenState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LogDebugMessage(struct FString Message); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.LogDebugMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TryInitialize(); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.TryInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDynamicMaterialInstance(struct UMaterialInstanceDynamic*& DynamicMaterialInstance); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.GetDynamicMaterialInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateWarningHUD_Text(struct FText MessageText, struct FText SubText); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.UpdateWarningHUD_Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShouldBeHidden(bool& ShouldBeHidden); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ShouldBeHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetupNewMeshMaterials(); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.SetupNewMeshMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ManuallyUpdateEffectPerspective(bool FirstPerson); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ManuallyUpdateEffectPerspective // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Global_Reveal(int32_t EntryPoint); // Function FXC_Global_Reveal.FXC_Global_Reveal_C.ExecuteUbergraph_FXC_Global_Reveal // (Final|UbergraphFunction) // @ game+0x1b42740
};

