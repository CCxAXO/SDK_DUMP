// WidgetBlueprintGeneratedClass Widget_Ability_Standard.Widget_Ability_Standard_C
// Size: 0x580 (Inherited: 0x4b8)
struct UWidget_Ability_Standard_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* TimerExpiring; // 0x4c0(0x08)
	struct UAbilityIconPrompt_C* AbilityIconPrompt; // 0x4c8(0x08)
	struct UNamedSlot* AbilityIconSlot; // 0x4d0(0x08)
	struct UImage* BackAnimIcon; // 0x4d8(0x08)
	struct UImage* FrontAnimIcon; // 0x4e0(0x08)
	struct UGridPanel* InputPromptGrid; // 0x4e8(0x08)
	struct UOverlay* Main; // 0x4f0(0x08)
	struct UNamedSlot* OverImageSlot; // 0x4f8(0x08)
	struct UImage* RechargeAnimIcon_2; // 0x500(0x08)
	struct UImage* Spacer; // 0x508(0x08)
	struct UImage* ThreeHolder; // 0x510(0x08)
	struct UVerticalBox* TimerVerticalBox; // 0x518(0x08)
	struct UImage* TwoHolder; // 0x520(0x08)
	struct UWBP_Ability_FocusState_C* WBP_Ability_FocusState; // 0x528(0x08)
	struct UWidget_Ability_Element_ChargeStandard_C* Widget_Ability_ChargeStandard; // 0x530(0x08)
	struct UWidget_Ability_Element_Signature_Cooldown_C* Widget_Ability_Element_Signature_Cooldown; // 0x538(0x08)
	struct UWidget_Ability_Element_Timer_C* Widget_Ability_Element_Timer; // 0x540(0x08)
	struct UWidget_Ability_Element_Icon_C* Widget_Ability_Icon; // 0x548(0x08)
	double BackIconTimeUpdateSpeed_1; // 0x550(0x08)
	double FrontIconDuration_1; // 0x558(0x08)
	double BackIconDuration_1; // 0x560(0x08)
	double RechargeIconDuration_1; // 0x568(0x08)
	struct FTimerHandle RechargeIconTimer_1; // 0x570(0x08)
	struct UMaterialInstance* Suppressed Icon Template; // 0x578(0x08)

	void OnStartWidget(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExpireWarningActive_Event_1(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.ExpireWarningActive_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TimerComplete_Event_1(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.TimerComplete_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivateWidget(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_Ability_Standard(int32_t EntryPoint); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.ExecuteUbergraph_Widget_Ability_Standard // (Final|UbergraphFunction) // @ game+0x1af5410
};

