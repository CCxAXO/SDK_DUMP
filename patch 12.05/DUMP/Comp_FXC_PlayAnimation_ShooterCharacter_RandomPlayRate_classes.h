// BlueprintGeneratedClass Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate.Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C
// Size: 0x258 (Inherited: 0x239)
struct UComp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C : UComp_FXC_PlayAnimation_ShooterCharacter_C {
	char pad_239[0x7]; // 0x239(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	double 1P_PlayRate_Min; // 0x248(0x08)
	double 3P_PlayRate_Min; // 0x250(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate.Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate.Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate // (Final|UbergraphFunction) // @ game+0x1af5410
};

