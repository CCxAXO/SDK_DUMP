// WidgetBlueprintGeneratedClass GenericAnnouncementWidget.GenericAnnouncementWidget_C
// Size: 0x3b8 (Inherited: 0x322)
struct UGenericAnnouncementWidget_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Anim_OUT; // 0x330(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x338(0x08)
	struct UImage* BG; // 0x340(0x08)
	struct UImage* Blur; // 0x348(0x08)
	struct UBorder* BorderPlayerName; // 0x350(0x08)
	struct UBorder* BorderPlayerThumb; // 0x358(0x08)
	struct UImage* HeaderIcon; // 0x360(0x08)
	struct UImage* Line; // 0x368(0x08)
	struct UTextBlock* PrimaryText; // 0x370(0x08)
	struct UImage* RightIcon; // 0x378(0x08)
	struct UTextBlock* SubText; // 0x380(0x08)
	struct UImage* Thumb; // 0x388(0x08)
	struct AShooterCharacter* Character; // 0x390(0x08)
	struct FText Text; // 0x398(0x18)
	struct AActor* actorForLocationText; // 0x3b0(0x08)

	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function GenericAnnouncementWidget.GenericAnnouncementWidget_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function GenericAnnouncementWidget.GenericAnnouncementWidget_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function GenericAnnouncementWidget.GenericAnnouncementWidget_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function GenericAnnouncementWidget.GenericAnnouncementWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAnimatingIn(); // Function GenericAnnouncementWidget.GenericAnnouncementWidget_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnimatingOut(); // Function GenericAnnouncementWidget.GenericAnnouncementWidget_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GenericAnnouncementWidget(int32_t EntryPoint); // Function GenericAnnouncementWidget.GenericAnnouncementWidget_C.ExecuteUbergraph_GenericAnnouncementWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

