// WidgetBlueprintGeneratedClass BombDefusingAnnouncement.BombDefusingAnnouncement_C
// Size: 0x350 (Inherited: 0x322)
struct UBombDefusingAnnouncement_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UAnnotatedProgressBarNoNumerals_BombTest_C* AnnotatedProgressBarNoNumerals_BombTest; // 0x330(0x08)
	struct UBombIcon_C* BombIcon; // 0x338(0x08)
	bool bActive; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct AShooterCharacter* Character; // 0x348(0x08)

	void ShouldBeVisibleForViewer(bool& Visible); // Function BombDefusingAnnouncement.BombDefusingAnnouncement_C.ShouldBeVisibleForViewer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombDefusingAnnouncement.BombDefusingAnnouncement_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BombDefusingAnnouncement.BombDefusingAnnouncement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombDefusingAnnouncement(int32_t EntryPoint); // Function BombDefusingAnnouncement.BombDefusingAnnouncement_C.ExecuteUbergraph_BombDefusingAnnouncement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

