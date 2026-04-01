// BlueprintGeneratedClass StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C
// Size: 0x140 (Inherited: 0xd8)
struct UStanceIndicatorNoiseVisualizationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FStruct_AttenuationInformation CurrentOneShotVisualization; // 0xe0(0x18)
	double DefaultVisualizeDuration; // 0xf8(0x08)
	struct FTimerHandle ClearTimer; // 0x100(0x08)
	struct TArray<struct FStruct_AttenuationInformation> ConstantVisualizations; // 0x108(0x10)
	struct FMulticastInlineDelegate OnAudioVisualizationStateChanged; // 0x118(0x10)
	bool bIsVisualizingAudio; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FMulticastInlineDelegate OnSoundPlayed; // 0x130(0x10)

	bool IsCurrentlyVisualizingAudio(); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.IsCurrentlyVisualizingAudio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PruneConstantArray(); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.PruneConstantArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisualizations(); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.UpdateVisualizations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemoveAttenuationVisual(struct UAkComponent* AkComponent, struct AActor* Actor); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.RemoveAttenuationVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddNewAttenuationVisual(struct UAkComponent* AkComponent, struct AActor* OwningActor, enum class Enum_AttenuationVisualization Type, double VisualizationDurationOverride); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.AddNewAttenuationVisual // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearCurrentOneShotVisualization(); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.ClearCurrentOneShotVisualization // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddAudioAttenuationVisualization(struct UAresAudioComponent* AresAudioComponent, struct AActor* Owner, float VisualizationRadius, enum class EAudioAttenuationVisualizationType VisualizationType, float VisualizationDuration); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.AddAudioAttenuationVisualization // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void RemoveAudioAttenuationVisualization(struct UAresAudioComponent* AresAudioComponent, struct AActor* Owner); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.RemoveAudioAttenuationVisualization // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_StanceIndicatorNoiseVisualizationComponent(int32_t EntryPoint); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.ExecuteUbergraph_StanceIndicatorNoiseVisualizationComponent // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnSoundPlayed__DelegateSignature(); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.OnSoundPlayed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAudioVisualizationStateChanged__DelegateSignature(bool IsVisualizingAudio); // Function StanceIndicatorNoiseVisualizationComponent.StanceIndicatorNoiseVisualizationComponent_C.OnAudioVisualizationStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

