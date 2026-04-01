// WidgetBlueprintGeneratedClass Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C
// Size: 0x3a9 (Inherited: 0x330)
struct UWidget_InWorldUsable_Multi_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidget_InWorldUsable_C* Widget_InWorldUsable; // 0x338(0x08)
	struct UWidget_InWorldUsable_Hold_C* Widget_InWorldUsable_Hold; // 0x340(0x08)
	struct AActor* Usable Actor; // 0x348(0x08)
	struct UWidgetComponent* Widget Component; // 0x350(0x08)
	struct USceneComponent* Pivot Component; // 0x358(0x08)
	struct FVector Position Offset; // 0x360(0x18)
	struct UCurveFloat* Offset Curve; // 0x378(0x08)
	struct UCurveFloat* Scaling Curve; // 0x380(0x08)
	struct UUsableComponent* Usable Component; // 0x388(0x08)
	double Usable Start Use Time; // 0x390(0x08)
	float Usable Total Use Time; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	double Usable Hold Buffer Time; // 0x3a0(0x08)
	bool Exclude Buffer Time From Progress; // 0x3a8(0x01)

	void IsInputAllowed(bool& bInputAllowed); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.IsInputAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	double Get Current Usable Total Use Time(); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Get Current Usable Total Use Time // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Set Hold to Use Visibility(bool New Visibility); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Set Hold to Use Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Press to Use Visibility(bool New Visibility); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Set Press to Use Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	double Get Current Usable Use Time(); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Get Current Usable Use Time // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Handle Using Time Changed(float CurrentUseTime, float TotalUseTime); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Handle Using Time Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Cinematic Mode Updated(); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Handle Cinematic Mode Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Size(); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Update Size // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Rotation(); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Update Rotation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Pivot Rotation(); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Update Pivot Rotation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateInUse(bool NewInUse); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.UpdateInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetUsableComponent(struct UUsableComponent* InUsableComponent, struct UWidgetComponent* InWidgetComponent, bool CurrentlyUsable, bool CurrentlyInUse, bool ShowUsableTime, bool ShowThirds, struct USceneComponent* PivotComponent, bool ShowProgressBar, bool ShowOwnerName, bool ShowCannotUseText); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.SetUsableComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChangeOffset(struct FVector New Offset); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.ChangeOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTextForUsable(struct UUsableComponent* Usable Component); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.UpdateTextForUsable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateUsability(bool NewUsability); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.UpdateUsability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdateUseTime(double Current Use Time, double Total Use Time); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.UpdateUseTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateActionName(struct FName Action Name); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.UpdateActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_InWorldUsable_Multi(int32_t EntryPoint); // Function Widget_InWorldUsable_Multi.Widget_InWorldUsable_Multi_C.ExecuteUbergraph_Widget_InWorldUsable_Multi // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

