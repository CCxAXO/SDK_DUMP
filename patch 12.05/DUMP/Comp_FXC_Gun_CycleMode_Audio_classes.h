// BlueprintGeneratedClass Comp_FXC_Gun_CycleMode_Audio.Comp_FXC_Gun_CycleMode_Audio_C
// Size: 0x130 (Inherited: 0xe8)
struct UComp_FXC_Gun_CycleMode_Audio_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FEquippableSoundEffect SoundFX; // 0xf0(0x18)
	struct UFiringStateComponent* FiringStateComponent; // 0x108(0x08)
	struct TArray<struct FEquippableSoundEffect> ModeSoundFX; // 0x110(0x10)
	int32_t CurrentMode; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UAresAudioComponent* PlayedAudioComponent; // 0x128(0x08)

	void GetSoundFX(int32_t ModeIndex, struct FEquippableSoundEffect& SoundFX); // Function Comp_FXC_Gun_CycleMode_Audio.Comp_FXC_Gun_CycleMode_Audio_C.GetSoundFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetEquippable(struct UObject* OnObject, struct AAresEquippable*& Equippable); // Function Comp_FXC_Gun_CycleMode_Audio.Comp_FXC_Gun_CycleMode_Audio_C.GetEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_Gun_CycleMode_Audio.Comp_FXC_Gun_CycleMode_Audio_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_Gun_CycleMode_Audio.Comp_FXC_Gun_CycleMode_Audio_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_Gun_CycleMode_Audio(int32_t EntryPoint); // Function Comp_FXC_Gun_CycleMode_Audio.Comp_FXC_Gun_CycleMode_Audio_C.ExecuteUbergraph_Comp_FXC_Gun_CycleMode_Audio // (Final|UbergraphFunction) // @ game+0x1af5410
};

