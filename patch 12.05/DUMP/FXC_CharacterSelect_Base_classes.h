// BlueprintGeneratedClass FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C
// Size: 0x708 (Inherited: 0x620)
struct AFXC_CharacterSelect_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UDirectionalLightComponent* CS_DirectionalLight; // 0x628(0x08)
	struct UCS_FakePointLight_C* CS_FakePointLight2; // 0x630(0x08)
	struct UCS_FakePointLight_C* CS_FakePointLight1; // 0x638(0x08)
	struct UCameraComponent* Camera; // 0x640(0x08)
	struct USkeletalMeshComponent* CameraRig; // 0x648(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x650(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x658(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x660(0x10)
	struct UAnimMontage* MontageToPlay; // 0x670(0x08)
	struct UAnimMontage* CameraMontageToPlay; // 0x678(0x08)
	bool bDeferVisibility; // 0x680(0x01)
	char pad_681[0x7]; // 0x681(0x07)
	struct UCS_FakePointLight_C* CurrentPointLight1; // 0x688(0x08)
	struct UCS_FakePointLight_C* CurrentPointLight2; // 0x690(0x08)
	struct TArray<struct USceneComponent*> Children_1; // 0x698(0x10)
	struct TMap<struct UMaterialInstanceDynamic*, struct FRotator> MaterialMap; // 0x6a8(0x50)
	struct TArray<struct UParticleSystem*> PreloadParticleSystems; // 0x6f8(0x10)

	void SetPointLights(struct UCS_FakePointLight_C* PointLight1, struct UCS_FakePointLight_C* PontLight2); // Function FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C.SetPointLights // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Point Lights(struct UMaterialInstanceDynamic* InputPin); // Function FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C.Update Point Lights // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UserConstructionScript(); // Function FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void EffectDataUpdated(); // Function FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C.EffectDataUpdated // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void CharacterLockedIn(); // Function FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C.CharacterLockedIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_CharacterSelect_Base(int32_t EntryPoint); // Function FXC_CharacterSelect_Base.FXC_CharacterSelect_Base_C.ExecuteUbergraph_FXC_CharacterSelect_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

