// WidgetBlueprintGeneratedClass XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C
// Size: 0x3b0 (Inherited: 0x318)
struct UXboxGamePass_ActivationPane_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedButtonMaster_C* Accept; // 0x320(0x08)
	struct UImage* BGColorFill; // 0x328(0x08)
	struct UTextBlock* Description; // 0x330(0x08)
	struct UTextBlock* Description_2; // 0x338(0x08)
	struct UTextBlock* Description_3; // 0x340(0x08)
	struct UImage* Image_219; // 0x348(0x08)
	struct UImage* pubEX_IMage; // 0x350(0x08)
	struct UTextBlock* Subtitle; // 0x358(0x08)
	struct UTextBlock* Subtitle_2; // 0x360(0x08)
	struct UTextBlock* Subtitle_3; // 0x368(0x08)
	struct UTextBlock* Subtitle_4; // 0x370(0x08)
	struct UTextBlock* Title; // 0x378(0x08)
	struct UTextBlock* Title_2; // 0x380(0x08)
	struct UTextBlock* Title_3; // 0x388(0x08)
	struct UTextBlock* Title_4; // 0x390(0x08)
	struct UVerticalBox* VerticalBox_3; // 0x398(0x08)
	struct USubscriptionHandle* XboxSubscriptionHandle; // 0x3a0(0x08)
	struct USubscriptionDataAsset* XGPSubscriptionClass; // 0x3a8(0x08)

	void OnInitialized(); // Function XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAllSubscriptionsLoaded(struct FSubscriptionHandles& SubscriptionHandles); // Function XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C.OnAllSubscriptionsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__XboxGamePass_ActivationPane_Accept_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C.BndEvt__XboxGamePass_ActivationPane_Accept_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_XboxGamePass_ActivationPane(int32_t EntryPoint); // Function XboxGamePass_ActivationPane.XboxGamePass_ActivationPane_C.ExecuteUbergraph_XboxGamePass_ActivationPane // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

