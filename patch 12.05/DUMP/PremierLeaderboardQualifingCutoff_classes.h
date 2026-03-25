// WidgetBlueprintGeneratedClass PremierLeaderboardQualifingCutoff.PremierLeaderboardQualifingCutoff_C
// Size: 0x3b2 (Inherited: 0x318)
struct UPremierLeaderboardQualifingCutoff_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image_2; // 0x328(0x08)
	struct UImage* Image_3; // 0x330(0x08)
	struct UImage* Image_4; // 0x338(0x08)
	struct UImage* Image_5; // 0x340(0x08)
	struct UImage* Image_6; // 0x348(0x08)
	struct UImage* Image_DownArrow; // 0x350(0x08)
	struct UImage* Image_DownArrow_3; // 0x358(0x08)
	struct UImage* Image_UpArrow; // 0x360(0x08)
	struct UImage* Image_UpArrow_3; // 0x368(0x08)
	struct UTextBlock* ThresholdText; // 0x370(0x08)
	double Cutoff Row Fill; // 0x378(0x08)
	struct FMulticastInlineDelegate On Cutoff Height change; // 0x380(0x10)
	int32_t Design cutoff below rank; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FText Threshold Name; // 0x398(0x18)
	bool Show Down Arrows; // 0x3b0(0x01)
	bool Show Up Arrows; // 0x3b1(0x01)

	void Update Up Arrow Visibility(); // Function PremierLeaderboardQualifingCutoff.PremierLeaderboardQualifingCutoff_C.Update Up Arrow Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Down Arrow Visibility(); // Function PremierLeaderboardQualifingCutoff.PremierLeaderboardQualifingCutoff_C.Update Down Arrow Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateThresholdText(); // Function PremierLeaderboardQualifingCutoff.PremierLeaderboardQualifingCutoff_C.UpdateThresholdText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PremierLeaderboardQualifingCutoff.PremierLeaderboardQualifingCutoff_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierLeaderboardQualifingCutoff(int32_t EntryPoint); // Function PremierLeaderboardQualifingCutoff.PremierLeaderboardQualifingCutoff_C.ExecuteUbergraph_PremierLeaderboardQualifingCutoff // (Final|UbergraphFunction) // @ game+0x1af5410
	void On Cutoff Height change__DelegateSignature(struct UPremierLeaderboardQualifingCutoff_C* ThresholdWidget); // Function PremierLeaderboardQualifingCutoff.PremierLeaderboardQualifingCutoff_C.On Cutoff Height change__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

