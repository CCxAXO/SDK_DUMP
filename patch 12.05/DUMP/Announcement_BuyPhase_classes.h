// WidgetBlueprintGeneratedClass Announcement_BuyPhase.Announcement_BuyPhase_C
// Size: 0x530 (Inherited: 0x322)
struct UAnnouncement_BuyPhase_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Anim_OUT; // 0x330(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x338(0x08)
	struct UImage* bar_left; // 0x340(0x08)
	struct UImage* bar_right; // 0x348(0x08)
	struct UBorder* BrushNormal; // 0x350(0x08)
	struct UTextBlock* BuyPhaseText; // 0x358(0x08)
	struct UImage* Circle; // 0x360(0x08)
	struct UImage* Ether; // 0x368(0x08)
	struct UImage* Image; // 0x370(0x08)
	struct UImage* LeftBar; // 0x378(0x08)
	struct UTextBlock* MoneyText; // 0x380(0x08)
	struct UTextBlock* ObjectiveText; // 0x388(0x08)
	struct UTextBlock* PrimaryText; // 0x390(0x08)
	struct UImage* RightBar; // 0x398(0x08)
	struct UTextBlock* RoundNumberText; // 0x3a0(0x08)
	struct UTextBlock* SideSwapText; // 0x3a8(0x08)
	struct AShooterCharacter* Character; // 0x3b0(0x08)
	struct FText Text; // 0x3b8(0x18)
	struct AActor* actorForLocationText; // 0x3d0(0x08)
	struct FText Money; // 0x3d8(0x18)
	struct FText RoundNumber; // 0x3f0(0x18)
	struct FText Objective; // 0x408(0x18)
	struct FText SideSwap; // 0x420(0x18)
	struct FText UltName; // 0x438(0x18)
	struct UMaterialInstance* Icon Material; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)
	struct FSlateBrush Texture; // 0x460(0xd0)

	void SetIcon(); // Function Announcement_BuyPhase.Announcement_BuyPhase_C.SetIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function Announcement_BuyPhase.Announcement_BuyPhase_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function Announcement_BuyPhase.Announcement_BuyPhase_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function Announcement_BuyPhase.Announcement_BuyPhase_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Announcement_BuyPhase.Announcement_BuyPhase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingIn(); // Function Announcement_BuyPhase.Announcement_BuyPhase_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingOut(); // Function Announcement_BuyPhase.Announcement_BuyPhase_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Announcement_BuyPhase(int32_t EntryPoint); // Function Announcement_BuyPhase.Announcement_BuyPhase_C.ExecuteUbergraph_Announcement_BuyPhase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

