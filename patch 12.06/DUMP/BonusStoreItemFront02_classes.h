// WidgetBlueprintGeneratedClass BonusStoreItemFront02.BonusStoreItemFront02_C
// Size: 0x3f8 (Inherited: 0x318)
struct UBonusStoreItemFront02_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Reveal; // 0x320(0x08)
	struct UWidgetAnimation* Idle; // 0x328(0x08)
	struct UWidgetAnimation* Intro; // 0x330(0x08)
	struct UImage* CenterCircle; // 0x338(0x08)
	struct UImage* CenterDiamond; // 0x340(0x08)
	struct UImage* CenterDiamondAdd; // 0x348(0x08)
	struct UImage* CenterDiamondSmall; // 0x350(0x08)
	struct UImage* DecoBot; // 0x358(0x08)
	struct UImage* DecoLineL; // 0x360(0x08)
	struct UImage* DecoLineLAdd; // 0x368(0x08)
	struct UImage* DecoLineR; // 0x370(0x08)
	struct UImage* DecoLineRAdd; // 0x378(0x08)
	struct UImage* LBarrow; // 0x380(0x08)
	struct UImage* LBotBar; // 0x388(0x08)
	struct UImage* LCenterLine; // 0x390(0x08)
	struct UImage* LineBot02; // 0x398(0x08)
	struct UImage* LineBotTip02; // 0x3a0(0x08)
	struct UImage* LTarrow; // 0x3a8(0x08)
	struct UImage* LTopBar; // 0x3b0(0x08)
	struct UImage* Pattern; // 0x3b8(0x08)
	struct UImage* RBarrow; // 0x3c0(0x08)
	struct UImage* RBotBar; // 0x3c8(0x08)
	struct UImage* RCenterLine; // 0x3d0(0x08)
	struct UImage* RTarrow; // 0x3d8(0x08)
	struct UImage* RTopBar; // 0x3e0(0x08)
	struct UMaterialInstanceDynamic* AdditiveMaterial; // 0x3e8(0x08)
	struct UMaterialInstanceDynamic* AdditiveDeco; // 0x3f0(0x08)

	void SequenceEvent__ENTRYPOINTBonusStoreItemFront02(); // Function BonusStoreItemFront02.BonusStoreItemFront02_C.SequenceEvent__ENTRYPOINTBonusStoreItemFront02 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Finished_5411436941EF5099C1BE138966F62FE3(); // Function BonusStoreItemFront02.BonusStoreItemFront02_C.Finished_5411436941EF5099C1BE138966F62FE3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AudioEvent(); // Function BonusStoreItemFront02.BonusStoreItemFront02_C.AudioEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function BonusStoreItemFront02.BonusStoreItemFront02_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BonusStoreItemFront02.BonusStoreItemFront02_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Intro Animation(); // Function BonusStoreItemFront02.BonusStoreItemFront02_C.Intro Animation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Idle Animation(); // Function BonusStoreItemFront02.BonusStoreItemFront02_C.Idle Animation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reveal Animation(); // Function BonusStoreItemFront02.BonusStoreItemFront02_C.Reveal Animation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BonusStoreItemFront02(int32_t EntryPoint); // Function BonusStoreItemFront02.BonusStoreItemFront02_C.ExecuteUbergraph_BonusStoreItemFront02 // (Final|UbergraphFunction) // @ game+0x1b42740
};

