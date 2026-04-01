// WidgetBlueprintGeneratedClass WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C
// Size: 0x42d (Inherited: 0x3e0)
struct UWBP_Panel_PlayerTitle_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* Text_PlayerTitle; // 0x3e8(0x08)
	struct FText PreviewPlayerTitle; // 0x3f0(0x18)
	struct UCommonTextStyle* TextStyle; // 0x408(0x08)
	struct UVM_PlayerTitle_C* PlayerTitleViewModel; // 0x410(0x08)
	struct FString PlayerSubject; // 0x418(0x10)
	bool bConvertToUpperCase; // 0x428(0x01)
	bool bCollapseIfEmpty; // 0x429(0x01)
	bool OverrideActive; // 0x42a(0x01)
	bool AutoWrapText; // 0x42b(0x01)
	enum class ETextJustify TextJustification; // 0x42c(0x01)

	void SetTitleTextWithOverride(struct FText OutPlayerTitle); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.SetTitleTextWithOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyTitleText(struct FText InputPin); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.ApplyTitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindViewModels(bool Bind); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.BindViewModels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OverrideTitleText(bool OverrideActive, struct FText OverrideText); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.OverrideTitleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerTitle(int32_t EntryPoint); // Function WBP_Panel_PlayerTitle.WBP_Panel_PlayerTitle_C.ExecuteUbergraph_WBP_Panel_PlayerTitle // (Final|UbergraphFunction) // @ game+0x1b42740
};

