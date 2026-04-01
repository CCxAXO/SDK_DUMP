// BlueprintGeneratedClass Comp_Gun_FlaggedErrorCurve.Comp_Gun_FlaggedErrorCurve_C
// Size: 0x1a1 (Inherited: 0xd8)
struct UComp_Gun_FlaggedErrorCurve_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EGameFeatureToggleName FeatureToggle; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FName DefaultTag; // 0xe4(0x0c)
	struct FName PrototypeTag; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UStabilityComponent* DefaultStability; // 0x100(0x08)
	struct UStabilityComponent* PrototypeStability; // 0x108(0x08)
	struct AGun_C* OwningGun; // 0x110(0x08)
	struct FRuntimeFloatCurve OriginalErrorCurve; // 0x118(0x88)
	bool ShouldUseFlaggedError; // 0x1a0(0x01)

	void FindComponentWithTag(struct UActorComponent* ComponentClass, struct FName TagFilter, struct UActorComponent*& FoundComponent); // Function Comp_Gun_FlaggedErrorCurve.Comp_Gun_FlaggedErrorCurve_C.FindComponentWithTag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize Equippable Variables(); // Function Comp_Gun_FlaggedErrorCurve.Comp_Gun_FlaggedErrorCurve_C.Initialize Equippable Variables // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize Feature Toggle(); // Function Comp_Gun_FlaggedErrorCurve.Comp_Gun_FlaggedErrorCurve_C.Initialize Feature Toggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_Gun_FlaggedErrorCurve.Comp_Gun_FlaggedErrorCurve_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnGameFeatureToggleChanged_NotifyBlueprint_Event_1(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Comp_Gun_FlaggedErrorCurve.Comp_Gun_FlaggedErrorCurve_C.OnGameFeatureToggleChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_Gun_FlaggedErrorCurve(int32_t EntryPoint); // Function Comp_Gun_FlaggedErrorCurve.Comp_Gun_FlaggedErrorCurve_C.ExecuteUbergraph_Comp_Gun_FlaggedErrorCurve // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

