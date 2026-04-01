// BlueprintGeneratedClass GrenadeCosmeticSpin.GrenadeCosmeticSpin_C
// Size: 0x150 (Inherited: 0xd8)
struct UGrenadeCosmeticSpin_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FRotator Grenade Rotation Speed; // 0xe0(0x18)
	bool ReturnToDefaultOnStop; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FRotator DefaultRotation; // 0x100(0x18)
	struct FRotator FinalRotation; // 0x118(0x18)
	double TimeToReturn; // 0x130(0x08)
	double StopTime; // 0x138(0x08)
	bool KeepSpinningOnStop; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct USkeletalMeshComponent* SpinningRoot; // 0x148(0x08)

	void ReceiveTick(float DeltaSeconds); // Function GrenadeCosmeticSpin.GrenadeCosmeticSpin_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function GrenadeCosmeticSpin.GrenadeCosmeticSpin_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GrenadeCosmeticSpin(int32_t EntryPoint); // Function GrenadeCosmeticSpin.GrenadeCosmeticSpin_C.ExecuteUbergraph_GrenadeCosmeticSpin // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

