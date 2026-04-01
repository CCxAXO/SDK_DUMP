// WidgetBlueprintGeneratedClass WBP_Panel_PartyLeader.WBP_Panel_PartyLeader_C
// Size: 0x5c0 (Inherited: 0x3e0)
struct UWBP_Panel_PartyLeader_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Img_Background; // 0x3e8(0x08)
	struct UImage* Img_Icon; // 0x3f0(0x08)
	struct USizeBox* SizeBox_Root; // 0x3f8(0x08)
	struct UVM_PartyLeader_C* PartyLeaderVM; // 0x400(0x08)
	struct FString PlayerSubject; // 0x408(0x10)
	char pad_418[0x8]; // 0x418(0x08)
	struct FSlateBrush BackgroundBrush; // 0x420(0xd0)
	struct FSlateBrush IconBrush; // 0x4f0(0xd0)

	void GetIntendedSize(double& OutWidth, double& OutHeight); // Function WBP_Panel_PartyLeader.WBP_Panel_PartyLeader_C.GetIntendedSize // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_PartyLeader.WBP_Panel_PartyLeader_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PartyLeader.WBP_Panel_PartyLeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PartyLeader.WBP_Panel_PartyLeader_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleIsPartyLeaderChanged(bool bIsPartyLeader); // Function WBP_Panel_PartyLeader.WBP_Panel_PartyLeader_C.HandleIsPartyLeaderChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PartyLeader.WBP_Panel_PartyLeader_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PartyLeader.WBP_Panel_PartyLeader_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PartyLeader(int32_t EntryPoint); // Function WBP_Panel_PartyLeader.WBP_Panel_PartyLeader_C.ExecuteUbergraph_WBP_Panel_PartyLeader // (Final|UbergraphFunction) // @ game+0x1b42740
};

