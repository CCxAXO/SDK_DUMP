// WidgetBlueprintGeneratedClass Esports_PlayerInfoCard.Esports_PlayerInfoCard_C
// Size: 0x3d8 (Inherited: 0x318)
struct UEsports_PlayerInfoCard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* FadeIn; // 0x320(0x08)
	struct UBorder* Bor_Title; // 0x328(0x08)
	struct UImage* Image_PlayerPhoto; // 0x330(0x08)
	struct UButton* Player_Button; // 0x338(0x08)
	struct UTextBlock* TB_MemberTitle; // 0x340(0x08)
	struct UTextBlock* Text_GameName; // 0x348(0x08)
	struct UMaterial* LoadingImage; // 0x350(0x08)
	struct FPlayerDTO Player DTO; // 0x358(0x80)

	void Is URL Valid(struct FString URL, bool& Is Valid); // Function Esports_PlayerInfoCard.Esports_PlayerInfoCard_C.Is URL Valid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PopulatePlayerInfo(struct FString MemberName, bool HasTitle, struct FString MemberTitle); // Function Esports_PlayerInfoCard.Esports_PlayerInfoCard_C.PopulatePlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFail_A40F9A334FB06512148FAFA160A90ECC(struct UTexture2DDynamic* Texture); // Function Esports_PlayerInfoCard.Esports_PlayerInfoCard_C.OnFail_A40F9A334FB06512148FAFA160A90ECC // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSuccess_A40F9A334FB06512148FAFA160A90ECC(struct UTexture2DDynamic* Texture); // Function Esports_PlayerInfoCard.Esports_PlayerInfoCard_C.OnSuccess_A40F9A334FB06512148FAFA160A90ECC // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Player Card(struct FPlayerDTO Player DTO); // Function Esports_PlayerInfoCard.Esports_PlayerInfoCard_C.Init Player Card // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Esports_PlayerInfoCard_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function Esports_PlayerInfoCard.Esports_PlayerInfoCard_C.BndEvt__Esports_PlayerInfoCard_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Esports_PlayerInfoCard(int32_t EntryPoint); // Function Esports_PlayerInfoCard.Esports_PlayerInfoCard_C.ExecuteUbergraph_Esports_PlayerInfoCard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

