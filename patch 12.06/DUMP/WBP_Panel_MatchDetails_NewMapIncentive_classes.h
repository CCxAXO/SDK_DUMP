// WidgetBlueprintGeneratedClass WBP_Panel_MatchDetails_NewMapIncentive.WBP_Panel_MatchDetails_NewMapIncentive_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Panel_MatchDetails_NewMapIncentive_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* EventIcon; // 0x3e8(0x08)
	struct UAresCommonText* MapRRProtectionText; // 0x3f0(0x08)
	struct FText MapName; // 0x3f8(0x18)
	bool UseViewModel; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UVM_MatchDetailsNewMapIncentive_C* NewMapIncentiveViewModel; // 0x418(0x08)

	void HandleNewMapNameChanged(struct FText MapName); // Function WBP_Panel_MatchDetails_NewMapIncentive.WBP_Panel_MatchDetails_NewMapIncentive_C.HandleNewMapNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindViewModels(bool Bind); // Function WBP_Panel_MatchDetails_NewMapIncentive.WBP_Panel_MatchDetails_NewMapIncentive_C.BindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNewMapIncentiveVM(struct UVM_MatchDetailsNewMapIncentive_C* NewMapIncentiveVM); // Function WBP_Panel_MatchDetails_NewMapIncentive.WBP_Panel_MatchDetails_NewMapIncentive_C.SetNewMapIncentiveVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(struct FString MatchID); // Function WBP_Panel_MatchDetails_NewMapIncentive.WBP_Panel_MatchDetails_NewMapIncentive_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMapDisplayName(struct FText MapDisplayName); // Function WBP_Panel_MatchDetails_NewMapIncentive.WBP_Panel_MatchDetails_NewMapIncentive_C.SetMapDisplayName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_MatchDetails_NewMapIncentive.WBP_Panel_MatchDetails_NewMapIncentive_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_MatchDetails_NewMapIncentive(int32_t EntryPoint); // Function WBP_Panel_MatchDetails_NewMapIncentive.WBP_Panel_MatchDetails_NewMapIncentive_C.ExecuteUbergraph_WBP_Panel_MatchDetails_NewMapIncentive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

