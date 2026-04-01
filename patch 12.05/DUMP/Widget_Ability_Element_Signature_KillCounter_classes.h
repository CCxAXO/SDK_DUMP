// WidgetBlueprintGeneratedClass Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C
// Size: 0x534 (Inherited: 0x4b8)
struct UWidget_Ability_Element_Signature_KillCounter_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* signatureCharge; // 0x4c0(0x08)
	struct USignatureKillHUDElement_C* SignatureElement1; // 0x4c8(0x08)
	struct USignatureKillHUDElement_C* SignatureElement2; // 0x4d0(0x08)
	struct USignatureKillHUDElement_C* SignatureElement3; // 0x4d8(0x08)
	struct USignatureKillHUDElement_C* SignatureElement4; // 0x4e0(0x08)
	struct FLinearColor EquippedTextColor; // 0x4e8(0x10)
	struct FLinearColor UnEquippedTextColor; // 0x4f8(0x10)
	struct FLinearColor disabledIconColor; // 0x508(0x10)
	struct UImage* BackgroundImage_1; // 0x518(0x08)
	struct TArray<struct USignatureKillHUDElement_C*> SignatureChargeArray; // 0x520(0x10)
	int32_t SignatureChargeAmount; // 0x530(0x04)

	void GetCurrentSignatureCharges(int32_t& Num); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.GetCurrentSignatureCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetNumSignatureCharges(int32_t& Num); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.GetNumSignatureCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PlaySignatureChargeAnimations(bool Initialize); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.PlaySignatureChargeAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSignatureChargeVisibility(); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.UpdateSignatureChargeVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GrantSignatureCharge(); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.GrantSignatureCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSignatureCharges(bool Initialize); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.UpdateSignatureCharges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStartWidget(); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivateWidget(); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_Ability_Element_Signature_KillCounter(int32_t EntryPoint); // Function Widget_Ability_Element_Signature_KillCounter.Widget_Ability_Element_Signature_KillCounter_C.ExecuteUbergraph_Widget_Ability_Element_Signature_KillCounter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

