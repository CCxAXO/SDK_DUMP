// WidgetBlueprintGeneratedClass WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_Collections_PlayerCardPreview_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVerticalBox* LesserSizes; // 0x3e8(0x08)
	struct UWBP_View_PlayerCardLarge_C* PlayerInfo; // 0x3f0(0x08)
	struct UImage* RectangleBorder; // 0x3f8(0x08)
	struct UWBP_Panel_PlayerCardImage_C* SmallPreview; // 0x400(0x08)
	struct USizeBox* Spacer; // 0x408(0x08)
	struct UImage* SquareBorder; // 0x410(0x08)
	struct UWBP_Panel_PlayerCardImage_C* WidePreview; // 0x418(0x08)
	bool DisplayLesserSizes; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UVM_LocalPlayer_C* LocalPlayerViewModel; // 0x428(0x08)

	void AssignOverridePlayerCardId(enum class EPlayerCardImageType Size, struct FGuid Player Card ID); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.AssignOverridePlayerCardId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerSubjectChanged(struct FString Subject); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.HandlePlayerSubjectChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToViewModelEvents(bool bBind); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.BindToViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeViewModels(); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDisplayLesserSizes(bool InDisplayLesserSizes); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.SetDisplayLesserSizes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AssignOverridePlayerTitle(struct FText InText, bool ActivateOverride); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.AssignOverridePlayerTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AssignOverrideLevelBorder(struct UTexture2D* LevelBorderTexture, bool ActivateOverride); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.AssignOverrideLevelBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Collections_PlayerCardPreview(int32_t EntryPoint); // Function WBP_Panel_Collections_PlayerCardPreview.WBP_Panel_Collections_PlayerCardPreview_C.ExecuteUbergraph_WBP_Panel_Collections_PlayerCardPreview // (Final|UbergraphFunction) // @ game+0x1b42740
};

