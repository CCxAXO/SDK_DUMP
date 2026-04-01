// WidgetBlueprintGeneratedClass WBP_Screen_HubIntro.WBP_Screen_HubIntro_C
// Size: 0x591 (Inherited: 0x520)
struct UWBP_Screen_HubIntro_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWidgetAnimation* VCT_Intro_Anim; // 0x528(0x08)
	struct UImage* BG_Image; // 0x530(0x08)
	struct UImage* Chevron_Bottom; // 0x538(0x08)
	struct UImage* Chevron_Left; // 0x540(0x08)
	struct UImage* Chevron_Right; // 0x548(0x08)
	struct UImage* Chevron_Top; // 0x550(0x08)
	struct UImage* WIP_IMAGE; // 0x558(0x08)
	struct UMaterialInstance* BG_Default_VCT; // 0x560(0x08)
	struct UMaterialInstance* BG_Masters; // 0x568(0x08)
	struct UMaterialInstance* BG_Champs; // 0x570(0x08)
	struct UMaterialInstance* BG_GCC; // 0x578(0x08)
	struct FLinearColor Color_Default_VCT; // 0x580(0x10)
	enum class E2024VCTEvent event; // 0x590(0x01)

	void StyleForIntroAnimation(enum class E2024VCTEvent In Event Type); // Function WBP_Screen_HubIntro.WBP_Screen_HubIntro_C.StyleForIntroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIntroAnimationFinished(); // Function WBP_Screen_HubIntro.WBP_Screen_HubIntro_C.OnIntroAnimationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_HubIntro.WBP_Screen_HubIntro_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_HubIntro(int32_t EntryPoint); // Function WBP_Screen_HubIntro.WBP_Screen_HubIntro_C.ExecuteUbergraph_WBP_Screen_HubIntro // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

