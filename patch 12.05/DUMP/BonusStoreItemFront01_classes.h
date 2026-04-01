// WidgetBlueprintGeneratedClass BonusStoreItemFront01.BonusStoreItemFront01_C
// Size: 0x3a8 (Inherited: 0x318)
struct UBonusStoreItemFront01_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UImage* CenterTriangle; // 0x330(0x08)
	struct UImage* DecoTop; // 0x338(0x08)
	struct UImage* LBarrow; // 0x340(0x08)
	struct UImage* LineBot; // 0x348(0x08)
	struct UImage* LineBotTip; // 0x350(0x08)
	struct UImage* LineLeft; // 0x358(0x08)
	struct UImage* LineLeftTip; // 0x360(0x08)
	struct UImage* LineRight; // 0x368(0x08)
	struct UImage* LineRightTip; // 0x370(0x08)
	struct UImage* LTarrow; // 0x378(0x08)
	struct UImage* Pattern; // 0x380(0x08)
	struct UImage* RBarrow; // 0x388(0x08)
	struct UImage* RBotBar; // 0x390(0x08)
	struct UImage* RTarrow; // 0x398(0x08)
	struct UImage* RTopBar; // 0x3a0(0x08)

	void SequenceEvent__ENTRYPOINTBonusStoreItemFront01(); // Function BonusStoreItemFront01.BonusStoreItemFront01_C.SequenceEvent__ENTRYPOINTBonusStoreItemFront01 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Play Intro Animation(); // Function BonusStoreItemFront01.BonusStoreItemFront01_C.Play Intro Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AudioEvent(); // Function BonusStoreItemFront01.BonusStoreItemFront01_C.AudioEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function BonusStoreItemFront01.BonusStoreItemFront01_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Hover Animation(); // Function BonusStoreItemFront01.BonusStoreItemFront01_C.Hover Animation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BonusStoreItemFront01(int32_t EntryPoint); // Function BonusStoreItemFront01.BonusStoreItemFront01_C.ExecuteUbergraph_BonusStoreItemFront01 // (Final|UbergraphFunction) // @ game+0x1af5410
};

