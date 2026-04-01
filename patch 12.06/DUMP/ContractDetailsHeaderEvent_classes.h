// WidgetBlueprintGeneratedClass ContractDetailsHeaderEvent.ContractDetailsHeaderEvent_C
// Size: 0x360 (Inherited: 0x318)
struct UContractDetailsHeaderEvent_C : UContractDetailsHeaderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UExpirationTimer_C* ExpirationTimer; // 0x320(0x08)
	struct UImage* Image_100; // 0x328(0x08)
	struct UImage* Image_113; // 0x330(0x08)
	struct UImage* LineBottom; // 0x338(0x08)
	struct UImage* LineTop; // 0x340(0x08)
	struct UTextBlock* Name; // 0x348(0x08)
	struct UTextBlock* Name_2; // 0x350(0x08)
	struct UImage* YearOneImage; // 0x358(0x08)

	void SetTitle(struct FText Title); // Function ContractDetailsHeaderEvent.ContractDetailsHeaderEvent_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTimerVisible(bool Visible); // Function ContractDetailsHeaderEvent.ContractDetailsHeaderEvent_C.SetTimerVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetExpirationTime(struct FDateTime ExpirationTime); // Function ContractDetailsHeaderEvent.ContractDetailsHeaderEvent_C.SetExpirationTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ContractDetailsHeaderEvent.ContractDetailsHeaderEvent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ContractDetailsHeaderEvent(int32_t EntryPoint); // Function ContractDetailsHeaderEvent.ContractDetailsHeaderEvent_C.ExecuteUbergraph_ContractDetailsHeaderEvent // (Final|UbergraphFunction) // @ game+0x1b42740
};

