// WidgetBlueprintGeneratedClass CoachesNotification.CoachesNotification_C
// Size: 0x350 (Inherited: 0x318)
struct UCoachesNotification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Hide; // 0x320(0x08)
	struct UWidgetAnimation* popup; // 0x328(0x08)
	struct UWidgetAnimation* FadeIn; // 0x330(0x08)
	struct UImage* Grad1; // 0x338(0x08)
	struct UImage* Grad2; // 0x340(0x08)
	struct UImage* NoPing; // 0x348(0x08)

	void DoPopupEvent(); // Function CoachesNotification.CoachesNotification_C.DoPopupEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function CoachesNotification.CoachesNotification_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CoachesNotification(int32_t EntryPoint); // Function CoachesNotification.CoachesNotification_C.ExecuteUbergraph_CoachesNotification // (Final|UbergraphFunction) // @ game+0x1b42740
};

