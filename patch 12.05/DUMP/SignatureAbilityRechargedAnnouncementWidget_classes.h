// WidgetBlueprintGeneratedClass SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C
// Size: 0x380 (Inherited: 0x322)
struct USignatureAbilityRechargedAnnouncementWidget_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Anim_OUT; // 0x330(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x338(0x08)
	struct UImage* Brush_Normal; // 0x340(0x08)
	struct UImage* Image_72; // 0x348(0x08)
	struct UImage* L; // 0x350(0x08)
	struct UTextBlock* PrimaryText; // 0x358(0x08)
	struct UImage* R; // 0x360(0x08)
	struct USizeBox* SizeBox_1; // 0x368(0x08)
	struct AShooterCharacter* Character; // 0x370(0x08)
	struct AActor* actorForLocationText; // 0x378(0x08)

	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingIn(); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingOut(); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SignatureAbilityRechargedAnnouncementWidget(int32_t EntryPoint); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.ExecuteUbergraph_SignatureAbilityRechargedAnnouncementWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

