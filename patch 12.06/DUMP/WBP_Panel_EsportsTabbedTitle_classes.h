// WidgetBlueprintGeneratedClass WBP_Panel_EsportsTabbedTitle.WBP_Panel_EsportsTabbedTitle_C
// Size: 0x460 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsTabbedTitle_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UBorder* Bor_EventLoc; // 0x3e8(0x08)
	struct UImage* ChamferedBG; // 0x3f0(0x08)
	struct UAresCommonText* CT_EventLoc; // 0x3f8(0x08)
	struct UAresCommonText* CT_EventName; // 0x400(0x08)
	struct UAresCommonText* CT_Pickems; // 0x408(0x08)
	struct UImage* Image; // 0x410(0x08)
	struct UImage* Image_53; // 0x418(0x08)
	struct UImage* Image_105; // 0x420(0x08)
	struct UImage* Image_corner; // 0x428(0x08)
	struct UImage* Image_PickemsLogo; // 0x430(0x08)
	struct UImage* VCTSpark; // 0x438(0x08)
	bool Is Have Corners; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UEsportsEventViewModel* EsportsEventVM; // 0x448(0x08)
	struct UEsportsTournamentViewModel* EsportsTournamentVM; // 0x450(0x08)
	struct UEsportsLeagueViewModel* EsportsLeagueVM; // 0x458(0x08)

	void Handle League ID Changed(struct FString In ID); // Function WBP_Panel_EsportsTabbedTitle.WBP_Panel_EsportsTabbedTitle_C.Handle League ID Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEventLocationChanged(struct FText& NewValue); // Function WBP_Panel_EsportsTabbedTitle.WBP_Panel_EsportsTabbedTitle_C.HandleEventLocationChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle League Name Changed(struct FText& NewValue); // Function WBP_Panel_EsportsTabbedTitle.WBP_Panel_EsportsTabbedTitle_C.Handle League Name Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsTabbedTitle.WBP_Panel_EsportsTabbedTitle_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Style For Event(enum class E2024VCTEvent InEvent); // Function WBP_Panel_EsportsTabbedTitle.WBP_Panel_EsportsTabbedTitle_C.Style For Event // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Corner Visibility(); // Function WBP_Panel_EsportsTabbedTitle.WBP_Panel_EsportsTabbedTitle_C.Corner Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EsportsTabbedTitle.WBP_Panel_EsportsTabbedTitle_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsTabbedTitle(int32_t EntryPoint); // Function WBP_Panel_EsportsTabbedTitle.WBP_Panel_EsportsTabbedTitle_C.ExecuteUbergraph_WBP_Panel_EsportsTabbedTitle // (Final|UbergraphFunction) // @ game+0x1b42740
};

