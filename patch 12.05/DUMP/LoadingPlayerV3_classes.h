// WidgetBlueprintGeneratedClass LoadingPlayerV3.LoadingPlayerV3_C
// Size: 0x3a5 (Inherited: 0x318)
struct ULoadingPlayerV3_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidePlayerIdentityV3_C* WidePlayerIdentityV3; // 0x320(0x08)
	struct FLoadingScreenPlayer Player; // 0x328(0x48)
	bool Ally; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	struct FLinearColor AllyBackgroundColor; // 0x374(0x10)
	struct FLinearColor EnemyBackgroundColor; // 0x384(0x10)
	struct FLinearColor MeBackgroundColor; // 0x394(0x10)
	bool IsRankedMatch; // 0x3a4(0x01)

	void Construct(); // Function LoadingPlayerV3.LoadingPlayerV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function LoadingPlayerV3.LoadingPlayerV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_LoadingPlayerV3(int32_t EntryPoint); // Function LoadingPlayerV3.LoadingPlayerV3_C.ExecuteUbergraph_LoadingPlayerV3 // (Final|UbergraphFunction) // @ game+0x1af5410
};

