// BlueprintGeneratedClass Comp_NavLinkManager.Comp_NavLinkManager_C
// Size: 0x110 (Inherited: 0xd8)
struct UComp_NavLinkManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TSoftObjectPtr<ANavLinkProxy> NavLink; // 0xe0(0x30)

	void Open Path(); // Function Comp_NavLinkManager.Comp_NavLinkManager_C.Open Path // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Close Path(); // Function Comp_NavLinkManager.Comp_NavLinkManager_C.Close Path // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_NavLinkManager.Comp_NavLinkManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_NavLinkManager(int32_t EntryPoint); // Function Comp_NavLinkManager.Comp_NavLinkManager_C.ExecuteUbergraph_Comp_NavLinkManager // (Final|UbergraphFunction) // @ game+0x1af5410
};

