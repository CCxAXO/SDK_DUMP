// WidgetBlueprintGeneratedClass Widget_InWorldUsable.Widget_InWorldUsable_C
// Size: 0x420 (Inherited: 0x330)
struct UWidget_InWorldUsable_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x338(0x08)
	struct UTextBlock* ActionText; // 0x340(0x08)
	struct UAnnotatedProgressBar_C* AnnotatedProgressBar; // 0x348(0x08)
	struct UImage* BG; // 0x350(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x358(0x08)
	struct UImage* Image_120; // 0x360(0x08)
	struct UImage* Image_122; // 0x368(0x08)
	struct UTextBlock* NotUsableText; // 0x370(0x08)
	struct UHorizontalBox* NotUsableTextBox; // 0x378(0x08)
	struct UOverlay* Overlay_1; // 0x380(0x08)
	struct UTextBlock* UsableText; // 0x388(0x08)
	struct UHorizontalBox* UsableTextBox; // 0x390(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x398(0x10)
	struct AActor* UsableActor; // 0x3a8(0x08)
	struct FEffectID FXC_ID_PostProcess; // 0x3b0(0x18)
	struct TArray<struct UPrimitiveComponent*> OutlinedPrimitiveComponents; // 0x3c8(0x10)
	struct UWidgetComponent* WidgetComponent; // 0x3d8(0x08)
	bool InUse; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct USceneComponent* PivotComponent; // 0x3e8(0x08)
	bool ShowCannotUseText; // 0x3f0(0x01)
	bool ShowProgressBar; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
	struct UCurveFloat* ScalingCurve; // 0x3f8(0x08)
	struct UCurveFloat* OffsetCurve; // 0x400(0x08)
	struct FVector Offset; // 0x408(0x18)

	void IsInputAllowed(bool& bInputAllowed); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.IsInputAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void SetOffset(struct FVector NewOffset); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.SetOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUsable(bool NewUsability); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.SetUsable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSize(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePivotRotation(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdatePivotRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInUse(bool InUse); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.SetInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetRenderDepthOnStoredComponents(bool bValue); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.SetRenderDepthOnStoredComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateRotation(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateUseTime(double Current Use Time, double Total Use Time); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateUseTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUsableComponent(struct UUsableComponent* InUsableComponent, struct UWidgetComponent* InWidgetComponent, bool CurrentlyUsable, bool CurrentlyInUse, bool ShowUsableTime, bool ShowThirds, struct USceneComponent* PivotComponent, bool ShowProgressBar, bool ShowOwnerName, bool ShowCannotUseText); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.SetUsableComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCurrentUsingComponentTimeChanged_Event_1(float CurrentUseTime, float TotalUseTime); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.OnCurrentUsingComponentTimeChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInUse(bool NewInUse); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateUsability(bool NewUsability); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateUsability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CinematicModeUpdated(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.CinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ChangeOffset(struct FVector New Offset); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.ChangeOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateActionName(struct FName Action Name); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTextForUsable(struct UUsableComponent* Usable Component); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.UpdateTextForUsable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_InWorldUsable(int32_t EntryPoint); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.ExecuteUbergraph_Widget_InWorldUsable // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void NewEventDispatcher_0__DelegateSignature(); // Function Widget_InWorldUsable.Widget_InWorldUsable_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

