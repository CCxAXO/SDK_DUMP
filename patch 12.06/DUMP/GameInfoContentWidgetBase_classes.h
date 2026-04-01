// WidgetBlueprintGeneratedClass GameInfoContentWidgetBase.GameInfoContentWidgetBase_C
// Size: 0x378 (Inherited: 0x348)
struct UGameInfoContentWidgetBase_C : UGameInfoContentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x350(0x08)
	struct TArray<struct UCoordinatedHUDElement*> CoordinatedHUDElement; // 0x358(0x10)
	struct FMulticastInlineDelegate RebroadcastPulseTimer; // 0x368(0x10)

	void CheckAddWidgetToPlayerScreen(); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.CheckAddWidgetToPlayerScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetGameTimer(struct UTimerHUDElement_C*& Timer HUD Element); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.GetGameTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCinematicModeUpdated(); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.OnCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PulseTimer(); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.PulseTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.SetHUDModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelectMenuOpenUpdated(bool IsOpen); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.OnSelectMenuOpenUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GameInfoContentWidgetBase(int32_t EntryPoint); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.ExecuteUbergraph_GameInfoContentWidgetBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void RebroadcastPulseTimer__DelegateSignature(); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.RebroadcastPulseTimer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

