// BlueprintGeneratedClass AresHUD.AresHUD_C
// Size: 0xbe0 (Inherited: 0xba0)
struct AAresHUD_C : AShooterHUD {
	struct USceneComponent* DefaultSceneRoot; // 0xba0(0x08)
	double LastHitTime; // 0xba8(0x08)
	double HitEffectFadeTimeSeconds; // 0xbb0(0x08)
	double LastHealedTime; // 0xbb8(0x08)
	double HealEffectFadeTimeSeconds; // 0xbc0(0x08)
	double LastHealedAmount; // 0xbc8(0x08)
	struct TArray<struct AShooterCharacter*> spottedCharacters; // 0xbd0(0x10)
};

