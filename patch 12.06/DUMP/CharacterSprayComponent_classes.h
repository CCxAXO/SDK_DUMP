// BlueprintGeneratedClass CharacterSprayComponent.CharacterSprayComponent_C
// Size: 0x148 (Inherited: 0x128)
struct UCharacterSprayComponent_C : UCharacterSprayComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x128(0x08)
	double Max Spray Distance; // 0x130(0x08)
	double Spray Cooldown; // 0x138(0x08)
	double Last Sprayed Time; // 0x140(0x08)

	bool AuthCanCharacterSpray(); // Function CharacterSprayComponent.CharacterSprayComponent_C.AuthCanCharacterSpray // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool AuthTraceSpray(struct FVector& TraceStart, struct FVector& TraceEnd, struct FHitResult& OutHit); // Function CharacterSprayComponent.CharacterSprayComponent_C.AuthTraceSpray // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function CharacterSprayComponent.CharacterSprayComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterSprayComponent(int32_t EntryPoint); // Function CharacterSprayComponent.CharacterSprayComponent_C.ExecuteUbergraph_CharacterSprayComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

