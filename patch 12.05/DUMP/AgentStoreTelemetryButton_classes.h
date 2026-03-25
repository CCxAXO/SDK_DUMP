// WidgetBlueprintGeneratedClass AgentStoreTelemetryButton.AgentStoreTelemetryButton_C
// Size: 0x358 (Inherited: 0x318)
struct UAgentStoreTelemetryButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTelemetryButton* TelemetryButton; // 0x320(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x328(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x338(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x348(0x10)

	void BndEvt__AgentStoreTelemetryButton_TelemetryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function AgentStoreTelemetryButton.AgentStoreTelemetryButton_C.BndEvt__AgentStoreTelemetryButton_TelemetryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AgentStoreTelemetryButton_TelemetryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function AgentStoreTelemetryButton.AgentStoreTelemetryButton_C.BndEvt__AgentStoreTelemetryButton_TelemetryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AgentStoreTelemetryButton_TelemetryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function AgentStoreTelemetryButton.AgentStoreTelemetryButton_C.BndEvt__AgentStoreTelemetryButton_TelemetryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AgentStoreTelemetryButton(int32_t EntryPoint); // Function AgentStoreTelemetryButton.AgentStoreTelemetryButton_C.ExecuteUbergraph_AgentStoreTelemetryButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnUnHovered__DelegateSignature(); // Function AgentStoreTelemetryButton.AgentStoreTelemetryButton_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHovered__DelegateSignature(); // Function AgentStoreTelemetryButton.AgentStoreTelemetryButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClicked__DelegateSignature(); // Function AgentStoreTelemetryButton.AgentStoreTelemetryButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

