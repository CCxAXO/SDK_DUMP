// WidgetBlueprintGeneratedClass BombPlantingAnnouncement.BombPlantingAnnouncement_C
// Size: 0x350 (Inherited: 0x322)
struct UBombPlantingAnnouncement_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UAnnotatedProgressBar_C* AnnotatedProgressBar; // 0x330(0x08)
	struct UImage* Backing; // 0x338(0x08)
	struct UBombIcon_C* BombIcon; // 0x340(0x08)
	struct AShooterCharacter* Character; // 0x348(0x08)

	void ShouldBeVisibleForViewer(bool& Visible); // Function BombPlantingAnnouncement.BombPlantingAnnouncement_C.ShouldBeVisibleForViewer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function BombPlantingAnnouncement.BombPlantingAnnouncement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombPlantingAnnouncement.BombPlantingAnnouncement_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BombPlantingAnnouncement(int32_t EntryPoint); // Function BombPlantingAnnouncement.BombPlantingAnnouncement_C.ExecuteUbergraph_BombPlantingAnnouncement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

