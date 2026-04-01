// WidgetBlueprintGeneratedClass Ceremony_Generic_Default.Ceremony_Generic_Default_C
// Size: 0x438 (Inherited: 0x322)
struct UCeremony_Generic_Default_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Anim_IN_fixed; // 0x330(0x08)
	struct UImage* BottomGlitch; // 0x338(0x08)
	struct UImage* BottomLine; // 0x340(0x08)
	struct UCeremony_RoundOutcome_Default_C* Ceremony_RoundOutcome_Default; // 0x348(0x08)
	struct UImage* CeremonyIcon; // 0x350(0x08)
	struct UImage* EndCapBL; // 0x358(0x08)
	struct UImage* EndCapBR; // 0x360(0x08)
	struct UImage* EndCapTL; // 0x368(0x08)
	struct UImage* EndCapTR; // 0x370(0x08)
	struct UImage* glitchtexture; // 0x378(0x08)
	struct UImage* Image_55; // 0x380(0x08)
	struct UImage* Image_109; // 0x388(0x08)
	struct UTextBlock* PlayerName; // 0x390(0x08)
	struct UTextBlock* PrimaryText; // 0x398(0x08)
	struct UTextBlock* TeamInfo; // 0x3a0(0x08)
	struct UImage* Texture; // 0x3a8(0x08)
	struct UCanvasPanel* Tier0_Canvas; // 0x3b0(0x08)
	struct UCanvasPanel* Tier1_Canvas; // 0x3b8(0x08)
	struct UImage* TopGlitch; // 0x3c0(0x08)
	struct UImage* TopLine; // 0x3c8(0x08)
	struct UImage* WhiteBGBase; // 0x3d0(0x08)
	struct UTextBlock* WipeText; // 0x3d8(0x08)
	struct FText Event Text; // 0x3e0(0x18)
	struct AShooterPlayerState* PlayerState; // 0x3f8(0x08)
	struct UBaseTeamComponent* TeamInfoEnum; // 0x400(0x08)
	struct FText Sub Event Text; // 0x408(0x18)
	bool PlayerTeamWon; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	int32_t CurrentRoundNumber; // 0x424(0x04)
	enum class EAresRoundOutcome RoundOutcome; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	int32_t Tier; // 0x42c(0x04)
	struct UTexture* InCeremonyIcon; // 0x430(0x08)

	void GetTier(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.GetTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingIn(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingOut(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOutroAnim(); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.PlayOutroAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Ceremony_Generic_Default(int32_t EntryPoint); // Function Ceremony_Generic_Default.Ceremony_Generic_Default_C.ExecuteUbergraph_Ceremony_Generic_Default // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

