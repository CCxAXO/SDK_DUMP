// WidgetBlueprintGeneratedClass PartyMemberPingIcon.PartyMemberPingIcon_C
// Size: 0x350 (Inherited: 0x318)
struct UPartyMemberPingIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Img_1stClosestPing; // 0x320(0x08)
	struct UImage* Img_2ndClosestPing; // 0x328(0x08)
	struct UImage* Img_3rdClosestPing; // 0x330(0x08)
	struct UPartyPlayerModel* PartyPlayerModel; // 0x338(0x08)
	struct UPartyModel* PartyModel; // 0x340(0x08)
	struct UPartyViewController* PartyViewController; // 0x348(0x08)

	void Get Ping Info Index for Image(struct TArray<struct FPingInfo>& PingInfos, struct TArray<struct UImage*>& Images, int32_t ImageIndex, int32_t& OutPingInfoIndex); // Function PartyMemberPingIcon.PartyMemberPingIcon_C.Get Ping Info Index for Image // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPingInfosOfGamePods(struct TArray<struct FString>& GamePods, int32_t MaxElements, struct TArray<struct FPingInfo>& OutPingInfos); // Function PartyMemberPingIcon.PartyMemberPingIcon_C.GetPingInfosOfGamePods // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetRelevantGamePods(struct TArray<struct FString>& OutRelevantGamePods); // Function PartyMemberPingIcon.PartyMemberPingIcon_C.GetRelevantGamePods // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateImageColors(); // Function PartyMemberPingIcon.PartyMemberPingIcon_C.UpdateImageColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPartyPlayerModel* Model, struct UPartyModel* PartyModel, struct UPartyViewController* PVC); // Function PartyMemberPingIcon.PartyMemberPingIcon_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPreferredGamePodsChanged(struct FPreferredGamePodMap PreferredGamePods); // Function PartyMemberPingIcon.PartyMemberPingIcon_C.OnPreferredGamePodsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPingsChanged(struct TArray<struct FPingInfo>& Pings); // Function PartyMemberPingIcon.PartyMemberPingIcon_C.OnPingsChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PartyMemberPingIcon(int32_t EntryPoint); // Function PartyMemberPingIcon.PartyMemberPingIcon_C.ExecuteUbergraph_PartyMemberPingIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

