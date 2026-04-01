// BlueprintGeneratedClass FXC_PlasmaArmor_HealingItem.FXC_PlasmaArmor_HealingItem_C
// Size: 0x6c0 (Inherited: 0x630)
struct AFXC_PlasmaArmor_HealingItem_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_AudioBasic_ContextTeamPerspective_C* Comp_FXC_AudioBasic_RegenComplete; // 0x638(0x08)
	struct UComp_FXC_AudioBasic_ContextTeamPerspective_C* Comp_FXC_AudioBasic_ReservePoolDepleted; // 0x640(0x08)
	struct UBaseAudioComponent_C* BaseAudioComponent; // 0x648(0x08)
	struct UComp_FXC_Audio_Loop_ContextTeamPerspective_C* Comp_FXC_Audio_Loop_RegenLoop; // 0x650(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x658(0x08)
	float RegenTimeline_LerpVal_D327A09F42578084C0F598AAB1322CDE; // 0x660(0x04)
	enum class ETimelineDirection RegenTimeline__Direction_D327A09F42578084C0F598AAB1322CDE; // 0x664(0x01)
	char pad_665[0x3]; // 0x665(0x03)
	struct UTimelineComponent* RegenTimeline; // 0x668(0x08)
	double RegenPoolTelegraphValue; // 0x670(0x08)
	double RegenPerSec; // 0x678(0x08)
	double CurrentRegenPool; // 0x680(0x08)
	double MaxArmorVal; // 0x688(0x08)
	double CurrentArmorVal; // 0x690(0x08)
	double MaxPotentialRechargeVal; // 0x698(0x08)
	double RegenPoolTelegraphThreshold; // 0x6a0(0x08)
	double RegenPoolToMaxArmorRatio; // 0x6a8(0x08)
	bool ShieldReserveDepletedTriggered; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	double Lerp Val; // 0x6b8(0x08)

	void RegenTimeline__FinishedFunc(); // Function FXC_PlasmaArmor_HealingItem.FXC_PlasmaArmor_HealingItem_C.RegenTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1b42740
	void RegenTimeline__UpdateFunc(); // Function FXC_PlasmaArmor_HealingItem.FXC_PlasmaArmor_HealingItem_C.RegenTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_PlasmaArmor_HealingItem.FXC_PlasmaArmor_HealingItem_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_PlasmaArmor_HealingItem(int32_t EntryPoint); // Function FXC_PlasmaArmor_HealingItem.FXC_PlasmaArmor_HealingItem_C.ExecuteUbergraph_FXC_PlasmaArmor_HealingItem // (Final|UbergraphFunction) // @ game+0x1b42740
};

