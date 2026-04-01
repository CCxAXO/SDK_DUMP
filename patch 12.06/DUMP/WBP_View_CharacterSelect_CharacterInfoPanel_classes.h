// WidgetBlueprintGeneratedClass WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C
// Size: 0x520 (Inherited: 0x3e0)
struct UWBP_View_CharacterSelect_CharacterInfoPanel_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UScaleBox* AgentNameSB; // 0x3e8(0x08)
	struct USizeBox* AgentNameTypeSB; // 0x3f0(0x08)
	struct UAresWidgetSwitcher* BodySwitcher; // 0x3f8(0x08)
	struct UVerticalBox* CharInfoBox; // 0x400(0x08)
	struct UTextBlock* Text_AbilityDesc; // 0x408(0x08)
	struct UTextBlock* Text_AgentDesc; // 0x410(0x08)
	struct UTextBlock* Text_AgentName; // 0x418(0x08)
	struct UTextBlock* Text_RoleName; // 0x420(0x08)
	struct UTextBlock* Text_SelectedAbilityTitle; // 0x428(0x08)
	struct UWBP_AgentSelect_NavBar_C* WBP_AgentSelect_NavBar; // 0x430(0x08)
	struct UWBP_QuickBomb_DetailPanelV2_C* WBP_QuickBomb_DetailPanelV2; // 0x438(0x08)
	struct UUserWidget* ModeInfo; // 0x440(0x08)
	struct UWBP_CharacterAbilityIcon_C* SelectedAbility; // 0x448(0x08)
	struct UVM_CharacterInfoPanel_C* CharacterInfoViewModel; // 0x450(0x08)
	struct FMulticastInlineDelegate OnAbilityClicked; // 0x458(0x10)
	struct UAresCommonButtonGroup* AbilityButtonGroup; // 0x468(0x08)
	struct TArray<struct UWBP_AbilityInfoButton_C*> AbilityIconButtons; // 0x470(0x10)
	struct TMap<struct FStruct_AgentSelect_AbilityButtonData, struct UWBP_AbilityInfoButton_ActualButton_C*> NavButtonMap; // 0x480(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct TSoftClassPtr<UObject>> ModeClassOverrides; // 0x4d0(0x50)

	void InitializeModeWidget(struct UUserWidget* WidgetClass); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.InitializeModeWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeNavButtonDetails(bool IncludeModeDetails, struct TArray<struct FRGICommonNavBarDetails>& ButtonDetails); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.MakeNavButtonDetails // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Apply Mode Widget Override(struct UUserWidget* InputWidgetClass, struct UUserWidget*& OutputWidgetClass); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.Apply Mode Widget Override // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeButtonDetail(enum class Enum_CharacterPreviewType PreviewType, enum class ECharacterAbilitySlot AbilitySlot, bool UseSmallWidgets, struct FRGICommonNavBarDetails& ButtonDetails); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.MakeButtonDetail // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetLeftMostNavButton(struct UAresCommonButton*& Button); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.GetLeftMostNavButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleAbilityIconsUpdated(struct TMap<struct FStruct_AgentSelect_AbilityButtonData, struct UTexture*> NewIcons); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.HandleAbilityIconsUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetButtonTexture(struct UWBP_AbilityInfoButton_ActualButton_C* Button, struct UTexture* Texture); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.SetButtonTexture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeNavButtons(bool SpawnModeTab, struct UUserWidget* ModeTabWidget, struct UTexture* ModeIcon); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.InitializeNavButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleSpawnModeTab(struct UUserWidget* DetailsTabWidget, struct FText IconPromptText, struct UTexture* Icon); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.HandleSpawnModeTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AbilityClicked(struct UWBP_AbilityInfoButton_ActualButton_C* Ability); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.AbilityClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUpdateVisibility(enum class ESlateVisibility Visibility); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.HandleUpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAbilitySelected(struct FText DisplayName, struct FText Description, enum class ECharacterAbilitySlot AbilitySlot, enum class Enum_CharacterPreviewType PreviewType, struct FText CharacterDescription, struct UCharacterUIData* CharacterUIData); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.HandleAbilitySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeAndBindViewModels(struct UVM_CharacterInfoPanel_C*& ViewModelToInitialize); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.MakeAndBindViewModels // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUpdateNameAndRole(struct UCharacterUIData* CharacterUIData, struct UCharacterRoleUIData* RoleUIData); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.HandleUpdateNameAndRole // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OffsetTranslationForLoc(); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.OffsetTranslationForLoc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAbilityButtonClicked(struct UCommonButtonBase* Button); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.OnAbilityButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInfoButtonSelectedChanged(struct UCommonButtonBase* Button, bool Selected); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.OnInfoButtonSelectedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_View_CharacterSelect_CharacterInfoPanel(int32_t EntryPoint); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.ExecuteUbergraph_WBP_View_CharacterSelect_CharacterInfoPanel // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnAbilityClicked__DelegateSignature(enum class ECharacterAbilitySlot AbilitySlot, enum class Enum_CharacterPreviewType PreviewSlot); // Function WBP_View_CharacterSelect_CharacterInfoPanel.WBP_View_CharacterSelect_CharacterInfoPanel_C.OnAbilityClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

