// WidgetBlueprintGeneratedClass PlayerList.PlayerList_C
// Size: 0x340 (Inherited: 0x318)
struct UPlayerList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x320(0x08)
	enum class EPregameTeamID Team; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	int32_t MaxPlayers; // 0x32c(0x04)
	struct TArray<struct UPlayer_C*> PlayerWidgets; // 0x330(0x10)

	void Init(struct UPregameTeamModel* Team); // Function PlayerList.PlayerList_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreatePlayerWidgets(); // Function PlayerList.PlayerList_C.CreatePlayerWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PlayerList.PlayerList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PlayerList.PlayerList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerList(int32_t EntryPoint); // Function PlayerList.PlayerList_C.ExecuteUbergraph_PlayerList // (Final|UbergraphFunction) // @ game+0x1b42740
};

