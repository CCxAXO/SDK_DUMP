// Class RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore
// Size: 0x5c0 (Inherited: 0x30)
struct URGIFriendsRiotGamesApiDataStore : UObject {
	char pad_30[0x318]; // 0x30(0x318)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x348(0x50)
	char pad_398[0x38]; // 0x398(0x38)
	struct FRGIFriendsPlayers FriendList; // 0x3d0(0x50)
	char pad_420[0x28]; // 0x420(0x28)
	struct FRGIFriendsPlayers BlockedList; // 0x448(0x50)
	char pad_498[0x28]; // 0x498(0x28)
	struct FRGIFriendsConnectionState ConnectionState; // 0x4c0(0x02)
	char pad_4C2[0x6]; // 0x4c2(0x06)
	struct URGIPermissionsLoggedPlayerPermissionsViewModel* LoggedPlayerPermissionsViewModel; // 0x4c8(0x08)
	char pad_4D0[0x78]; // 0x4d0(0x78)
	struct URGIFriendsPlayer* LoggedPlayer; // 0x548(0x08)
	struct FRGIFriendsPresenceLocalizedContent LoggedPlayerPresenceLocalizedContent; // 0x550(0x40)
	struct UObject* CustomPrivateDataObject; // 0x590(0x08)
	char pad_598[0x28]; // 0x598(0x28)

	void SubscribeToSocialPluginEvents(int32_t Code, struct FString Message); // Function RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore.SubscribeToSocialPluginEvents // (Final|Native|Public) // @ game+0x5385150
	void SendPresenceRepeatingFunction(); // Function RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore.SendPresenceRepeatingFunction // (Final|Native|Protected) // @ game+0x5385000
	void OnCustomPrivateDataUpdated(struct FString SerializedData); // Function RGIFriendsRiotGamesApi.RGIFriendsRiotGamesApiDataStore.OnCustomPrivateDataUpdated // (Final|Native|Public) // @ game+0x5385020
};

