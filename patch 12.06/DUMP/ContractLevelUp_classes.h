// WidgetBlueprintGeneratedClass ContractLevelUp.ContractLevelUp_C
// Size: 0x360 (Inherited: 0x318)
struct UContractLevelUp_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* CurrentTier; // 0x320(0x08)
	struct UProgressBar* ProgressBar_1; // 0x328(0x08)
	int32_t LevelStart; // 0x330(0x04)
	int32_t LevelEnd; // 0x334(0x04)
	struct FDateTime AnimatingSince; // 0x338(0x08)
	bool Animating; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	int32_t SingleLevelAnimationDurationMS; // 0x344(0x04)
	struct FDateTime AnimatingUntil; // 0x348(0x08)
	int32_t VisibleLevel; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	double MaxAnimationDurationSeconds; // 0x358(0x08)

	void GetAnimationLerpFactor(struct FDateTime Now, double& LerpFactor); // Function ContractLevelUp.ContractLevelUp_C.GetAnimationLerpFactor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetLevel(int32_t Level); // Function ContractLevelUp.ContractLevelUp_C.SetLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TickAnimation(); // Function ContractLevelUp.ContractLevelUp_C.TickAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLevelInternal(double Level); // Function ContractLevelUp.ContractLevelUp_C.SetLevelInternal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AnimateProgress(int32_t FromLevel, int32_t ToLevel, struct FTimespan& Duration); // Function ContractLevelUp.ContractLevelUp_C.AnimateProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ContractLevelUp.ContractLevelUp_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ContractLevelUp.ContractLevelUp_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ContractLevelUp(int32_t EntryPoint); // Function ContractLevelUp.ContractLevelUp_C.ExecuteUbergraph_ContractLevelUp // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

