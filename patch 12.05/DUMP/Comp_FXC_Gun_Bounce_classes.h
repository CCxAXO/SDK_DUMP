// BlueprintGeneratedClass Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C
// Size: 0x158 (Inherited: 0xe8)
struct UComp_FXC_Gun_Bounce_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FVector Location; // 0xf0(0x18)
	struct AActor* Actor-Owner; // 0x108(0x08)
	bool PostImmediately; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FMulticastInlineDelegate OnAudioEmitterStartedSurfPersp; // 0x118(0x10)
	struct UBaseAudioComponent_C* AudioEmitterSurfPersp; // 0x128(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x130(0x10)
	enum class EAresSurfaceType SurfaceType; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct UObject* Owner; // 0x148(0x08)
	struct UAkAudioEvent* SoundEvent; // 0x150(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_Gun_Bounce(int32_t EntryPoint); // Function Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C.ExecuteUbergraph_Comp_FXC_Gun_Bounce // (Final|UbergraphFunction) // @ game+0x1af5410
	void NewEventDispatcher_0__DelegateSignature(); // Function Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAudioEmitterStartedSurfPersp__DelegateSignature(struct UBaseAudioComponent_C* AudioEmitter); // Function Comp_FXC_Gun_Bounce.Comp_FXC_Gun_Bounce_C.OnAudioEmitterStartedSurfPersp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

