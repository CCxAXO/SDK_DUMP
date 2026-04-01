// WidgetBlueprintGeneratedClass Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C
// Size: 0x368 (Inherited: 0x330)
struct UWidget_InWorldUsable_Hold_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* BlackBG; // 0x338(0x08)
	struct UProgressBar* ProgressBar_87; // 0x340(0x08)
	struct UWidget_InWorldUsable_Pickup_C* Widget_InWorldUsable_Pickup; // 0x348(0x08)
	struct AActor* Usable Actor; // 0x350(0x08)
	struct UWidgetComponent* Widget Component; // 0x358(0x08)
	struct USceneComponent* Pivot Component; // 0x360(0x08)

	void IsInputAllowed(bool& bInputAllowed); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.IsInputAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void Handle Cinematic Mode Updated(); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.Handle Cinematic Mode Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChangeOffset(struct FVector New Offset); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.ChangeOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInUse(bool NewInUse); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.UpdateInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateUsability(bool NewUsability); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.UpdateUsability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetUsableComponent(struct UUsableComponent* InUsableComponent, struct UWidgetComponent* InWidgetComponent, bool CurrentlyUsable, bool CurrentlyInUse, bool ShowUsableTime, bool ShowThirds, struct USceneComponent* PivotComponent, bool ShowProgressBar, bool ShowOwnerName, bool ShowCannotUseText); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.SetUsableComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateUseTime(double Current Use Time, double Total Use Time); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.UpdateUseTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTextForUsable(struct UUsableComponent* Usable Component); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.UpdateTextForUsable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateActionName(struct FName Action Name); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.UpdateActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_InWorldUsable_Hold(int32_t EntryPoint); // Function Widget_InWorldUsable_Hold.Widget_InWorldUsable_Hold_C.ExecuteUbergraph_Widget_InWorldUsable_Hold // (Final|UbergraphFunction) // @ game+0x1af5410
};

