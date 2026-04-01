// WidgetBlueprintGeneratedClass HUD_DebuffNotification_Container.HUD_DebuffNotification_Container_C
// Size: 0x3d0 (Inherited: 0x330)
struct UHUD_DebuffNotification_Container_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x338(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_1; // 0x340(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_2; // 0x348(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_3; // 0x350(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_4; // 0x358(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_5; // 0x360(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_6; // 0x368(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_7; // 0x370(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_8; // 0x378(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_9; // 0x380(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_10; // 0x388(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_11; // 0x390(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_12; // 0x398(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_13; // 0x3a0(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_14; // 0x3a8(0x08)
	struct UHUD_DebuffNotification_ActorIcon_C* HUD_DebuffNotification_ActorIcon_15; // 0x3b0(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x3b8(0x08)
	struct TArray<struct UHUD_DebuffNotification_ActorIcon_C*> IconWidgets; // 0x3c0(0x10)

	void ResetPortraits(); // Function HUD_DebuffNotification_Container.HUD_DebuffNotification_Container_C.ResetPortraits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializePortraits(int32_t& NumActivePortraits); // Function HUD_DebuffNotification_Container.HUD_DebuffNotification_Container_C.InitializePortraits // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function HUD_DebuffNotification_Container.HUD_DebuffNotification_Container_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function HUD_DebuffNotification_Container.HUD_DebuffNotification_Container_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HUD_DebuffNotification_Container(int32_t EntryPoint); // Function HUD_DebuffNotification_Container.HUD_DebuffNotification_Container_C.ExecuteUbergraph_HUD_DebuffNotification_Container // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

