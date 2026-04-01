// WidgetBlueprintGeneratedClass PlayerCard.PlayerCard_C
// Size: 0x352 (Inherited: 0x320)
struct UPlayerCard_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UPlayerCardFromAsset_C* PlayerCardFromAsset; // 0x328(0x08)
	enum class PlayerCardFormat Format; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FString Subject; // 0x338(0x10)
	struct UPlatformPlayer* PlatformPlayer; // 0x348(0x08)
	bool Initialized; // 0x350(0x01)
	bool ShowPlayerTitle; // 0x351(0x01)

	void UpdateCard(struct UPlatformPlayer* PlatformPlayer); // Function PlayerCard.PlayerCard_C.UpdateCard // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSubject(struct FString NewSubject); // Function PlayerCard.PlayerCard_C.SetSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function PlayerCard.PlayerCard_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function PlayerCard.PlayerCard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerCard(int32_t EntryPoint); // Function PlayerCard.PlayerCard_C.ExecuteUbergraph_PlayerCard // (Final|UbergraphFunction) // @ game+0x1af5410
};

