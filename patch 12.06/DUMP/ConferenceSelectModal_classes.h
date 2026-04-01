// WidgetBlueprintGeneratedClass ConferenceSelectModal.ConferenceSelectModal_C
// Size: 0x380 (Inherited: 0x318)
struct UConferenceSelectModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UImage* BG_2; // 0x328(0x08)
	struct UConferenceSelectOptions_C* ConferenceSelectOptions; // 0x330(0x08)
	struct UImage* Gradient; // 0x338(0x08)
	struct UImage* Logo; // 0x340(0x08)
	struct UImage* Pattern; // 0x348(0x08)
	struct UTextBlock* ServiceErrorText; // 0x350(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x358(0x08)
	struct UTextBlock* TextBlock_4; // 0x360(0x08)
	struct UImage* topornament; // 0x368(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary; // 0x370(0x08)
	struct UPremierRosterViewModel* PremierRosterModel; // 0x378(0x08)

	void Construct(); // Function ConferenceSelectModal.ConferenceSelectModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnEnrollSuccess(); // Function ConferenceSelectModal.ConferenceSelectModal_C.OnEnrollSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEnrollError(enum class EPremierRosterEnrollErrorTypeOld& ErrorType); // Function ConferenceSelectModal.ConferenceSelectModal_C.OnEnrollError // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ConfirmEnroll(); // Function ConferenceSelectModal.ConferenceSelectModal_C.ConfirmEnroll // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ConferenceSelectModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function ConferenceSelectModal.ConferenceSelectModal_C.BndEvt__ConferenceSelectModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ConferenceSelectModal(int32_t EntryPoint); // Function ConferenceSelectModal.ConferenceSelectModal_C.ExecuteUbergraph_ConferenceSelectModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

