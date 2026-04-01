// WidgetBlueprintGeneratedClass RosterSettingsContextMenu.RosterSettingsContextMenu_C
// Size: 0x391 (Inherited: 0x318)
struct URosterSettingsContextMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* ChildSlot2; // 0x320(0x08)
	struct UContextMenuAnchor_C* ContextMenuAnchor; // 0x328(0x08)
	struct UContextMenu_C* ContextMenuObject; // 0x330(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_CustomizeTeam; // 0x338(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_CustomizeTeam_Unavailable; // 0x340(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_DeleteTeam; // 0x348(0x08)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x350(0x10)
	struct UAresContextMenuActionBaseWidget* ContextAction_DeleteTeam_Unavailable; // 0x360(0x08)
	bool IsEditor; // 0x368(0x01)
	bool IsRosterLocked; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct UAresContextMenuActionBaseWidget* ContextAction_SetConference; // 0x370(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_SetConference_Unavailable; // 0x378(0x08)
	bool IsProvisional; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UAresContextMenuActionBaseWidget* ContextAction_RenameTeam; // 0x388(0x08)
	bool IsRosterForceRenamed; // 0x390(0x01)

	void SetActionAvailability(struct UAresContextMenuActionBaseWidget* Action Widget, bool Visible, bool Enabled); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.SetActionAvailability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateContextMenuActionsVisibility(); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.UpdateContextMenuActionsVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ConfirmDeleteTeam(); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.ConfirmDeleteTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CancelDeleteTeam(); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.CancelDeleteTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChanged__DelegateSignature(bool IsOpen); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void DeleteTeam(); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.DeleteTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CustomizeTeam(); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.CustomizeTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Unavailable(); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.Unavailable // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetConference(); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.SetConference // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature(struct UContextMenu_C* ContextMenu); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void RenameTeam(); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.RenameTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RosterSettingsContextMenu(int32_t EntryPoint); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.ExecuteUbergraph_RosterSettingsContextMenu // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnMenuOpenChanged__DelegateSignature(bool IsOpen); // Function RosterSettingsContextMenu.RosterSettingsContextMenu_C.OnMenuOpenChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

