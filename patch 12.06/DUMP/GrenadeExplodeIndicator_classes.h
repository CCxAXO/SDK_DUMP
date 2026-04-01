// BlueprintGeneratedClass GrenadeExplodeIndicator.GrenadeExplodeIndicator_C
// Size: 0xf8 (Inherited: 0xe8)
struct UGrenadeExplodeIndicator_C : UBaseProjectileEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UParticleSystem* ExplodeIndicatorFX; // 0xf0(0x08)

	void PlayLocalIndicatorFX(struct FVector IndicatorLocation); // Function GrenadeExplodeIndicator.GrenadeExplodeIndicator_C.PlayLocalIndicatorFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PointHiddenFromCamera(struct FVector Point, bool& Visible); // Function GrenadeExplodeIndicator.GrenadeExplodeIndicator_C.PointHiddenFromCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnEventTriggered(); // Function GrenadeExplodeIndicator.GrenadeExplodeIndicator_C.OnEventTriggered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void MulticastTriggerExplodeIndicator(struct FVector IndicatorLocation); // Function GrenadeExplodeIndicator.GrenadeExplodeIndicator_C.MulticastTriggerExplodeIndicator // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GrenadeExplodeIndicator(int32_t EntryPoint); // Function GrenadeExplodeIndicator.GrenadeExplodeIndicator_C.ExecuteUbergraph_GrenadeExplodeIndicator // (Final|UbergraphFunction) // @ game+0x1b42740
};

