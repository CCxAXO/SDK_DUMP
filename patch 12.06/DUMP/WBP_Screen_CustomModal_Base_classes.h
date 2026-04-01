// WidgetBlueprintGeneratedClass WBP_Screen_CustomModal_Base.WBP_Screen_CustomModal_Base_C
// Size: 0x544 (Inherited: 0x520)
struct UWBP_Screen_CustomModal_Base_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UCustomModalViewModelBase* CustomModalViewModel; // 0x528(0x08)
	struct UCustomModalInfoBase* CustomModalInfo; // 0x530(0x08)
	struct FName ModalInfoParamName; // 0x538(0x0c)

	bool BP_OnHandleBackAction(); // Function WBP_Screen_CustomModal_Base.WBP_Screen_CustomModal_Base_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToCustomModalViewModel(struct UCustomModalViewModelBase* CustomModalViewModel, bool Bind); // Function WBP_Screen_CustomModal_Base.WBP_Screen_CustomModal_Base_C.BindToCustomModalViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupModalViewModel(); // Function WBP_Screen_CustomModal_Base.WBP_Screen_CustomModal_Base_C.SetupModalViewModel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TriggerClose(); // Function WBP_Screen_CustomModal_Base.WBP_Screen_CustomModal_Base_C.TriggerClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_CustomModal_Base.WBP_Screen_CustomModal_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_CustomModal_Base.WBP_Screen_CustomModal_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_CustomModal_Base(int32_t EntryPoint); // Function WBP_Screen_CustomModal_Base.WBP_Screen_CustomModal_Base_C.ExecuteUbergraph_WBP_Screen_CustomModal_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

