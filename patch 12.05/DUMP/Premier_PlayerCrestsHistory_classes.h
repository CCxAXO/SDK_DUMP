// WidgetBlueprintGeneratedClass Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C
// Size: 0x498 (Inherited: 0x3e0)
struct UPremier_PlayerCrestsHistory_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Dot1; // 0x3e8(0x08)
	struct UImage* Dot2; // 0x3f0(0x08)
	struct UImage* Dot3; // 0x3f8(0x08)
	struct UImage* Dot4; // 0x400(0x08)
	struct UImage* Image; // 0x408(0x08)
	struct UImage* Image_43; // 0x410(0x08)
	struct UImage* Image_147; // 0x418(0x08)
	struct UImage* Image_362; // 0x420(0x08)
	struct UMenuAnchor* MenuAnchor_270; // 0x428(0x08)
	struct UButton* Popup_Button; // 0x430(0x08)
	struct UPremierStageComboBox_C* PremierStageComboBox; // 0x438(0x08)
	struct UPremierStageCrest_C* PremierStageCrest; // 0x440(0x08)
	struct UTextBlock* StageActiveStatus; // 0x448(0x08)
	struct UVM_PremierStageComboBox_C* PremierStageComboBoxVM; // 0x450(0x08)
	struct UVM_PremierCrests_C* PremierCrestsVM; // 0x458(0x08)
	struct FString Subject; // 0x460(0x10)
	int32_t AttemptsMax; // 0x470(0x04)
	struct FGuid SeasonID; // 0x474(0x10)
	bool VMsInit'd; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	struct FMulticastInlineDelegate Ready; // 0x488(0x10)

	void Bind PremierCrests Events(bool Bind); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.Bind PremierCrests Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set PremierCrestsVM(struct UVM_PremierCrests_C* PremierCrestsVM); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.Set PremierCrestsVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStageActiveStatus(); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.SetStageActiveStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind PremierStageComboBox Events(bool Bind); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.Bind PremierStageComboBox Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set PremierStageComboBoxVM(struct UVM_PremierStageComboBox_C* PremierStageComboBoxVM); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.Set PremierStageComboBoxVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindModelEvents(); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.BindModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Init With Subject(struct FString Subject); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.Init With Subject // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Premier Stage Selection Changed(struct FGuid SeasonID); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.On Premier Stage Selection Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void On PremierPlayerCrestsModel Updated(struct UPremierPlayerCrestsModelOld* PremierPlayerCrestsModel); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.On PremierPlayerCrestsModel Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Premier_PlayerCrestsHistory_Popup_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.BndEvt__Premier_PlayerCrestsHistory_Popup_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Premier_PlayerCrestsHistory(int32_t EntryPoint); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.ExecuteUbergraph_Premier_PlayerCrestsHistory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void Ready__DelegateSignature(); // Function Premier_PlayerCrestsHistory.Premier_PlayerCrestsHistory_C.Ready__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

