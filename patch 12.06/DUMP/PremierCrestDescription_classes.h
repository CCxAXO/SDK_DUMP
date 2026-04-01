// WidgetBlueprintGeneratedClass PremierCrestDescription.PremierCrestDescription_C
// Size: 0x578 (Inherited: 0x520)
struct UPremierCrestDescription_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UImage* BackgroundGradient_Bot; // 0x528(0x08)
	struct UImage* BackgroundGradient_Top; // 0x530(0x08)
	struct UImage* BackgroundOverlay; // 0x538(0x08)
	struct UPremierCrest_C* FlawlessWinnerCrest; // 0x540(0x08)
	struct UPremierCrest_C* PlayoffCrest; // 0x548(0x08)
	struct UPremierCrest_C* PremierCrestImage; // 0x550(0x08)
	struct UPremierCrest_C* QualifiedCrest; // 0x558(0x08)
	struct UPremierCrest_C* RunnerUpCrest; // 0x560(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x568(0x08)
	struct UPremierCrest_C* WinnerCrest; // 0x570(0x08)

	void PreConstruct(bool IsDesignTime); // Function PremierCrestDescription.PremierCrestDescription_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierCrestDescription.PremierCrestDescription_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierCrestDescription_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function PremierCrestDescription.PremierCrestDescription_C.BndEvt__PremierCrestDescription_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierCrestDescription(int32_t EntryPoint); // Function PremierCrestDescription.PremierCrestDescription_C.ExecuteUbergraph_PremierCrestDescription // (Final|UbergraphFunction) // @ game+0x1b42740
};

