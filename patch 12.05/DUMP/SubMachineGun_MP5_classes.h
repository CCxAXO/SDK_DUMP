// BlueprintGeneratedClass SubMachineGun_MP5.SubMachineGun_MP5_C
// Size: 0x15e8 (Inherited: 0x15ca)
struct ASubMachineGun_MP5_C : AGun_Zoomable_C {
	char pad_15CA[0x6]; // 0x15ca(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15d0(0x08)
	struct UComp_Gun_ZoomFiringRateModifier_C* Comp_Gun_ZoomFiringRateModifier; // 0x15d8(0x08)
	struct UAnimationAsset* NewVar_1_1; // 0x15e0(0x08)

	void OnNotifyEnd_FC0839EA451629B601DFFB8B7B4E5CAF(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnNotifyEnd_FC0839EA451629B601DFFB8B7B4E5CAF // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNotifyBegin_FC0839EA451629B601DFFB8B7B4E5CAF(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnNotifyBegin_FC0839EA451629B601DFFB8B7B4E5CAF // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInterrupted_FC0839EA451629B601DFFB8B7B4E5CAF(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnInterrupted_FC0839EA451629B601DFFB8B7B4E5CAF // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBlendOut_FC0839EA451629B601DFFB8B7B4E5CAF(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnBlendOut_FC0839EA451629B601DFFB8B7B4E5CAF // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCompleted_FC0839EA451629B601DFFB8B7B4E5CAF(struct FName NotifyName); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.OnCompleted_FC0839EA451629B601DFFB8B7B4E5CAF // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ClientItemUnEquipped(); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ClientItemEquipped(); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SubMachineGun_MP5(int32_t EntryPoint); // Function SubMachineGun_MP5.SubMachineGun_MP5_C.ExecuteUbergraph_SubMachineGun_MP5 // (Final|UbergraphFunction) // @ game+0x1af5410
};

