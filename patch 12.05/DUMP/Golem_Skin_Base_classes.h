// BlueprintGeneratedClass Golem_Skin_Base.Golem_Skin_Base_C
// Size: 0x628 (Inherited: 0x518)
struct UGolem_Skin_Base_C : UWeapon_Skin_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	double Color Index; // 0x520(0x08)
	struct FMulticastInlineDelegate Particle Color Changed For FXC; // 0x528(0x10)
	struct FMulticastInlineDelegate Interrupt Inspect; // 0x538(0x10)
	struct TArray<int32_t> Color Index Collection; // 0x548(0x10)
	double Disco Mode Time Seed; // 0x558(0x08)
	double Disco Mode Transition Speed; // 0x560(0x08)
	double Disco Mode Speed Up Transition; // 0x568(0x08)
	double Disco Mode Speed Up Brightness Boost; // 0x570(0x08)
	struct TSoftObjectPtr<UTexture2D> LUT Texture for FVX; // 0x578(0x30)
	struct TSet<double> Time  For Each Inspect; // 0x5a8(0x50)
	struct TArray<double> Inspect For Out-time; // 0x5f8(0x10)
	struct UComp_Golem_State_Info_C* GolemInfoComponentClass; // 0x608(0x08)
	struct UComp_Golem_State_Info_C* GolemInfoComponent; // 0x610(0x08)
	int32_t InheritColorIndex; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct AShooterPlayerState* ShooterPlayerState; // 0x620(0x08)

	void Get Disco Mode Data(double& TimeSeed, double& TransitionSpeed, struct TSoftObjectPtr<UTexture2D>& LUT Texture, double& Color Index, struct TArray<int32_t>& Color Index Collection); // Function Golem_Skin_Base.Golem_Skin_Base_C.Get Disco Mode Data // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerStateComponent(); // Function Golem_Skin_Base.Golem_Skin_Base_C.SetPlayerStateComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Exit Disco Mode(double Time Seed); // Function Golem_Skin_Base.Golem_Skin_Base_C.Exit Disco Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Activate Disco Mode(double Time Seed); // Function Golem_Skin_Base.Golem_Skin_Base_C.Activate Disco Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Stop Inspect(); // Function Golem_Skin_Base.Golem_Skin_Base_C.Stop Inspect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Color Index(double New Color Index); // Function Golem_Skin_Base.Golem_Skin_Base_C.Set Color Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Golem_Skin_Base.Golem_Skin_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Golem_Skin_Base(int32_t EntryPoint); // Function Golem_Skin_Base.Golem_Skin_Base_C.ExecuteUbergraph_Golem_Skin_Base // (Final|UbergraphFunction) // @ game+0x1af5410
	void Interrupt Inspect__DelegateSignature(); // Function Golem_Skin_Base.Golem_Skin_Base_C.Interrupt Inspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Particle Color Changed For FXC__DelegateSignature(); // Function Golem_Skin_Base.Golem_Skin_Base_C.Particle Color Changed For FXC__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

