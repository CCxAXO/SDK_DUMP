// WidgetBlueprintGeneratedClass InQueueTimer_PC.InQueueTimer_PC_C
// Size: 0x380 (Inherited: 0x320)
struct UInQueueTimer_PC_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UButton* CloseButton; // 0x328(0x08)
	struct UImage* Image_1; // 0x330(0x08)
	struct UImage* Image_2; // 0x338(0x08)
	struct UImage* Image_3; // 0x340(0x08)
	struct UHorizontalBox* InQueueBox; // 0x348(0x08)
	struct UOverlay* InQueueOverlay; // 0x350(0x08)
	struct UPartyMatchmakingTimer_C* PartyMatchmakingTimer; // 0x358(0x08)
	struct FMulticastInlineDelegate OnCloseClicked; // 0x360(0x10)
	struct UPartyViewController* View Controller; // 0x370(0x08)
	struct UPartyModel* PartyModel; // 0x378(0x08)

	void Construct(); // Function InQueueTimer_PC.InQueueTimer_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function InQueueTimer_PC.InQueueTimer_PC_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_InQueueTimer_PC(int32_t EntryPoint); // Function InQueueTimer_PC.InQueueTimer_PC_C.ExecuteUbergraph_InQueueTimer_PC // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnCloseClicked__DelegateSignature(); // Function InQueueTimer_PC.InQueueTimer_PC_C.OnCloseClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

