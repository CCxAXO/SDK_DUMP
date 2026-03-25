// BlueprintGeneratedClass DmgType_Base.DmgType_Base_C
// Size: 0x177 (Inherited: 0x158)
struct UDmgType_Base_C : UShooterDamageType {
	bool ShouldPlayVO_Pain; // 0x158(0x01)
	bool ShowDamageDirection; // 0x159(0x01)
	bool ShowNormalDamageIndicators; // 0x15a(0x01)
	char pad_15B[0x5]; // 0x15b(0x05)
	struct TArray<enum class DirectionEnum> CustomDirectionalDamageBlurs; // 0x160(0x10)
	enum class DirectionEnum CustomHUD_ShakeDirection; // 0x170(0x01)
	bool ShowCustomShake; // 0x171(0x01)
	bool bReportDamageDone; // 0x172(0x01)
	bool bReportKills; // 0x173(0x01)
	enum class EAresItemSlot EquippableSlot; // 0x174(0x01)
	bool bKillGivesUltPoint; // 0x175(0x01)
	bool PreventsHealing; // 0x176(0x01)

	void PlayHitConfirmSound(struct AShooterCharacter* FirstPersonShooterCharacter, struct AShooterCharacter* ShooterCharacterInstigator, struct AActor* HitActor, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, bool bLocalPlayerCanSeeVictim, float FalloffMultiplier, struct UDamageResponse* DamageResponse, bool bDied); // Function DmgType_Base.DmgType_Base_C.PlayHitConfirmSound // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	bool ShouldReportDamage(struct UObject* Instigator, struct UDamageResponse* Response); // Function DmgType_Base.DmgType_Base_C.ShouldReportDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	struct UCharacterAbilityStatisticsComponent_C* GetGameStatisticsComponent(struct UDamageResponse* Response, int32_t& CastIndex); // Function DmgType_Base.DmgType_Base_C.GetGameStatisticsComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void RespondToDamage(struct UDamageResponse* DamageResponse); // Function DmgType_Base.DmgType_Base_C.RespondToDamage // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
};

