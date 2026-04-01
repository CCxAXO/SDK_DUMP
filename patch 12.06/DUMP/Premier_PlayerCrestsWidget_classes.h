// WidgetBlueprintGeneratedClass Premier_PlayerCrestsWidget.Premier_PlayerCrestsWidget_C
// Size: 0x4f8 (Inherited: 0x4a8)
struct UPremier_PlayerCrestsWidget_C : UAresCommonActivatableWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UOverlay* ContenderEligibility; // 0x4b0(0x08)
	struct UImage* FullScreenLoader; // 0x4b8(0x08)
	struct UImage* Image_150; // 0x4c0(0x08)
	struct UImage* Image_533; // 0x4c8(0x08)
	struct UWidgetSwitcher* PageLoadingSwitcher; // 0x4d0(0x08)
	struct UPremier_PlayerCrestsHistory_C* Premier_PlayerCrestsHistory; // 0x4d8(0x08)
	struct UTextBlock* TXT_ContenderExpiry; // 0x4e0(0x08)
	bool IsContenderExpiryACountdown; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct FDateTime ContenderExpiry; // 0x4f0(0x08)

	void Construct(); // Function Premier_PlayerCrestsWidget.Premier_PlayerCrestsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Premier_PlayerCrestsWidget.Premier_PlayerCrestsWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Init With Subject(struct FString Subject); // Function Premier_PlayerCrestsWidget.Premier_PlayerCrestsWidget_C.Init With Subject // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Panel Ready(); // Function Premier_PlayerCrestsWidget.Premier_PlayerCrestsWidget_C.Panel Ready // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Premier_PlayerCrestsWidget(int32_t EntryPoint); // Function Premier_PlayerCrestsWidget.Premier_PlayerCrestsWidget_C.ExecuteUbergraph_Premier_PlayerCrestsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

