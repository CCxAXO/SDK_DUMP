// WidgetBlueprintGeneratedClass Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C
// Size: 0x488 (Inherited: 0x3b8)
struct UWidget_Ability_Element_ChargeStandard_C : UWidget_Ability_Element_Charge_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UTextBlock* ChargeNumberText; // 0x3c0(0x08)
	struct UOverlay* ChargesBox; // 0x3c8(0x08)
	struct UHorizontalBox* UltPointsBox; // 0x3d0(0x08)
	struct UComp_Ability_CooldownComponent_C* CooldownComponent_1; // 0x3d8(0x08)
	struct FSlateColor DisabledOnTint; // 0x3e0(0x14)
	struct FSlateColor DisabledOffTint; // 0x3f4(0x14)
	struct FLinearColor ChargePermanentTint; // 0x408(0x10)
	struct FLinearColor ChargeTempTint; // 0x418(0x10)
	struct FLinearColor ChargeObserverAttackerTint; // 0x428(0x10)
	struct FLinearColor ChargeBlankTint; // 0x438(0x10)
	struct TArray<struct FStruct_Ability_Recharge_Images> Textures; // 0x448(0x10)
	struct FLinearColor ChargeCustomTint; // 0x458(0x10)
	struct FLinearColor UltPointTint; // 0x468(0x10)
	struct FLinearColor UltPointObserverAttackerTint; // 0x478(0x10)

	void SetCustomChargeColor(struct FLinearColor ChargeCustomTint); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.SetCustomChargeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ComputeChargeColor(int32_t ChargeNumber, int32_t NumPermanentCharges, int32_t NumTempCharges, struct FLinearColor& Color); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.ComputeChargeColor // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Update Charge Image(struct UImage* Image, int32_t ChargeNumber, int32_t NumPermanentCharges, int32_t NumTempCharges, int32_t MaxCharges, bool Disabled); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.Update Charge Image // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshCharges(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.RefreshCharges // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyChargeVisuals(int32_t NumPermanentCharges, int32_t NumTempCharges, int32_t MaxCharges, bool Disabled); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.ApplyChargeVisuals // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshUltPoints(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.RefreshUltPoints // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateChargeInfo(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.UpdateChargeInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyUltPointVisuals(int32_t NumPoints, int32_t MaxPoints, bool Disabled); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.ApplyUltPointVisuals // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_Ability_Element_ChargeStandard(int32_t EntryPoint); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.ExecuteUbergraph_Widget_Ability_Element_ChargeStandard // (Final|UbergraphFunction) // @ game+0x1b42740
};

