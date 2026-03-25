// BlueprintGeneratedClass Comp_Gun_RecoilRecoveryComponent.Comp_Gun_RecoilRecoveryComponent_C
// Size: 0x168 (Inherited: 0xf8)
struct UComp_Gun_RecoilRecoveryComponent_C : URecoilRecoveryComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	enum class GunFiringState GunState; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	double PreviousStabilityIndex; // 0x108(0x08)
	struct UStabilityVisualizationComponent* ActiveVisualizationComponent; // 0x110(0x08)
	struct UStabilityComponent* ActiveStabilityComponent; // 0x118(0x08)
	double PreviousPitchRecoil; // 0x120(0x08)
	double PreviousYawRecoil; // 0x128(0x08)
	double ShootingStartPitch; // 0x130(0x08)
	double RecoilCompensationPercentage; // 0x138(0x08)
	struct AGun_C* OwnerGun; // 0x140(0x08)
	double RemainingRecoveryAmount; // 0x148(0x08)
	enum class GunFiringState PreviousGunState; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	double PreviousControlPitch; // 0x158(0x08)
	double MaximumADSRecoveryPercentage_1; // 0x160(0x08)

	void ReceiveBeginPlay(); // Function Comp_Gun_RecoilRecoveryComponent.Comp_Gun_RecoilRecoveryComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function Comp_Gun_RecoilRecoveryComponent.Comp_Gun_RecoilRecoveryComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_Gun_RecoilRecoveryComponent(int32_t EntryPoint); // Function Comp_Gun_RecoilRecoveryComponent.Comp_Gun_RecoilRecoveryComponent_C.ExecuteUbergraph_Comp_Gun_RecoilRecoveryComponent // (Final|UbergraphFunction) // @ game+0x1af5410
};

