// BlueprintGeneratedClass EjectableBounceFxc.EjectableBounceFxc_C
// Size: 0x678 (Inherited: 0x630)
struct AEjectableBounceFxc_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x638(0x08)
	struct UAresAudioComponent* ReusableAudioComponent; // 0x640(0x08)
	struct UAkAudioEvent* BounceAudioEvent; // 0x648(0x08)
	enum class EAresSurfaceType BounceSurfaceType; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	int32_t NumBounces; // 0x654(0x04)
	double BounceSpeed; // 0x658(0x08)
	struct AAresEjectable* Ejectable; // 0x660(0x08)
	struct FString WWisePerspective; // 0x668(0x10)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function EjectableBounceFxc.EjectableBounceFxc_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function EjectableBounceFxc.EjectableBounceFxc_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_EjectableBounceFxc(int32_t EntryPoint); // Function EjectableBounceFxc.EjectableBounceFxc_C.ExecuteUbergraph_EjectableBounceFxc // (Final|UbergraphFunction) // @ game+0x1b42740
};

