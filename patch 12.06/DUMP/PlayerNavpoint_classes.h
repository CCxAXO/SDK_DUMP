// WidgetBlueprintGeneratedClass PlayerNavpoint.PlayerNavpoint_C
// Size: 0x420 (Inherited: 0x328)
struct UPlayerNavpoint_C : UNavPointWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* talking Animation; // 0x330(0x08)
	struct UWidgetAnimation* takingDamageAnimation; // 0x338(0x08)
	struct UImage* allyIndicatorImage; // 0x340(0x08)
	struct UBaseVoiceActivationWidget_C* BaseVoiceActivationWidget; // 0x348(0x08)
	struct UImage* healthBarFill; // 0x350(0x08)
	struct UImage* Image_3; // 0x358(0x08)
	struct UImage* lowHealthIndicator; // 0x360(0x08)
	struct UImage* voiceActivityImage; // 0x368(0x08)
	struct UMaterial* Base Fill Material; // 0x370(0x08)
	struct UMaterialInstanceDynamic* healthBarMaterial; // 0x378(0x08)
	struct TMap<struct FString, struct UTexture*> roleIconsMap; // 0x380(0x50)
	struct TMap<struct FString, struct UTexture*> roleIconsMapNEW; // 0x3d0(0x50)

	void Construct(); // Function PlayerNavpoint.PlayerNavpoint_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void GotRoleData(struct UCharacterHandle* CharacterHandle); // Function PlayerNavpoint.PlayerNavpoint_C.GotRoleData // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RoundPlayStarting(int32_t InRoundNumberBeginning); // Function PlayerNavpoint.PlayerNavpoint_C.RoundPlayStarting // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NewRound(int32_t RoundNumberBeginning); // Function PlayerNavpoint.PlayerNavpoint_C.NewRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerNavpoint(int32_t EntryPoint); // Function PlayerNavpoint.PlayerNavpoint_C.ExecuteUbergraph_PlayerNavpoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

