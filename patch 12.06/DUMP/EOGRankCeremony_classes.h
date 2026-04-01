// WidgetBlueprintGeneratedClass EOGRankCeremony.EOGRankCeremony_C
// Size: 0x400 (Inherited: 0x318)
struct UEOGRankCeremony_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* RankAchieved_Anim; // 0x320(0x08)
	struct UImage* AmbientFX; // 0x328(0x08)
	struct UImage* Background_Color; // 0x330(0x08)
	struct UImage* Background_Icon; // 0x338(0x08)
	struct UImage* Background_Icon_Add; // 0x340(0x08)
	struct UImage* Background_Shadows; // 0x348(0x08)
	struct UImage* BackgroundDarken; // 0x350(0x08)
	struct UImage* BurstImage; // 0x358(0x08)
	struct UTextBlock* CelebrationText; // 0x360(0x08)
	struct UImage* Gradient; // 0x368(0x08)
	struct UProgressBar* LeftRight; // 0x370(0x08)
	struct UProgressBar* LeftRight_2; // 0x378(0x08)
	struct UProgressBar* LeftRight_3; // 0x380(0x08)
	struct UProgressBar* LeftRight_4; // 0x388(0x08)
	struct UProgressBar* LeftRight_5; // 0x390(0x08)
	struct UProgressBar* LeftRight_6; // 0x398(0x08)
	struct UTextBlock* RankText; // 0x3a0(0x08)
	struct UProgressBar* RightLeft; // 0x3a8(0x08)
	struct UProgressBar* RightLeft_2; // 0x3b0(0x08)
	struct UProgressBar* RightLeft_3; // 0x3b8(0x08)
	struct UProgressBar* RightLeft_4; // 0x3c0(0x08)
	struct UProgressBar* RightLeft_5; // 0x3c8(0x08)
	struct UProgressBar* RightLeft_6; // 0x3d0(0x08)
	int32_t Tier; // 0x3d8(0x04)
	int32_t LeaderboardRank; // 0x3dc(0x04)
	struct FText RankName; // 0x3e0(0x18)
	struct UMaterialInstanceDynamic* BadgeAdditive; // 0x3f8(0x08)

	void PreConstruct(bool IsDesignTime); // Function EOGRankCeremony.EOGRankCeremony_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void InitCeremony(int32_t Tier, int32_t LeaderboardRank, bool Placement); // Function EOGRankCeremony.EOGRankCeremony_C.InitCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_EOGRankCeremony(int32_t EntryPoint); // Function EOGRankCeremony.EOGRankCeremony_C.ExecuteUbergraph_EOGRankCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

