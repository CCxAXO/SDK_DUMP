// WidgetBlueprintGeneratedClass WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_FactionsLeaderboardEntry_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UPickemFactionViewModel* PickemFactionViewModel; // 0x3e8(0x08)
	struct UAresCommonText* CT_FactionName; // 0x3f0(0x08)
	struct UAresCommonText* CT_FactionPoints; // 0x3f8(0x08)
	struct UAresCommonText* CT_FactionRank; // 0x400(0x08)
	struct UAresCommonText* CT_HostName; // 0x408(0x08)
	struct UAresCommonText* CT_NumParticipants; // 0x410(0x08)
	struct UImage* Image_79; // 0x418(0x08)
	struct UImage* Image_HostIcon; // 0x420(0x08)
	struct UWBP_PickemsListEntryUnderline_C* WBP_PickemsListEntryUnderline; // 0x428(0x08)

	void SetPickemFactionViewModel(struct UPickemFactionViewModel* ViewModel); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.SetPickemFactionViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Num Participants Changed(int32_t In Num Participants); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.On Num Participants Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Host Name Changed(struct FString In Host Name); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.On Host Name Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Host Icon Changed(struct UTexture2D* In Icon); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.On Host Icon Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Points Changed(int32_t Points); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.On Points Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Rank Changed(int32_t Rank); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.On Rank Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Name Changed(struct FString Name); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.On Name Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init With VM(struct UPickemFactionViewModel* Faction); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.Init With VM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_FactionsLeaderboardEntry(int32_t EntryPoint); // Function WBP_Panel_FactionsLeaderboardEntry.WBP_Panel_FactionsLeaderboardEntry_C.ExecuteUbergraph_WBP_Panel_FactionsLeaderboardEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

