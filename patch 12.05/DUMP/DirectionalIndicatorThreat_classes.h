// WidgetBlueprintGeneratedClass DirectionalIndicatorThreat.DirectionalIndicatorThreat_C
// Size: 0x3b8 (Inherited: 0x318)
struct UDirectionalIndicatorThreat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* TransitionFromFullToHalf; // 0x320(0x08)
	struct UWidgetAnimation* PopIn; // 0x328(0x08)
	struct UWidgetAnimation* FadeOut; // 0x330(0x08)
	struct UImage* IndicatorImage; // 0x338(0x08)
	struct UInvalidationBox* InvalidationBox_DirectionIndicatorThreat; // 0x340(0x08)
	struct FLinearColor Color; // 0x348(0x10)
	struct FVector Direction; // 0x358(0x18)
	double DurationSeconds; // 0x370(0x08)
	double StartTime; // 0x378(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x380(0x08)
	struct FRotator ReverseDirectionRotator; // 0x388(0x18)
	struct FVector2D Size; // 0x3a0(0x10)
	struct ADangerCompassActor_C* DangerCompassActor; // 0x3b0(0x08)

	void Update Widget(); // Function DirectionalIndicatorThreat.DirectionalIndicatorThreat_C.Update Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function DirectionalIndicatorThreat.DirectionalIndicatorThreat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function DirectionalIndicatorThreat.DirectionalIndicatorThreat_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ActorDestroyed(struct AActor* DestroyedActor); // Function DirectionalIndicatorThreat.DirectionalIndicatorThreat_C.ActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Fade(); // Function DirectionalIndicatorThreat.DirectionalIndicatorThreat_C.Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DirectionalIndicatorThreat(int32_t EntryPoint); // Function DirectionalIndicatorThreat.DirectionalIndicatorThreat_C.ExecuteUbergraph_DirectionalIndicatorThreat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

