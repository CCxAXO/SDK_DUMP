// WidgetBlueprintGeneratedClass WBP_EOGCeremony_GenericGrid.WBP_EOGCeremony_GenericGrid_C
// Size: 0x380 (Inherited: 0x330)
struct UWBP_EOGCeremony_GenericGrid_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* GridIntro_Draw; // 0x338(0x08)
	struct UWidgetAnimation* GridIntro_Defeat; // 0x340(0x08)
	struct UWidgetAnimation* GridIntro_Victory; // 0x348(0x08)
	struct UImage* GridAnchor_BtmLeft; // 0x350(0x08)
	struct UImage* GridAnchor_BtmLeft_2; // 0x358(0x08)
	struct UImage* GridAnchor_BtmLeft_3; // 0x360(0x08)
	struct UImage* GridAnchor_BtmRight; // 0x368(0x08)
	struct UImage* GridAnchor_TopLeft; // 0x370(0x08)
	struct UImage* GridAnchor_TopRight; // 0x378(0x08)

	void PlayGridAnimation(); // Function WBP_EOGCeremony_GenericGrid.WBP_EOGCeremony_GenericGrid_C.PlayGridAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayGridAnimation_Defeat(); // Function WBP_EOGCeremony_GenericGrid.WBP_EOGCeremony_GenericGrid_C.PlayGridAnimation_Defeat // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayGridAnimation_Draw(); // Function WBP_EOGCeremony_GenericGrid.WBP_EOGCeremony_GenericGrid_C.PlayGridAnimation_Draw // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_EOGCeremony_GenericGrid(int32_t EntryPoint); // Function WBP_EOGCeremony_GenericGrid.WBP_EOGCeremony_GenericGrid_C.ExecuteUbergraph_WBP_EOGCeremony_GenericGrid // (Final|UbergraphFunction) // @ game+0x1b42740
};

