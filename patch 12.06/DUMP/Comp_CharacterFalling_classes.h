// BlueprintGeneratedClass Comp_CharacterFalling.Comp_CharacterFalling_C
// Size: 0x170 (Inherited: 0xd8)
struct UComp_CharacterFalling_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct UCurveFloat* LandingCameraShakeCurve; // 0xe0(0x08)
	struct FExplicitFloatCurve NewVar_1; // 0xe8(0x88)

	void OnTakeAnyDamage_Event_1(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Comp_CharacterFalling.Comp_CharacterFalling_C.OnTakeAnyDamage_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterLanded_Event_1(struct AShooterCharacter* Character, struct FHitResult HitResult); // Function Comp_CharacterFalling.Comp_CharacterFalling_C.OnCharacterLanded_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_CharacterFalling.Comp_CharacterFalling_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_CharacterFalling(int32_t EntryPoint); // Function Comp_CharacterFalling.Comp_CharacterFalling_C.ExecuteUbergraph_Comp_CharacterFalling // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

