// BlueprintGeneratedClass Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C
// Size: 0x100 (Inherited: 0xd8)
struct UComp_GameState_CreateWidgets_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<struct UUserWidget*> WidgetsToSpawn; // 0xe0(0x10)
	struct UUserWidget* BelowMinimapWidgetClass; // 0xf0(0x08)
	struct UCoordinatedHUDElement* BuyPhaseWidgetClass; // 0xf8(0x08)

	void AddBuyPhaseWidget(struct UPanelWidget* Target, struct UCoordinatedHUDElement*& NewWidget); // Function Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C.AddBuyPhaseWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddBelowMinimapWidget(struct UPanelWidget* Target); // Function Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C.AddBelowMinimapWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_GameState_CreateWidgets(int32_t EntryPoint); // Function Comp_GameState_CreateWidgets.Comp_GameState_CreateWidgets_C.ExecuteUbergraph_Comp_GameState_CreateWidgets // (Final|UbergraphFunction) // @ game+0x1af5410
};

