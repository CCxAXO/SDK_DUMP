// BlueprintGeneratedClass OnKillEffect_Base.OnKillEffect_Base_C
// Size: 0x170 (Inherited: 0xd8)
struct UOnKillEffect_Base_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct UParticleSystem* KillEffect; // 0xe0(0x08)
	bool ShouldDoTimeDilation; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct AEffectContainer* Victim FXC; // 0xf0(0x08)
	double DestroyCorpseTime; // 0xf8(0x08)
	struct AShooterCharacter* Victim; // 0x100(0x08)
	bool CancelMovement; // 0x108(0x01)
	bool BombPlanted & VictimIsDefender; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct AEffectContainer* VictimFXC_Planted; // 0x110(0x08)
	struct TMap<struct AShooterCharacter*, struct FTimerHandle> DestroyCorpseTimers; // 0x118(0x50)
	struct AAresEquippable* KillingEquippable; // 0x168(0x08)

	void ReceiveBeginPlay(); // Function OnKillEffect_Base.OnKillEffect_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function OnKillEffect_Base.OnKillEffect_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void AuthOnPlayerKilled(struct AOwnerExclusivePlayerInfo* KillerPlayerInfo, struct AOwnerExclusivePlayerInfo* VictimPlayerInfo, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function OnKillEffect_Base.OnKillEffect_Base_C.AuthOnPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_OnKillEffect_Base(int32_t EntryPoint); // Function OnKillEffect_Base.OnKillEffect_Base_C.ExecuteUbergraph_OnKillEffect_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

