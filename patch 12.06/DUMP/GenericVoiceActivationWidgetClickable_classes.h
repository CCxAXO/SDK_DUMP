// WidgetBlueprintGeneratedClass GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct UGenericVoiceActivationWidgetClickable_C : UGenericVoiceActivationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UGenericTextTooltip_C* TextTooltip; // 0x3e8(0x08)

	struct FEventReply HandleMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.HandleMouseButtonDown // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* On_TooltipAnchor_GetMenuContent(); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.On_TooltipAnchor_GetMenuContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetRestrictedTooltip(struct FText& Result); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.GetRestrictedTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateTooltipMessage(); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.UpdateTooltipMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeTooltipMessage(struct FText& TooltipMessage); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.MakeTooltipMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void UpdateWidget(); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GenericVoiceActivationWidgetClickable(int32_t EntryPoint); // Function GenericVoiceActivationWidgetClickable.GenericVoiceActivationWidgetClickable_C.ExecuteUbergraph_GenericVoiceActivationWidgetClickable // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

