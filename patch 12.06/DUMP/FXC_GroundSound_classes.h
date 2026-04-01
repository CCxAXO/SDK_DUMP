// BlueprintGeneratedClass FXC_GroundSound.FXC_GroundSound_C
// Size: 0x668 (Inherited: 0x630)
struct AFXC_GroundSound_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x638(0x08)
	struct UAresAudioComponent* AresAudio; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	enum class EGroundSoundType GroundSoundType; // 0x650(0x01)
	char pad_651[0x7]; // 0x651(0x07)
	struct AShooterCharacter* Character; // 0x658(0x08)
	struct UFootstepsComponent* FootstepsComponent; // 0x660(0x08)

	void ChooseSounds(struct TArray<bool>& Events); // Function FXC_GroundSound.FXC_GroundSound_C.ChooseSounds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_GroundSound.FXC_GroundSound_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PlaySound(); // Function FXC_GroundSound.FXC_GroundSound_C.PlaySound // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function FXC_GroundSound.FXC_GroundSound_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_GroundSound(int32_t EntryPoint); // Function FXC_GroundSound.FXC_GroundSound_C.ExecuteUbergraph_FXC_GroundSound // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

