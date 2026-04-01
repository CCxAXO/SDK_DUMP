// WidgetBlueprintGeneratedClass PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C
// Size: 0x378 (Inherited: 0x358)
struct UPlayScreenPartyMemberListing_Base_C : UListItemDisplayEntryBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UPartyPlayerModel* Model; // 0x360(0x08)
	struct UAkAudioEvent* ClickSound; // 0x368(0x08)
	struct UUserWidget* PartyInvitePanel; // 0x370(0x08)

	void NotifyActivatedWithAction(enum class PartyPlayerAction Action); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.NotifyActivatedWithAction // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPartyModel(struct UPartyModel* NewValue); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.SetPartyModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindPartyPlayerModelListeners(); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.UnbindPartyPlayerModelListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindPartyPlayerModelListeners(); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.BindPartyPlayerModelListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartyPlayerModelChanged(); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.OnPartyPlayerModelChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NotifyInviteButtonClicked(); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.NotifyInviteButtonClicked // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UPartyPlayerModel* GetPartyPlayerModel(); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.GetPartyPlayerModel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool IsSelf(); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.IsSelf // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InitializeEmpty(); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.InitializeEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemovePlayer(struct UPartyPlayerModel* Player); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.RemovePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HasPlayer(bool& HasPlayer); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.HasPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetPlayer(struct UPartyPlayerModel* Player); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetListItemData(struct FWildcard& NewValue); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.SetListItemData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayScreenPartyMemberListing_Base(int32_t EntryPoint); // Function PlayScreenPartyMemberListing_Base.PlayScreenPartyMemberListing_Base_C.ExecuteUbergraph_PlayScreenPartyMemberListing_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

