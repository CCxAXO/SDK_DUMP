// WidgetBlueprintGeneratedClass WBP_ShieldIcon.WBP_ShieldIcon_C
// Size: 0x1b60 (Inherited: 0x1ae0)
struct UWBP_ShieldIcon_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UDerankViewModel* DerankViewModel; // 0x1ae8(0x08)
	struct UWidgetAnimation* PartialBreak; // 0x1af0(0x08)
	struct UWidgetAnimation* FullBreak; // 0x1af8(0x08)
	struct UWidgetAnimation* Replenish; // 0x1b00(0x08)
	struct UImage* ImageShield; // 0x1b08(0x08)
	struct UImage* ShieldCrack; // 0x1b10(0x08)
	struct UImage* ShieldCrack_2; // 0x1b18(0x08)
	struct UImage* ShieldCrack_3; // 0x1b20(0x08)
	bool IsDerankProtectedTier; // 0x1b28(0x01)
	bool WasDerankProtected; // 0x1b29(0x01)
	bool WasDerankReplenished; // 0x1b2a(0x01)
	enum class EDerankProtectionStatus DerankProtectedStatus; // 0x1b2b(0x01)
	bool EnableAnimation; // 0x1b2c(0x01)
	char pad_1B2D[0x3]; // 0x1b2d(0x03)
	struct FString Subject; // 0x1b30(0x10)
	struct FText ShieldToolTipText; // 0x1b40(0x18)
	struct UMaterialInstanceDynamic* Mid; // 0x1b58(0x08)

	enum class ESlateVisibility __dc767ef6-4f22-0294-3dc1-ba8d2300aad3_SourceToDest(); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.__dc767ef6-4f22-0294-3dc1-ba8d2300aad3_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void HandleIsDerankProtectedTier(bool IsDerankProtectedTier); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.HandleIsDerankProtectedTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleHasValidDataChanged(bool HasValidData); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.HandleHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleDerankGamesProtectedRemainingChanged(int32_t DerankGamesProtectedRemaining); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.HandleDerankGamesProtectedRemainingChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayAnimations(); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.PlayAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitMaterial(); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.InitMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HasShieldStateChanged(bool& ShowShield); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.HasShieldStateChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetSubject(struct FString Subject); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.SetSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShieldStatus(enum class EDerankProtectionStatus ShieldStatus); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.SetShieldStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEnableAnimation(bool EnableAnimation); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.SetEnableAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_ShieldIcon(int32_t EntryPoint); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.ExecuteUbergraph_WBP_ShieldIcon // (Final|UbergraphFunction) // @ game+0x1b42740
};

