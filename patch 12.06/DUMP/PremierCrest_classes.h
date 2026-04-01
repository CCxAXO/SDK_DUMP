// WidgetBlueprintGeneratedClass PremierCrest.PremierCrest_C
// Size: 0x740 (Inherited: 0x3e0)
struct UPremierCrest_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* CrestFillBack; // 0x3e8(0x08)
	struct UImage* CrestFillFront; // 0x3f0(0x08)
	struct UImage* CrestFrame; // 0x3f8(0x08)
	struct UImage* CrestGloss; // 0x400(0x08)
	struct UImage* CrestKnob; // 0x408(0x08)
	struct TMap<enum class EPremierCrestType, struct UTexture2D*> CrestTypeToFrame; // 0x410(0x50)
	struct TMap<enum class EPremierDivisionGroup, int32_t> DivisionGroupToGroupNumber; // 0x460(0x50)
	struct TMap<enum class EPremierCrestType, struct UTexture2D*> DivGroupOpen CrestTypeToFill; // 0x4b0(0x50)
	struct TMap<enum class EPremierCrestType, struct UTexture2D*> DivGroupIntermediate CrestTypeToFill; // 0x500(0x50)
	struct TMap<enum class EPremierCrestType, struct UTexture2D*> DivGroupAdvanced CrestTypeToFill; // 0x550(0x50)
	struct TMap<enum class EPremierCrestType, struct UTexture2D*> DivGroupElite CrestTypeToFill; // 0x5a0(0x50)
	struct TMap<enum class EPremierCrestType, struct UTexture2D*> DivGroupContender CrestTypeToFill; // 0x5f0(0x50)
	struct TMap<enum class EPremierDivisionGroup, struct UTexture2D*> DivGroupToCenterFill; // 0x640(0x50)
	struct TMap<enum class EPremierDivisionGroup, struct FColor> DivGroupToFillColor; // 0x690(0x50)
	enum class EPremierDivisionGroup DivisionGroup; // 0x6e0(0x01)
	enum class EPremierCrestType CrestType; // 0x6e1(0x01)
	char pad_6E2[0x6]; // 0x6e2(0x06)
	double Fill Percentage; // 0x6e8(0x08)
	struct TMap<enum class EPremierCrestType, struct UTexture2D*> DivGroupInvite CrestTypeToFill; // 0x6f0(0x50)

	void UpdateGloss(); // Function PremierCrest.PremierCrest_C.UpdateGloss // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Knob(); // Function PremierCrest.PremierCrest_C.Update Knob // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update FillFront(); // Function PremierCrest.PremierCrest_C.Update FillFront // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Frame(); // Function PremierCrest.PremierCrest_C.Update Frame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update FillBack(); // Function PremierCrest.PremierCrest_C.Update FillBack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DetermineCompetitorFrame(struct UTexture2D*& FrameTexture); // Function PremierCrest.PremierCrest_C.DetermineCompetitorFrame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Update Visuals(); // Function PremierCrest.PremierCrest_C.Update Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetData(enum class EPremierDivisionGroup DivisionGroup, enum class EPremierCrestType CrestType, double FillPercentage); // Function PremierCrest.PremierCrest_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremierCrest.PremierCrest_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierCrest(int32_t EntryPoint); // Function PremierCrest.PremierCrest_C.ExecuteUbergraph_PremierCrest // (Final|UbergraphFunction) // @ game+0x1b42740
};

