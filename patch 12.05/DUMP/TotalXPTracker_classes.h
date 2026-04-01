// WidgetBlueprintGeneratedClass TotalXPTracker.TotalXPTracker_C
// Size: 0x359 (Inherited: 0x318)
struct UTotalXPTracker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* LineLeft; // 0x320(0x08)
	struct UImage* LineRight; // 0x328(0x08)
	struct UVerticalBox* Middle; // 0x330(0x08)
	struct UXPCounter_C* XPCounter; // 0x338(0x08)
	double Position; // 0x340(0x08)
	struct FDateTime AnimatingSince; // 0x348(0x08)
	struct FDateTime AnimatingUntil; // 0x350(0x08)
	bool IsAnimating; // 0x358(0x01)

	void ShowEndState(int32_t XP); // Function TotalXPTracker.TotalXPTracker_C.ShowEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function TotalXPTracker.TotalXPTracker_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePositions(struct FGeometry Geometry); // Function TotalXPTracker.TotalXPTracker_C.UpdatePositions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TrickleXP(int32_t From, int32_t To, struct FTimespan Duration); // Function TotalXPTracker.TotalXPTracker_C.TrickleXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TickAnimation(); // Function TotalXPTracker.TotalXPTracker_C.TickAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SlideRight(struct FTimespan Duration); // Function TotalXPTracker.TotalXPTracker_C.SlideRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TotalXPTracker.TotalXPTracker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TotalXPTracker(int32_t EntryPoint); // Function TotalXPTracker.TotalXPTracker_C.ExecuteUbergraph_TotalXPTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

