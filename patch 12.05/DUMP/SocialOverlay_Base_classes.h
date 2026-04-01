// WidgetBlueprintGeneratedClass SocialOverlay_Base.SocialOverlay_Base_C
// Size: 0x4d0 (Inherited: 0x4a8)
struct USocialOverlay_Base_C : UAresCommonActivatableWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x4b0(0x08)
	struct TScriptInterface<ISocialPanelInterface_C> SocialPanel; // 0x4b8(0x10)
	struct UAresSocialExperienceViewModel* SocialExperienceVM; // 0x4c8(0x08)

	void Initialize(struct TScriptInterface<ISocialPanelInterface_C> SocialPanel); // Function SocialOverlay_Base.SocialOverlay_Base_C.Initialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnActivated(); // Function SocialOverlay_Base.SocialOverlay_Base_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnDeactivated(); // Function SocialOverlay_Base.SocialOverlay_Base_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnLatestTransitionChanged(struct FSocialExperienceTransition InTransition); // Function SocialOverlay_Base.SocialOverlay_Base_C.OnLatestTransitionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SocialOverlay_Base(int32_t EntryPoint); // Function SocialOverlay_Base.SocialOverlay_Base_C.ExecuteUbergraph_SocialOverlay_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

