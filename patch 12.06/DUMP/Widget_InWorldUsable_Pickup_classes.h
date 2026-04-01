// WidgetBlueprintGeneratedClass Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C
// Size: 0x3a8 (Inherited: 0x330)
struct UWidget_InWorldUsable_Pickup_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt_155; // 0x338(0x08)
	struct UImage* BlackBG; // 0x340(0x08)
	struct UTextBlock* EquippableText; // 0x348(0x08)
	struct UTextBlock* GetText; // 0x350(0x08)
	struct UInputIconController_C* InputIconController; // 0x358(0x08)
	struct UTextBlock* PreambleText; // 0x360(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x368(0x10)
	struct FString Owner; // 0x378(0x10)
	struct AEquippableGroundPickup_C* GroundEquippable; // 0x388(0x08)
	struct TArray<struct UAresOutlineComponent*> OutlinedPrimitiveComponents; // 0x390(0x10)
	struct UWidgetComponent* WidgetComponent; // 0x3a0(0x08)

	void UpdateRotation(); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateUseTime(double Current Use Time, double Total Use Time); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateUseTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateInUse(bool NewInUse); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateUsability(bool NewUsability); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateUsability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChangeOffset(struct FVector New Offset); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.ChangeOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetUsableComponent(struct UUsableComponent* InUsableComponent, struct UWidgetComponent* InWidgetComponent, bool CurrentlyUsable, bool CurrentlyInUse, bool ShowUsableTime, bool ShowThirds, struct USceneComponent* PivotComponent, bool ShowProgressBar, bool ShowOwnerName, bool ShowCannotUseText); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.SetUsableComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CinematicModeUpdated(); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.CinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTextForUsable(struct UUsableComponent* Usable Component); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateTextForUsable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateActionName(struct FName Action Name); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.UpdateActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_InWorldUsable_Pickup(int32_t EntryPoint); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.ExecuteUbergraph_Widget_InWorldUsable_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void NewEventDispatcher_0__DelegateSignature(); // Function Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

