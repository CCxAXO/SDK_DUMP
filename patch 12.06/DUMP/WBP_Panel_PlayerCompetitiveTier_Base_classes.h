// WidgetBlueprintGeneratedClass WBP_Panel_PlayerCompetitiveTier_Base.WBP_Panel_PlayerCompetitiveTier_Base_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerCompetitiveTier_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVM_PlayerCompetitiveTier_C* PlayerCompetitiveTierVM; // 0x3e8(0x08)
	struct FString PlayerSubject; // 0x3f0(0x10)

	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_PlayerCompetitiveTier_Base.WBP_Panel_PlayerCompetitiveTier_Base_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerCompetitiveTier_Base.WBP_Panel_PlayerCompetitiveTier_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCompetitiveTierChanged(struct FCompetitiveTierData CurrentTierData, bool bTierDataIsValid); // Function WBP_Panel_PlayerCompetitiveTier_Base.WBP_Panel_PlayerCompetitiveTier_Base_C.OnCompetitiveTierChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PlayerCompetitiveTier_Base.WBP_Panel_PlayerCompetitiveTier_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerCompetitiveTier_Base.WBP_Panel_PlayerCompetitiveTier_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerCompetitiveTier_Base(int32_t EntryPoint); // Function WBP_Panel_PlayerCompetitiveTier_Base.WBP_Panel_PlayerCompetitiveTier_Base_C.ExecuteUbergraph_WBP_Panel_PlayerCompetitiveTier_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

