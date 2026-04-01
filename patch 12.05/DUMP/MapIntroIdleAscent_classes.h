// WidgetBlueprintGeneratedClass MapIntroIdleAscent.MapIntroIdleAscent_C
// Size: 0x3a8 (Inherited: 0x320)
struct UMapIntroIdleAscent_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Idle; // 0x328(0x08)
	struct UImage* MapBG; // 0x330(0x08)
	struct FText MapText; // 0x338(0x18)
	bool NewVar_1; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct TMap<struct FString, struct UTexture2D*> MapArt; // 0x358(0x50)

	void SetMapBackground(struct FString MapID); // Function MapIntroIdleAscent.MapIntroIdleAscent_C.SetMapBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MapIntroIdleAscent.MapIntroIdleAscent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MapIntroIdleAscent(int32_t EntryPoint); // Function MapIntroIdleAscent.MapIntroIdleAscent_C.ExecuteUbergraph_MapIntroIdleAscent // (Final|UbergraphFunction) // @ game+0x1af5410
};

