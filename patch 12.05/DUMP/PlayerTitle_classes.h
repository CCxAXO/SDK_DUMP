// WidgetBlueprintGeneratedClass PlayerTitle.PlayerTitle_C
// Size: 0x338 (Inherited: 0x318)
struct UPlayerTitle_C : UUserWidget {
	struct UPlayerTitleFromAsset_C* PlayerTitleFromAsset; // 0x318(0x08)
	struct FString Subject; // 0x320(0x10)
	struct UPlatformPlayer* PlatformPlayer; // 0x330(0x08)

	void UpdateTitle(struct UPlatformPlayer* PlatformPlayer); // Function PlayerTitle.PlayerTitle_C.UpdateTitle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSubject(struct FString Subject); // Function PlayerTitle.PlayerTitle_C.SetSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

