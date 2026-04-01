// BlueprintGeneratedClass GroundObjectMarker.GroundObjectMarker_C
// Size: 0x70c (Inherited: 0x620)
struct AGroundObjectMarker_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UAresAudioComponent* AudioComponent; // 0x628(0x08)
	struct USphereComponent* CalloutCollider; // 0x630(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0x638(0x08)
	struct USimpleMinimapComponent_C* SimpleMinimapComponent; // 0x640(0x08)
	struct UActorVisibilityComponent* ActorVisibility; // 0x648(0x08)
	struct UWidgetComponent* Widget; // 0x650(0x08)
	struct UActorMinimapDisplayComponentDeprecated* ActorMinimapDisplay; // 0x658(0x08)
	struct UParticleSystemComponent* Icon; // 0x660(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x668(0x08)
	struct UTexture* IconImage; // 0x670(0x08)
	struct FLinearColor IconColor; // 0x678(0x10)
	bool ShowOwnerName; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	double NewVar_1; // 0x690(0x08)
	double EffectStartTime; // 0x698(0x08)
	double MinimapPulseTime; // 0x6a0(0x08)
	struct UCurveFloat* minimapDeadIconPulseCurve ; // 0x6a8(0x08)
	struct FString PlayerName; // 0x6b0(0x10)
	struct FText CharacterName; // 0x6c0(0x18)
	struct UCurveFloat* TextSizeCurve; // 0x6d8(0x08)
	struct UCurveFloat* OffsetCurve; // 0x6e0(0x08)
	struct UCurveFloat* IconSizeCurve; // 0x6e8(0x08)
	struct UTextBlock* SubjectTextObject; // 0x6f0(0x08)
	struct UTextBlock* RegionTextObject; // 0x6f8(0x08)
	struct UTextBlock* DistanceTextObject; // 0x700(0x08)
	int32_t CurrentShownDistance; // 0x708(0x04)

	void MakeChatMessage(struct AEquippableGroundPickup_C* EquippableGroundPickup[, struct FText& ChatText); // Function GroundObjectMarker.GroundObjectMarker_C.MakeChatMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetTextObjects(); // Function GroundObjectMarker.GroundObjectMarker_C.GetTextObjects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UserConstructionScript(); // Function GroundObjectMarker.GroundObjectMarker_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function GroundObjectMarker.GroundObjectMarker_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function GroundObjectMarker.GroundObjectMarker_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Got UI Data(struct UCharacterHandle* CharacterHandle); // Function GroundObjectMarker.GroundObjectMarker_C.Got UI Data // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GroundObjectMarker(int32_t EntryPoint); // Function GroundObjectMarker.GroundObjectMarker_C.ExecuteUbergraph_GroundObjectMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

