// BlueprintGeneratedClass PoolingGameObject.PoolingGameObject_C
// Size: 0x4d8 (Inherited: 0x4b0)
struct APoolingGameObject_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UReplicationSleepComponent* ReplicationSleep; // 0x4b8(0x08)
	bool IsEnabled; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct FMulticastInlineDelegate OnFinished; // 0x4c8(0x10)

	void ToggleVisuals(bool Enabled); // Function PoolingGameObject.PoolingGameObject_C.ToggleVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRep_IsEnabled(); // Function PoolingGameObject.PoolingGameObject_C.OnRep_IsEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEnabled(bool IsEnabled?); // Function PoolingGameObject.PoolingGameObject_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Multicast Enable(struct FTransform Transform, struct ABasePlayerCharacter_C* SpawningBasePlayerCharacter, struct AOwnerExclusivePlayerInfo* SpawningOwnerExclusivePlayerInfo); // Function PoolingGameObject.PoolingGameObject_C.Multicast Enable // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Multicast Disable(); // Function PoolingGameObject.PoolingGameObject_C.Multicast Disable // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PoolingGameObject(int32_t EntryPoint); // Function PoolingGameObject.PoolingGameObject_C.ExecuteUbergraph_PoolingGameObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnFinished__DelegateSignature(struct APoolingGameObject_C* GameObject); // Function PoolingGameObject.PoolingGameObject_C.OnFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

