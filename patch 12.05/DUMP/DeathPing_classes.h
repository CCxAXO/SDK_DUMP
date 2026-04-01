// BlueprintGeneratedClass DeathPing.DeathPing_C
// Size: 0x7f8 (Inherited: 0x7d0)
struct ADeathPing_C : ABasePing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct FLinearColor Timeline_0_0_Color_A2B3E1AA4565E82DDAAAA4B64E15BB6F; // 0x7d8(0x10)
	enum class ETimelineDirection Timeline_0_0__Direction_A2B3E1AA4565E82DDAAAA4B64E15BB6F; // 0x7e8(0x01)
	char pad_7E9[0x7]; // 0x7e9(0x07)
	struct UTimelineComponent* Timeline_0_1; // 0x7f0(0x08)

	void Timeline_0_0__FinishedFunc(); // Function DeathPing.DeathPing_C.Timeline_0_0__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void Timeline_0_0__UpdateFunc(); // Function DeathPing.DeathPing_C.Timeline_0_0__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DeathPing(int32_t EntryPoint); // Function DeathPing.DeathPing_C.ExecuteUbergraph_DeathPing // (Final|UbergraphFunction) // @ game+0x1af5410
};

