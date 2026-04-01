// WidgetBlueprintGeneratedClass OrbUsableHUDComponent_2D.OrbUsableHUDComponent_2D_C
// Size: 0x3f0 (Inherited: 0x358)
struct UOrbUsableHUDComponent_2D_C : UBaseUsableHUDComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x360(0x08)
	struct UAnnotatedProgressBar_C* AnnotatedProgressBar; // 0x368(0x08)
	struct UImage* BG; // 0x370(0x08)
	struct UImage* Image; // 0x378(0x08)
	struct UImage* Image_73; // 0x380(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x388(0x08)
	struct UInvalidationBox* InvalidationBox_8; // 0x390(0x08)
	struct UInvalidationBox* InvalidationBox_9; // 0x398(0x08)
	struct UInvalidationBox* InvalidationBox_10; // 0x3a0(0x08)
	struct UOverlay* Prompt; // 0x3a8(0x08)
	struct UTextBlock* Text1; // 0x3b0(0x08)
	struct UTextBlock* Text2; // 0x3b8(0x08)
	struct FTimerHandle HoldTimer; // 0x3c0(0x08)
	bool isHeld; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FText TouchUseText; // 0x3d0(0x18)
	struct UGamepadInputIconBase* InteractGamepadGlyph; // 0x3e8(0x08)

	void HandleCurrentlyInUseUpdate(bool CurrentlyInUse); // Function OrbUsableHUDComponent_2D.OrbUsableHUDComponent_2D_C.HandleCurrentlyInUseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUsingTimeUpdate(double CurrentUsingTime, double MaxUsingTime); // Function OrbUsableHUDComponent_2D.OrbUsableHUDComponent_2D_C.HandleUsingTimeUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function OrbUsableHUDComponent_2D.OrbUsableHUDComponent_2D_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EnableToggleableChangeEvent(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function OrbUsableHUDComponent_2D.OrbUsableHUDComponent_2D_C.EnableToggleableChangeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function OrbUsableHUDComponent_2D.OrbUsableHUDComponent_2D_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function OrbUsableHUDComponent_2D.OrbUsableHUDComponent_2D_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_OrbUsableHUDComponent_2D(int32_t EntryPoint); // Function OrbUsableHUDComponent_2D.OrbUsableHUDComponent_2D_C.ExecuteUbergraph_OrbUsableHUDComponent_2D // (Final|UbergraphFunction) // @ game+0x1b42740
};

