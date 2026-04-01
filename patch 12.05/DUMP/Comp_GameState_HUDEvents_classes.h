// BlueprintGeneratedClass Comp_GameState_HUDEvents.Comp_GameState_HUDEvents_C
// Size: 0xf0 (Inherited: 0xd8)
struct UComp_GameState_HUDEvents_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnAmmoReplenished; // 0xe0(0x10)

	void Local Ammo Replenished(); // Function Comp_GameState_HUDEvents.Comp_GameState_HUDEvents_C.Local Ammo Replenished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_GameState_HUDEvents(int32_t EntryPoint); // Function Comp_GameState_HUDEvents.Comp_GameState_HUDEvents_C.ExecuteUbergraph_Comp_GameState_HUDEvents // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnAmmoReplenished__DelegateSignature(); // Function Comp_GameState_HUDEvents.Comp_GameState_HUDEvents_C.OnAmmoReplenished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

