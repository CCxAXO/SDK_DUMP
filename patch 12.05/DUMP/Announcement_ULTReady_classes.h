// WidgetBlueprintGeneratedClass Announcement_ULTReady.Announcement_ULTReady_C
// Size: 0x524 (Inherited: 0x322)
struct UAnnouncement_ULTReady_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Anim_OUT_1; // 0x330(0x08)
	struct UWidgetAnimation* Anim_IN_1; // 0x338(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x340(0x08)
	struct UImage* bar_left; // 0x348(0x08)
	struct UImage* bar_right; // 0x350(0x08)
	struct UBorder* BrushNormal; // 0x358(0x08)
	struct UImage* Ether; // 0x360(0x08)
	struct UImage* LeftBar; // 0x368(0x08)
	struct UTextBlock* PrimaryText; // 0x370(0x08)
	struct UImage* RightBar; // 0x378(0x08)
	struct UImage* ULTIconImage; // 0x380(0x08)
	struct AShooterCharacter* Character; // 0x388(0x08)
	struct FText Secondary_text; // 0x390(0x18)
	struct AActor* actorForLocationText; // 0x3a8(0x08)
	struct FText Money; // 0x3b0(0x18)
	struct FText RoundNumber; // 0x3c8(0x18)
	struct FText Objective; // 0x3e0(0x18)
	struct FText SideSwap; // 0x3f8(0x18)
	struct FText UltName; // 0x410(0x18)
	struct UMaterialInstance* Icon Material; // 0x428(0x08)
	struct FSlateBrush Ulticon; // 0x430(0xd0)
	struct FText Primary_text; // 0x500(0x18)
	struct FName ActionMapping; // 0x518(0x0c)

	void SetIcon(); // Function Announcement_ULTReady.Announcement_ULTReady_C.SetIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function Announcement_ULTReady.Announcement_ULTReady_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function Announcement_ULTReady.Announcement_ULTReady_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function Announcement_ULTReady.Announcement_ULTReady_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Announcement_ULTReady.Announcement_ULTReady_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingIn(); // Function Announcement_ULTReady.Announcement_ULTReady_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingOut(); // Function Announcement_ULTReady.Announcement_ULTReady_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Announcement_ULTReady(int32_t EntryPoint); // Function Announcement_ULTReady.Announcement_ULTReady_C.ExecuteUbergraph_Announcement_ULTReady // (Final|UbergraphFunction) // @ game+0x1af5410
};

