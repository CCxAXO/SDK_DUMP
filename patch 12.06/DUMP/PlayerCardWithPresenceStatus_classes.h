// WidgetBlueprintGeneratedClass PlayerCardWithPresenceStatus.PlayerCardWithPresenceStatus_C
// Size: 0x378 (Inherited: 0x320)
struct UPlayerCardWithPresenceStatus_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetSwitcher* AvatarSwitcher; // 0x328(0x08)
	struct UImage* OfflineAvatar; // 0x330(0x08)
	struct UImage* OtherGameAvatar; // 0x338(0x08)
	struct UPlayerCard_C* PlayerCard; // 0x340(0x08)
	struct USizeBox* SizeBox_149; // 0x348(0x08)
	struct UImage* TPAvatar; // 0x350(0x08)
	double WidthOverride; // 0x358(0x08)
	double HeightOverride; // 0x360(0x08)
	bool TPAvatarIsExpected; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct UPlatformPlayer* PlatformPlayer; // 0x370(0x08)

	void InitWithSubject(struct FString Subject); // Function PlayerCardWithPresenceStatus.PlayerCardWithPresenceStatus_C.InitWithSubject // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithPlatformPlayer(struct UPlatformPlayer* Player); // Function PlayerCardWithPresenceStatus.PlayerCardWithPresenceStatus_C.InitWithPlatformPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCard(struct UPlatformPlayer* PlatformPlayer); // Function PlayerCardWithPresenceStatus.PlayerCardWithPresenceStatus_C.UpdateCard // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PlayerCardWithPresenceStatus.PlayerCardWithPresenceStatus_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function PlayerCardWithPresenceStatus.PlayerCardWithPresenceStatus_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function PlayerCardWithPresenceStatus.PlayerCardWithPresenceStatus_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerCardWithPresenceStatus(int32_t EntryPoint); // Function PlayerCardWithPresenceStatus.PlayerCardWithPresenceStatus_C.ExecuteUbergraph_PlayerCardWithPresenceStatus // (Final|UbergraphFunction) // @ game+0x1b42740
};

