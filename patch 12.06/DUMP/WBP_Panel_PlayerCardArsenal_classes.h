// WidgetBlueprintGeneratedClass WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C
// Size: 0x1b09 (Inherited: 0x1ae0)
struct UWBP_Panel_PlayerCardArsenal_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWBP_View_PlayerCardLarge_C* WBP_View_PlayerCardLarge; // 0x1ae8(0x08)
	struct UVM_LocalPlayer_C* LocalPlayerViewModel; // 0x1af0(0x08)
	struct FString ProfileURL; // 0x1af8(0x10)
	bool Hovered; // 0x1b08(0x01)

	void MakeViewModels(); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerSubjectChanged(struct FString Subject); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.HandlePlayerSubjectChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToViewModelEvents(bool bBind); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.BindToViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerCardArsenal(int32_t EntryPoint); // Function WBP_Panel_PlayerCardArsenal.WBP_Panel_PlayerCardArsenal_C.ExecuteUbergraph_WBP_Panel_PlayerCardArsenal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

