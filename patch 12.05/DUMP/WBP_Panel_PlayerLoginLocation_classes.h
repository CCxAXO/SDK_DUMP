// WidgetBlueprintGeneratedClass WBP_Panel_PlayerLoginLocation.WBP_Panel_PlayerLoginLocation_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerLoginLocation_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* Text_Location; // 0x3e8(0x08)
	struct FString PreviewLocation; // 0x3f0(0x10)
	struct UCommonTextStyle* TextStyle; // 0x400(0x08)
	struct FString PlayerSubject; // 0x408(0x10)
	bool bCollapseIfEmpty; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UPlayerLoginLocationViewModel* PlayerLoginLocationViewModel; // 0x420(0x08)

	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_PlayerLoginLocation.WBP_Panel_PlayerLoginLocation_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToViewModel(bool bDoBind); // Function WBP_Panel_PlayerLoginLocation.WBP_Panel_PlayerLoginLocation_C.BindToViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerLoginLocation.WBP_Panel_PlayerLoginLocation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerLoginLocation.WBP_Panel_PlayerLoginLocation_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandlePlayerLoginLocationChanged(struct FString PlayerLoginLocation); // Function WBP_Panel_PlayerLoginLocation.WBP_Panel_PlayerLoginLocation_C.HandlePlayerLoginLocationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_PlayerLoginLocation.WBP_Panel_PlayerLoginLocation_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_PlayerLoginLocation.WBP_Panel_PlayerLoginLocation_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PlayerLoginLocation(int32_t EntryPoint); // Function WBP_Panel_PlayerLoginLocation.WBP_Panel_PlayerLoginLocation_C.ExecuteUbergraph_WBP_Panel_PlayerLoginLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

