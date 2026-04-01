// WidgetBlueprintGeneratedClass PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C
// Size: 0x331 (Inherited: 0x318)
struct UPartyAccessibilitySettings_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPartyModel* Model; // 0x320(0x08)
	struct UPartyViewController* ViewController; // 0x328(0x08)
	bool Initialized; // 0x330(0x01)

	void ToggleAccessibility(); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.ToggleAccessibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePremiumContractXPIcon(enum class EPartyViewState PartyState); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.UpdatePremiumContractXPIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSocialXPIndicator(enum class ESocialXPState SocialXPState); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.UpdateSocialXPIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSlider(bool ShouldOpen); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.UpdateSlider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPartyModel* Model, struct UPartyViewController* ViewController); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Initialized(); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.On Initialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnerChanged(bool NewValue); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.OnIsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAccessibilityChanged(enum class EAresPartyAccessibility PartyAccessibility); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.OnAccessibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SocialXPStateChanged(enum class ESocialXPState SocialXPState); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.SocialXPStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateChanged(enum class EPartyViewState PartyState); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PartyAccessibilitySettings_Base(int32_t EntryPoint); // Function PartyAccessibilitySettings_Base.PartyAccessibilitySettings_Base_C.ExecuteUbergraph_PartyAccessibilitySettings_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

