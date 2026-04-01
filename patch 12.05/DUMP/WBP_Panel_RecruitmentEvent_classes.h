// WidgetBlueprintGeneratedClass WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_Panel_RecruitmentEvent_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* Expiration; // 0x3e8(0x08)
	struct UAresCommonText* HeaderText; // 0x3f0(0x08)
	struct UTextBlock* ProgressText_2; // 0x3f8(0x08)
	struct UWBP_Timer_Countdown_C* Timer; // 0x400(0x08)
	struct UWBP_ProgressBar_Basic_C* WBP_ProgressBar_Basic; // 0x408(0x08)
	bool bDidBind; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UVM_RecruitmentEventPanel_C* VM_RecruitmentEventPanel; // 0x418(0x08)
	struct UCommonTextStyle* CommonTextStyleOverride_Title; // 0x420(0x08)

	void OnHeaderColorChanged(struct FLinearColor Header Color); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.OnHeaderColorChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRecruitmentExpiryChanged(bool IsExpired); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.OnRecruitmentExpiryChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRecruitmentVisibilityChanged(bool Visibility); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.OnRecruitmentVisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRecruitmentProgressChanged(int32_t CurrentProgress, int32_t Threshold, double Percent); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.OnRecruitmentProgressChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromCharacterData(struct UCharacterDataAsset* Character); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.InitFromCharacterData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromCharacterHandle(struct UCharacterHandle* Character); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.InitFromCharacterHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RecruitmentEvent(int32_t EntryPoint); // Function WBP_Panel_RecruitmentEvent.WBP_Panel_RecruitmentEvent_C.ExecuteUbergraph_WBP_Panel_RecruitmentEvent // (Final|UbergraphFunction) // @ game+0x1af5410
};

