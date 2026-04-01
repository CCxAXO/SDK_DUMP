// WidgetBlueprintGeneratedClass ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C
// Size: 0x400 (Inherited: 0x358)
struct UConferenceSelectOptionsItem_C : UAresContextMenuActionBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UImage* BackgroundImage; // 0x360(0x08)
	struct UButton* ConferenceButton; // 0x368(0x08)
	struct UTextBlock* ConferenceText; // 0x370(0x08)
	struct UTextBlock* GamePodText; // 0x378(0x08)
	struct UHorizontalBox* HorizontalBox_16; // 0x380(0x08)
	struct UImage* PingIcon; // 0x388(0x08)
	struct UTextBlock* PingText; // 0x390(0x08)
	struct UTextBlock* RecommendedText; // 0x398(0x08)
	int32_t Index; // 0x3a0(0x04)
	bool Is Selected; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct FLinearColor SelectedColor; // 0x3a8(0x10)
	struct FLinearColor UnselectedColor; // 0x3b8(0x10)
	struct FLinearColor HoverSelectedColor; // 0x3c8(0x10)
	struct FLinearColor HoverUnselectedColor; // 0x3d8(0x10)
	struct UPremierConferenceModelOld* Conference Model; // 0x3e8(0x08)
	struct FMulticastInlineDelegate ConferenceSelected; // 0x3f0(0x10)

	void Deselect(); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.Deselect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetConferenceText(); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.SetConferenceText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLatencyText(); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.SetLatencyText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetGamePodsText(); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.SetGamePodsText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitText(bool& Succeed); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.InitText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBackgroundColor(bool Is Selected, bool Is Hovered); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.UpdateBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_58_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPremierConferenceModelOld* Conference Model, int32_t Index, bool IsSelected); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GamePodButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.BndEvt__GamePodButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GamePodButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.BndEvt__GamePodButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ConferenceSelectOptionsItem(int32_t EntryPoint); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.ExecuteUbergraph_ConferenceSelectOptionsItem // (Final|UbergraphFunction) // @ game+0x1af5410
	void ConferenceSelected__DelegateSignature(struct UConferenceSelectOptionsItem_C* ConferenceSelectOption); // Function ConferenceSelectOptionsItem.ConferenceSelectOptionsItem_C.ConferenceSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

