// WidgetBlueprintGeneratedClass WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C
// Size: 0x348 (Inherited: 0x318)
struct UWeaponDetailsSkinLevels_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* vertLevelContainer; // 0x320(0x08)
	struct UEquippableSkinHandle* CurrentSkin; // 0x328(0x08)
	bool IncludeLevel1WithOtherLevels; // 0x330(0x01)
	bool IsEquipAnyLevelEnabled; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct FMulticastInlineDelegate OnLevelClicked; // 0x338(0x10)

	void GetSkinLevelHandle(struct UEquippableSkinHandle* Skin, int32_t LevelNumber, struct UEquippableSkinLevelHandle*& Level); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.GetSkinLevelHandle // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetEquippedOrHighestUnlockedLevelForSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinLevelHandle*& Skin Level); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.GetEquippedOrHighestUnlockedLevelForSkin // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void RefreshAllLevels(); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.RefreshAllLevels // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWeaponDetailsSkinLevel1(struct UWeaponDetailsSkinLevel_C* Level, struct UWeaponDetailsSkinLevel_C*& InitializedLevel); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.InitWeaponDetailsSkinLevel1 // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateUnlockedBackgrounds(bool Unlocked); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.UpdateUnlockedBackgrounds // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsLevelSelected(bool& LevelSelected); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.IsLevelSelected // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ClearSelection(); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.ClearSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateSkinLevel1(); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.CreateSkinLevel1 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateAllProgressionLevels(); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.CreateAllProgressionLevels // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSkin(struct UEquippableSkinHandle* Skin); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.SetSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsEquipAnyLevelEnabled(bool Enabled); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.SetIsEquipAnyLevelEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DispatchHighestEquippedSkinLevel(int32_t Level); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.DispatchHighestEquippedSkinLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddLevel(struct UWeaponDetailsSkinLevel_C* Level); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.AddLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLevelSelected(struct UEquippableSkinLevelHandle* LevelHandle, struct UEquippableSkinChromaHandle* ChromaHandle); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.OnLevelSelected // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WeaponDetailsSkinLevels(int32_t EntryPoint); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.ExecuteUbergraph_WeaponDetailsSkinLevels // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnLevelClicked__DelegateSignature(struct UEquippableSkinLevelHandle* LevelHandle, struct UEquippableSkinChromaHandle* ChromaHandle); // Function WeaponDetailsSkinLevels.WeaponDetailsSkinLevels_C.OnLevelClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

