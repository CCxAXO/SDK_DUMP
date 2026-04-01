// WidgetBlueprintGeneratedClass CustomPartyList.CustomPartyList_C
// Size: 0x340 (Inherited: 0x318)
struct UCustomPartyList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UCustomPartyListBombMode_C* CustomPartyListBombMode; // 0x328(0x08)
	struct UImage* Image_266; // 0x330(0x08)
	struct USpectatePartyMemberListV2_C* SpectatePartyMemberListV2; // 0x338(0x08)

	void Init(struct UCustomGameUIFacade_C* Facade); // Function CustomPartyList.CustomPartyList_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CustomPartyList.CustomPartyList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CustomPartyList(int32_t EntryPoint); // Function CustomPartyList.CustomPartyList_C.ExecuteUbergraph_CustomPartyList // (Final|UbergraphFunction) // @ game+0x1af5410
};

