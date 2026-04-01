// BlueprintGeneratedClass Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C
// Size: 0x280 (Inherited: 0xd8)
struct UComp_GameState_TrackedDebuffTags_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TMap<struct FGameplayTag, struct FStruct_GameplayTagAndHUD_Info> TrackedTagsAndHUDInfo; // 0xe0(0x50)
	struct TMap<struct FGameplayTag, struct AEffectContainer*> VisualsTrackedTagsAndFXC; // 0x130(0x50)
	struct TMap<struct FGameplayTag, struct FName> VisualsTrackedTagsAndParameterName; // 0x180(0x50)
	struct TSet<struct FGameplayTag> AllTrackedTags; // 0x1d0(0x50)
	struct TSet<struct APawn*> CharacterClassesLoaded; // 0x220(0x50)
	struct FMulticastInlineDelegate HasBegunPlay; // 0x270(0x10)

	void AddTrackedBuffParameterNames(struct TMap<struct FGameplayTag, struct FName>& TargetMap); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.AddTrackedBuffParameterNames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddTrackedBuffVisuals(struct TMap<struct FGameplayTag, struct AEffectContainer*>& TargetMap); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.AddTrackedBuffVisuals // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddTrackedHUDTags(struct TArray<struct FStruct_GameplayTagAndHUD_Info>& TagsAndHUDInfo); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.AddTrackedHUDTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddExtraTagsFromGameState(); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.AddExtraTagsFromGameState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetHUDInfoForTag(struct FGameplayTag Tag, bool BuffIsTail, struct FStruct_GameplayTagAndHUD_Info& HudInfo, bool& bTagFound); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.GetHUDInfoForTag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsTagTracked(struct FGameplayTag GameplayTag, bool& bIsTracked); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.IsTagTracked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void AddCharacterSpecificBuffVFX(struct AActor* Player); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.AddCharacterSpecificBuffVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddCharacterSpecificBuffHUD(struct AActor* Player); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.AddCharacterSpecificBuffHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleCharacterSpawned(struct AShooterPlayerState* PlayerState, struct APawn* Character); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.HandleCharacterSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_GameState_TrackedDebuffTags(int32_t EntryPoint); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.ExecuteUbergraph_Comp_GameState_TrackedDebuffTags // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void HasBegunPlay__DelegateSignature(); // Function Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C.HasBegunPlay__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

