// BlueprintGeneratedClass Orb.Orb_C
// Size: 0x4f8 (Inherited: 0x4d8)
struct AOrb_C : APoolingGameObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	struct FMulticastInlineDelegate OrbClaimed; // 0x4e0(0x10)
	struct AOrbSpawnerParent_C* OwningSpawnerReference; // 0x4f0(0x08)

	void OnRep_OwningSpawnerReference(); // Function Orb.Orb_C.OnRep_OwningSpawnerReference // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Orb(int32_t EntryPoint); // Function Orb.Orb_C.ExecuteUbergraph_Orb // (Final|UbergraphFunction) // @ game+0x1b42740
	void OrbClaimed__DelegateSignature(struct AShooterCharacter* Claimer); // Function Orb.Orb_C.OrbClaimed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

