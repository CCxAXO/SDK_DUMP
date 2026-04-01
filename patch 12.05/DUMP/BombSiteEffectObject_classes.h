// BlueprintGeneratedClass BombSiteEffectObject.BombSiteEffectObject_C
// Size: 0x4e0 (Inherited: 0x4b0)
struct ABombSiteEffectObject_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UBillboardComponent* Billboard; // 0x4b8(0x08)
	double EffectDelay; // 0x4c0(0x08)
	struct FName ValidTagA; // 0x4c8(0x0c)
	struct FName ValidTagB; // 0x4d4(0x0c)

	void CheckValidTag(); // Function BombSiteEffectObject.BombSiteEffectObject_C.CheckValidTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CleanupEffect(); // Function BombSiteEffectObject.BombSiteEffectObject_C.CleanupEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateEffect(); // Function BombSiteEffectObject.BombSiteEffectObject_C.CreateEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BombSiteEffectObject.BombSiteEffectObject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BombSiteEffectObject(int32_t EntryPoint); // Function BombSiteEffectObject.BombSiteEffectObject_C.ExecuteUbergraph_BombSiteEffectObject // (Final|UbergraphFunction) // @ game+0x1af5410
};

