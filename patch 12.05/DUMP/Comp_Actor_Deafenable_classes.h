// BlueprintGeneratedClass Comp_Actor_Deafenable.Comp_Actor_Deafenable_C
// Size: 0x150 (Inherited: 0xd8)
struct UComp_Actor_Deafenable_C : UActorComponent {
	struct TMap<struct UObject*, struct FStruct_DeafenRequest> Deafens; // 0xd8(0x50)
	struct FMulticastInlineDelegate OnBeginDeafen; // 0x128(0x10)
	struct FMulticastInlineDelegate OnEndDeafen; // 0x138(0x10)
	struct UObject* ActiveDeafenSource; // 0x148(0x08)

	void ApplyDeafen(); // Function Comp_Actor_Deafenable.Comp_Actor_Deafenable_C.ApplyDeafen // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetCurrentDeafen(struct TArray<struct UAkAudioEvent*>& StartEvents, struct TArray<struct UAkAudioEvent*>& EndEvents); // Function Comp_Actor_Deafenable.Comp_Actor_Deafenable_C.GetCurrentDeafen // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopDeafen(struct UObject* Source); // Function Comp_Actor_Deafenable.Comp_Actor_Deafenable_C.StopDeafen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartDeafen(struct UObject* Source, struct TArray<struct UAkAudioEvent*>& BeginEvents, struct TArray<struct UAkAudioEvent*>& EndEvents); // Function Comp_Actor_Deafenable.Comp_Actor_Deafenable_C.StartDeafen // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEndDeafen__DelegateSignature(struct TArray<struct UAkAudioEvent*>& Events); // Function Comp_Actor_Deafenable.Comp_Actor_Deafenable_C.OnEndDeafen__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBeginDeafen__DelegateSignature(struct TArray<struct UAkAudioEvent*>& Events); // Function Comp_Actor_Deafenable.Comp_Actor_Deafenable_C.OnBeginDeafen__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

