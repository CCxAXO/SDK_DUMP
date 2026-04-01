// WidgetBlueprintGeneratedClass Player.Player_C
// Size: 0x398 (Inherited: 0x318)
struct UPlayer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* LockIn; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UImage* GradientOverlay; // 0x330(0x08)
	struct UImage* NameBg; // 0x338(0x08)
	struct UPlayerNameWidget_C* PlayerNameWidget; // 0x340(0x08)
	struct UImage* Portrait; // 0x348(0x08)
	struct UOverlay* Role; // 0x350(0x08)
	struct UImage* RoleBG; // 0x358(0x08)
	struct UImage* RoleIcon; // 0x360(0x08)
	struct UCharacterDataAsset* Character; // 0x368(0x08)
	enum class EPregameTeamID Team; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UPregamePlayerModel* ViewModel; // 0x378(0x08)
	struct UMaterialInstanceDynamic* PortraitMaterial; // 0x380(0x08)
	struct UAkAudioEvent* AUD_LockIn; // 0x388(0x08)
	struct UAkAudioEvent* AUD_Select; // 0x390(0x08)

	void UpdateState(); // Function Player.Player_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLockedIn(bool LockedIn, bool Animate); // Function Player.Player_C.UpdateLockedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterLoaded(struct UCharacterHandle* Handle); // Function Player.Player_C.OnCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCharacter(struct UCharacterDataAsset* Character); // Function Player.Player_C.UpdateCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPregamePlayerModel* PlayerViewModel); // Function Player.Player_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyTeamRole(); // Function Player.Player_C.ApplyTeamRole // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Player.Player_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleLockedInChanged(bool NewValue); // Function Player.Player_C.HandleLockedInChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Player(int32_t EntryPoint); // Function Player.Player_C.ExecuteUbergraph_Player // (Final|UbergraphFunction) // @ game+0x1b42740
};

