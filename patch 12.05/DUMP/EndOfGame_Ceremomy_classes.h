// WidgetBlueprintGeneratedClass EndOfGame_Ceremomy.EndOfGame_Ceremomy_C
// Size: 0x438 (Inherited: 0x338)
struct UEndOfGame_Ceremomy_C : USimpleLifecycleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Intro; // 0x340(0x08)
	struct UImage* BG; // 0x348(0x08)
	struct UImage* BGMaterial; // 0x350(0x08)
	struct UImage* BLCap; // 0x358(0x08)
	struct UImage* BottomLine; // 0x360(0x08)
	struct UImage* BRCap; // 0x368(0x08)
	struct UImage* CanvasBG; // 0x370(0x08)
	struct UImage* Dot1; // 0x378(0x08)
	struct UImage* Dot2; // 0x380(0x08)
	struct UImage* Dot3; // 0x388(0x08)
	struct UImage* Dot4; // 0x390(0x08)
	struct UImage* Dot5; // 0x398(0x08)
	struct UImage* Dot6; // 0x3a0(0x08)
	struct UImage* Dot8; // 0x3a8(0x08)
	struct UImage* Dott7; // 0x3b0(0x08)
	struct UImage* Glitch; // 0x3b8(0x08)
	struct UTextBlock* Outcome_text; // 0x3c0(0x08)
	struct UImage* OutsideShimmer; // 0x3c8(0x08)
	struct UImage* ScalingOutline; // 0x3d0(0x08)
	struct UTextBlock* SurrenderText; // 0x3d8(0x08)
	struct UTextBlock* TextBlock_85; // 0x3e0(0x08)
	struct UImage* TLCap; // 0x3e8(0x08)
	struct UImage* TopLine; // 0x3f0(0x08)
	struct UImage* TRCap; // 0x3f8(0x08)
	struct UImage* VInsideFill; // 0x400(0x08)
	struct UTextBlock* WipeTextBlock; // 0x408(0x08)
	struct UImage* ZoomElement_Material; // 0x410(0x08)
	enum class Enum_MatchResult MatchResult; // 0x418(0x01)
	enum class EMatchCompletionState Completion State; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct FText NewVar_1; // 0x420(0x18)

	void GetColorsForResult(enum class Enum_MatchResult Result, struct FLinearColor& ForegroundColor, struct FLinearColor& BackgroundColor); // Function EndOfGame_Ceremomy.EndOfGame_Ceremomy_C.GetColorsForResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayCeremony(struct FLinearColor ForegroundColor, struct FLinearColor BackgroundColor); // Function EndOfGame_Ceremomy.EndOfGame_Ceremomy_C.PlayCeremony // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EndOfGame_Ceremomy.EndOfGame_Ceremomy_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Show(); // Function EndOfGame_Ceremomy.EndOfGame_Ceremomy_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Hide(); // Function EndOfGame_Ceremomy.EndOfGame_Ceremomy_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function EndOfGame_Ceremomy.EndOfGame_Ceremomy_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PlayOutroAnim(); // Function EndOfGame_Ceremomy.EndOfGame_Ceremomy_C.PlayOutroAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EndOfGame_Ceremomy(int32_t EntryPoint); // Function EndOfGame_Ceremomy.EndOfGame_Ceremomy_C.ExecuteUbergraph_EndOfGame_Ceremomy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

