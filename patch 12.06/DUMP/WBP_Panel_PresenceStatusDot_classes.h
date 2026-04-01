// WidgetBlueprintGeneratedClass WBP_Panel_PresenceStatusDot.WBP_Panel_PresenceStatusDot_C
// Size: 0x470 (Inherited: 0x410)
struct UWBP_Panel_PresenceStatusDot_C : UWBP_Panel_PresenceObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UImage* Img_PresenceColor; // 0x418(0x08)
	struct UMaterialInstanceDynamic* PresenceDotMaterial; // 0x420(0x08)
	bool bEnableIconMask; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UTexture* OnlineIconMask; // 0x430(0x08)
	struct UTexture* BusyIconMask; // 0x438(0x08)
	struct UTexture* AwayIconMask; // 0x440(0x08)
	struct UTexture* OfflineIconMask; // 0x448(0x08)
	struct UTexture* ErrorIconMask; // 0x450(0x08)
	struct FName MaskTextureParameterName; // 0x458(0x0c)
	struct FName ColorParameterName; // 0x464(0x0c)

	void Apply Icon Mask(struct FAresSocialPresenceState PresenceState); // Function WBP_Panel_PresenceStatusDot.WBP_Panel_PresenceStatusDot_C.Apply Icon Mask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTintColor(struct FSlateColor Color); // Function WBP_Panel_PresenceStatusDot.WBP_Panel_PresenceStatusDot_C.SetTintColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePresenceStateChanged(); // Function WBP_Panel_PresenceStatusDot.WBP_Panel_PresenceStatusDot_C.HandlePresenceStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyDesignTimePreview(); // Function WBP_Panel_PresenceStatusDot.WBP_Panel_PresenceStatusDot_C.ApplyDesignTimePreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PresenceStatusDot.WBP_Panel_PresenceStatusDot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PresenceStatusDot(int32_t EntryPoint); // Function WBP_Panel_PresenceStatusDot.WBP_Panel_PresenceStatusDot_C.ExecuteUbergraph_WBP_Panel_PresenceStatusDot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

