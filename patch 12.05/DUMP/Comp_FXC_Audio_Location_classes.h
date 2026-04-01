// BlueprintGeneratedClass Comp_FXC_Audio_Location.Comp_FXC_Audio_Location_C
// Size: 0x240 (Inherited: 0x218)
struct UComp_FXC_Audio_Location_C : UComp_FXC_AudioBasic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x218(0x08)
	bool SetLocationUsingEffectData; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct FVector Location; // 0x228(0x18)

	void PlayNewEvent(double StartTime); // Function Comp_FXC_Audio_Location.Comp_FXC_Audio_Location_C.PlayNewEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_Audio_Location.Comp_FXC_Audio_Location_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_Audio_Location(int32_t EntryPoint); // Function Comp_FXC_Audio_Location.Comp_FXC_Audio_Location_C.ExecuteUbergraph_Comp_FXC_Audio_Location // (Final|UbergraphFunction) // @ game+0x1af5410
};

