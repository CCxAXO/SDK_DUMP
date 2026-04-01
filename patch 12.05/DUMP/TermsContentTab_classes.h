// WidgetBlueprintGeneratedClass TermsContentTab.TermsContentTab_C
// Size: 0x368 (Inherited: 0x318)
struct UTermsContentTab_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedHyperlinkButon_C* CommercialTransactionsLinkButton; // 0x320(0x08)
	struct UTextBlock* EulaTextbox; // 0x328(0x08)
	struct UHorizontalBox* JapaneseLegalBox; // 0x330(0x08)
	struct USharedHyperlinkButon_C* PaymentCheckLinkButton; // 0x338(0x08)
	struct FString VietnamTermsURL; // 0x340(0x10)
	struct FText VNGTermsText; // 0x350(0x18)

	void OnInitialized(); // Function TermsContentTab.TermsContentTab_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TermsContentTab.TermsContentTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TermsContentTab(int32_t EntryPoint); // Function TermsContentTab.TermsContentTab_C.ExecuteUbergraph_TermsContentTab // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

