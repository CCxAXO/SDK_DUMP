// WidgetBlueprintGeneratedClass WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C
// Size: 0x388 (Inherited: 0x363)
struct UWBP_VoiceSpeakerButton_Base_Desktop_C : UWBP_VoiceSpeakerButton_Base_C {
	char pad_363[0x5]; // 0x363(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UAkAudioEvent* OpenModalSound; // 0x370(0x08)
	struct UGenericTextTooltip_C* TooltipInstance; // 0x378(0x08)
	struct UMenuAnchor* TooltipMenuAnchor; // 0x380(0x08)

	void UpdateDetailText(); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.UpdateDetailText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenVoiceSettings(); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.OpenVoiceSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize Tooltip Menu Anchor(struct UMenuAnchor* InMenuAnchor); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.Initialize Tooltip Menu Anchor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeTooltip(struct UGenericTextTooltip_C*& TooltipInstance); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.MakeTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetRestrictionTooltipText(struct FText& Return Value); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.GetRestrictionTooltipText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCurrentTooltipText(struct FText& Return Value); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.GetCurrentTooltipText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool Get Tooltip Should be Active(); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.Get Tooltip Should be Active // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateTooltipText(); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.UpdateTooltipText // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ValidateTooltip(); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.ValidateTooltip // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_VoiceSpeakerButton_Base_Desktop(int32_t EntryPoint); // Function WBP_VoiceSpeakerButton_Base_Desktop.WBP_VoiceSpeakerButton_Base_Desktop_C.ExecuteUbergraph_WBP_VoiceSpeakerButton_Base_Desktop // (Final|UbergraphFunction) // @ game+0x1b42740
};

