// WidgetBlueprintGeneratedClass HitLocationContainer.HitLocationContainer_C
// Size: 0x359 (Inherited: 0x318)
struct UHitLocationContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BodyshotsIcon; // 0x320(0x08)
	struct UTextBlock* BodyshotsText; // 0x328(0x08)
	struct UTextBlock* DamageText; // 0x330(0x08)
	struct UImage* HeadshotsIcon; // 0x338(0x08)
	struct UTextBlock* HeadshotsText; // 0x340(0x08)
	struct UImage* LegshotsIcon; // 0x348(0x08)
	struct UTextBlock* LegshotsText; // 0x350(0x08)
	bool IsAlly; // 0x358(0x01)

	void SetOpacityAndTextForLocation(int32_t Shots, struct UImage* Icon, struct UTextBlock* Text); // Function HitLocationContainer.HitLocationContainer_C.SetOpacityAndTextForLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetData(int32_t Headshots, int32_t Bodyshots, int32_t Legshots, int32_t Damage); // Function HitLocationContainer.HitLocationContainer_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function HitLocationContainer.HitLocationContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HitLocationContainer(int32_t EntryPoint); // Function HitLocationContainer.HitLocationContainer_C.ExecuteUbergraph_HitLocationContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

