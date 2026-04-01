// BlueprintGeneratedClass Actor_Ping.Actor_Ping_C
// Size: 0x4cb (Inherited: 0x4b0)
struct AActor_Ping_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x4b8(0x08)
	struct USphereComponent* Sphere; // 0x4c0(0x08)
	bool isUpgraded; // 0x4c8(0x01)
	bool isReinforced; // 0x4c9(0x01)
	bool upgrade; // 0x4ca(0x01)

	void ReceiveBeginPlay(); // Function Actor_Ping.Actor_Ping_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void upgradeYoself(); // Function Actor_Ping.Actor_Ping_C.upgradeYoself // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void makeUpgradedPing(); // Function Actor_Ping.Actor_Ping_C.makeUpgradedPing // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Actor_Ping(int32_t EntryPoint); // Function Actor_Ping.Actor_Ping_C.ExecuteUbergraph_Actor_Ping // (Final|UbergraphFunction) // @ game+0x1b42740
};

