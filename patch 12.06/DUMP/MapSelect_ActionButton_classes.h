// WidgetBlueprintGeneratedClass MapSelect_ActionButton.MapSelect_ActionButton_C
// Size: 0x349 (Inherited: 0x318)
struct UMapSelect_ActionButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedButtonMaster_C* ActionButton; // 0x320(0x08)
	struct UTextBlock* T_YouAreCaptain; // 0x328(0x08)
	bool bIsCaptain; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x338(0x10)
	enum class EStepType CurrentStepType; // 0x348(0x01)

	void Initialize(); // Function MapSelect_ActionButton.MapSelect_ActionButton_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function MapSelect_ActionButton.MapSelect_ActionButton_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MapSelect_ActionButton(int32_t EntryPoint); // Function MapSelect_ActionButton.MapSelect_ActionButton_C.ExecuteUbergraph_MapSelect_ActionButton // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClicked__DelegateSignature(); // Function MapSelect_ActionButton.MapSelect_ActionButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

