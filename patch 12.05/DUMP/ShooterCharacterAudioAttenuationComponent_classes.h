// BlueprintGeneratedClass ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C
// Size: 0x6b8 (Inherited: 0x650)
struct UShooterCharacterAudioAttenuationComponent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x08)
	struct UFootstepsComponent* Footsteps Component; // 0x658(0x08)
	struct UUserWidget* Widget Class; // 0x660(0x08)
	double Radius; // 0x668(0x08)
	struct FStruct_AttenuationInformation CurrentOneShotVisualization; // 0x670(0x18)
	double VisualizeDuration; // 0x688(0x08)
	struct FTimerHandle ClearTimer; // 0x690(0x08)
	struct TArray<struct FStruct_AttenuationInformation> ConstantVisualizations; // 0x698(0x10)
	struct FMulticastInlineDelegate OnAudioVisualizationStateChanged; // 0x6a8(0x10)

	void PruneConstantArray(); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.PruneConstantArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisualizations(); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.UpdateVisualizations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Widgets(struct TArray<struct UUserWidget*>& Values); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.Get Widgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void RemoveAttenuationVisual(struct UAkComponent* AkComponent, struct AActor* Actor); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.RemoveAttenuationVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddNewAttenuationVisual(struct UAkComponent* AkComponent, struct AActor* OwningActor, double Radius, enum class Enum_AttenuationVisualization Type); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.AddNewAttenuationVisual // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ClearCurrentOneShotVisualization(); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.ClearCurrentOneShotVisualization // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddAudioAttenuationVisualization(struct UAresAudioComponent* AresAudioComponent, struct AActor* Owner, float VisualizationRadius, enum class EAudioAttenuationVisualizationType VisualizationType, float VisualizationDuration); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.AddAudioAttenuationVisualization // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void RemoveAudioAttenuationVisualization(struct UAresAudioComponent* AresAudioComponent, struct AActor* Owner); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.RemoveAudioAttenuationVisualization // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ShooterCharacterAudioAttenuationComponent(int32_t EntryPoint); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.ExecuteUbergraph_ShooterCharacterAudioAttenuationComponent // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnAudioVisualizationStateChanged__DelegateSignature(bool IsVisualizingAudio); // Function ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C.OnAudioVisualizationStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

