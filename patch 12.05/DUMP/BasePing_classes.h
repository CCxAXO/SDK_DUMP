// BlueprintGeneratedClass BasePing.BasePing_C
// Size: 0x7d0 (Inherited: 0x620)
struct ABasePing_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UComp_FXC_PlayspaceVisibility_C* Comp_FXC_PlayspaceVisibility; // 0x628(0x08)
	struct UAresAudioComponent* AudioComponent; // 0x630(0x08)
	struct UStaticMeshComponent* iconStaticMeshTargetRenderView; // 0x638(0x08)
	struct UStaticMeshComponent* ConnectorLineStaticMeshTargetRenderView; // 0x640(0x08)
	struct UStaticMeshComponent* ConnectorLineStaticMesh; // 0x648(0x08)
	struct UStaticMeshComponent* iconStaticMesh; // 0x650(0x08)
	struct UWidgetComponent* PingTextWidgetComponent; // 0x658(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0x660(0x08)
	struct USphereComponent* CalloutCollider; // 0x668(0x08)
	struct USimpleMinimapComponent_C* SimpleMinimapComponent; // 0x670(0x08)
	struct UActorVisibilityComponent* ActorVisibility; // 0x678(0x08)
	struct UActorMinimapDisplayComponentDeprecated* ActorMinimapDisplay; // 0x680(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x688(0x08)
	struct UTexture* IconImage; // 0x690(0x08)
	struct FLinearColor IconColor; // 0x698(0x10)
	bool ShowOwnerName; // 0x6a8(0x01)
	char pad_6A9[0x7]; // 0x6a9(0x07)
	struct UTextBlock* SubjectTextObject; // 0x6b0(0x08)
	struct UTextBlock* RegionTextObject; // 0x6b8(0x08)
	bool Danger; // 0x6c0(0x01)
	char pad_6C1[0x7]; // 0x6c1(0x07)
	struct UTextBlock* DistanceTextObject; // 0x6c8(0x08)
	struct UCurveFloat* OffsetCurve; // 0x6d0(0x08)
	struct UCurveFloat* IconSizeCurve; // 0x6d8(0x08)
	struct UCurveFloat* TextSizeCurve; // 0x6e0(0x08)
	struct UMaterialInstanceDynamic* PingIconMaterial; // 0x6e8(0x08)
	enum class NonVerbalCommTypesEnum VOToPlay; // 0x6f0(0x01)
	char pad_6F1[0x7]; // 0x6f1(0x07)
	struct FString PlayerName; // 0x6f8(0x10)
	struct FText CharacterName; // 0x708(0x18)
	bool NewPing; // 0x720(0x01)
	char pad_721[0x7]; // 0x721(0x07)
	double PingToNavDistance; // 0x728(0x08)
	struct UMaterialInstanceDynamic* ConnectorMaterial; // 0x730(0x08)
	struct TMap<enum class NonVerbalCommTypesEnum, struct FString> EnumToChatStringMap; // 0x738(0x50)
	double LifespanOfNewness; // 0x788(0x08)
	struct UCurveFloat* IconSizeCurve_Screen; // 0x790(0x08)
	double PingSize; // 0x798(0x08)
	int32_t CurrentShownDistance; // 0x7a0(0x04)
	bool IsCurrentlyTransparent; // 0x7a4(0x01)
	char pad_7A5[0x3]; // 0x7a5(0x03)
	struct UObject* PingSourceCharacter; // 0x7a8(0x08)
	struct UTextBlock* MetersTextObject; // 0x7b0(0x08)
	bool InWorldHidden; // 0x7b8(0x01)
	char pad_7B9[0x7]; // 0x7b9(0x07)
	struct UAkAudioEvent* NormalPingAudio; // 0x7c0(0x08)
	struct UAkAudioEvent* DangerPingAudio; // 0x7c8(0x08)

	void ShouldShowLineConnector(bool& ShouldBeHidden, double& PingToNavDistance, double& NavProjectedZ); // Function BasePing.BasePing_C.ShouldShowLineConnector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateConnectorLineVisibility(); // Function BasePing.BasePing_C.UpdateConnectorLineVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInWorldVisibility(); // Function BasePing.BasePing_C.UpdateInWorldVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCinematicModeVisibility(); // Function BasePing.BasePing_C.UpdateCinematicModeVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitCinematicMode(); // Function BasePing.BasePing_C.InitCinematicMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActorVisibilityChanged(struct AActor* PingActor); // Function BasePing.BasePing_C.OnActorVisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool GetIsMuted(struct UObject* Object); // Function BasePing.BasePing_C.GetIsMuted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GenerateVOandChat(struct FText& ChatMessageText); // Function BasePing.BasePing_C.GenerateVOandChat // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetTextObjects(); // Function BasePing.BasePing_C.GetTextObjects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UserConstructionScript(); // Function BasePing.BasePing_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void I_GOT_DA_THING(struct UCharacterHandle* CharacterHandle); // Function BasePing.BasePing_C.I_GOT_DA_THING // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function BasePing.BasePing_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function BasePing.BasePing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateColors(); // Function BasePing.BasePing_C.UpdateColors // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetEffect(); // Function BasePing.BasePing_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BasePing(int32_t EntryPoint); // Function BasePing.BasePing_C.ExecuteUbergraph_BasePing // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

