// WidgetBlueprintGeneratedClass WBP_ShieldIcon.WBP_ShieldIcon_C
// Size: 0x1b58 (Inherited: 0x1ae0)
struct UWBP_ShieldIcon_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Half_fixed; // 0x1ae8(0x08)
	struct UWidgetAnimation* Full; // 0x1af0(0x08)
	struct UWidgetAnimation* Replenish; // 0x1af8(0x08)
	struct UImage* Image_Shield; // 0x1b00(0x08)
	struct UImage* ShieldCrack; // 0x1b08(0x08)
	struct UImage* ShieldCrack_2; // 0x1b10(0x08)
	struct UImage* ShieldCrack_3; // 0x1b18(0x08)
	struct UDerankViewModel* DerankVM; // 0x1b20(0x08)
	bool IsDerankProtectedTier; // 0x1b28(0x01)
	bool WasDerankProtected; // 0x1b29(0x01)
	bool WasDerankReplenished; // 0x1b2a(0x01)
	enum class EDerankProtectionStatus DerankProtectionStatus; // 0x1b2b(0x01)
	bool EnableAnimation; // 0x1b2c(0x01)
	char pad_1B2D[0x3]; // 0x1b2d(0x03)
	struct FString Subject; // 0x1b30(0x10)
	struct FText ShieldToolTipText; // 0x1b40(0x18)

	void SetShieldToolTipText(struct FText ToolTipText); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.SetShieldToolTipText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleDerankGamesProtectedRemainingChanged(bool WasDerankProtected, int64_t DerankGamesProtectedRemaining); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.HandleDerankGamesProtectedRemainingChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayAnimations(); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.PlayAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDerankProtectionStatus(enum class EDerankProtectionStatus DerankProtectionStatus); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.SetDerankProtectionStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsDerankProtectedTier(bool IsDerankProtectedTier); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.SetIsDerankProtectedTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEnableAnimation(bool EnableAnimation); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.SetEnableAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSubject(struct FString Subject); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.SetSubject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleDerankProtectionStatusChanged(bool WasDerankProtected, enum class EDerankProtectionStatus& DerankProtectionStatus); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.HandleDerankProtectionStatusChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleWasDerankProtectionReplenished(bool WasDerankProtectionReplenished); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.HandleWasDerankProtectionReplenished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsDerankProtectedTierChanged(bool IsDerankProtectedTier); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.HandleIsDerankProtectedTierChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindDerankEvents(bool Bind); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.BindDerankEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDerankViewModel(struct UDerankViewModel* DerankVM); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.SetDerankViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModel(); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_ShieldIcon(int32_t EntryPoint); // Function WBP_ShieldIcon.WBP_ShieldIcon_C.ExecuteUbergraph_WBP_ShieldIcon // (Final|UbergraphFunction) // @ game+0x1af5410
};

