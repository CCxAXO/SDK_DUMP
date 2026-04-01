// WidgetBlueprintGeneratedClass WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C
// Size: 0x550 (Inherited: 0x520)
struct UWBP_Screen_ConfirmationModal_Base_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UConfirmationModalViewModelBase* ConfirmationModalViewModel; // 0x528(0x08)
	bool bModalIsReady; // 0x530(0x01)
	bool bModalInitialized; // 0x531(0x01)
	char pad_532[0x6]; // 0x532(0x06)
	struct UConfirmModalInfoBase* ModalInfo; // 0x538(0x08)
	enum class EUIConfirmationModalType ModalType; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	struct FName ModalInfoParamName; // 0x544(0x0c)

	void CheckAndLogCallbackError(enum class EUIConfirmationModalResponse ResponseType); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.CheckAndLogCallbackError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TriggerDismiss(); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.TriggerDismiss // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TriggerConfirm2(); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.TriggerConfirm2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TriggerCustomAction(struct FName ActionID); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.TriggerCustomAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool BP_OnHandleBackAction(); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsModalInitalized(bool& Initialized); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.IsModalInitalized // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void SetupConfirmationViewModal(); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.SetupConfirmationViewModal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsModalReady(bool& bIsReady); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.IsModalReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void OnModalTypeChanged(enum class EUIConfirmationModalType ModalType); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.OnModalTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TriggerCancel(); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.TriggerCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TriggerConfirm(); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.TriggerConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnModalReady(bool HasValidData); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.OnModalReady // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToConfirmationViewModel(bool Bind); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.BindToConfirmationViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NativeInitFromNavArgs(struct TMap<struct FName, struct FWildcard>& InParameters); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.NativeInitFromNavArgs // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Generic Init from Nav Args(struct TMap<struct FName, struct FWildcard> In Params); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.Generic Init from Nav Args // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_ConfirmationModal_Base(int32_t EntryPoint); // Function WBP_Screen_ConfirmationModal_Base.WBP_Screen_ConfirmationModal_Base_C.ExecuteUbergraph_WBP_Screen_ConfirmationModal_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

