// WidgetBlueprintGeneratedClass MenuOrnament.MenuOrnament_C
// Size: 0x380 (Inherited: 0x318)
struct UMenuOrnament_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* MatchTimer; // 0x320(0x08)
	struct UWidgetAnimation* IntroV2; // 0x328(0x08)
	struct UImage* Line01L; // 0x330(0x08)
	struct UImage* Line01R; // 0x338(0x08)
	struct UImage* Line02L; // 0x340(0x08)
	struct UImage* Line02R; // 0x348(0x08)
	struct UImage* Line03L; // 0x350(0x08)
	struct UImage* Line03R; // 0x358(0x08)
	struct UMaterialInstanceDynamic* WipeMaterial01; // 0x360(0x08)
	struct UMaterialInstanceDynamic* NewVar_1; // 0x368(0x08)
	struct UMaterialInstanceDynamic* WipeMaterial03; // 0x370(0x08)
	struct UMaterialInstanceDynamic* WipeMaterial02; // 0x378(0x08)

	void PreConstruct(bool IsDesignTime); // Function MenuOrnament.MenuOrnament_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MenuOrnament.MenuOrnament_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MenuOrnament(int32_t EntryPoint); // Function MenuOrnament.MenuOrnament_C.ExecuteUbergraph_MenuOrnament // (Final|UbergraphFunction) // @ game+0x1af5410
};

