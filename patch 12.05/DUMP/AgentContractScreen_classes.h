// WidgetBlueprintGeneratedClass AgentContractScreen.AgentContractScreen_C
// Size: 0x368 (Inherited: 0x330)
struct UAgentContractScreen_C : UContractsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UContractCharacterStatus_C* ContractCharacterStatus; // 0x338(0x08)
	struct UContractDetails_C* ContractDetails; // 0x340(0x08)
	struct UContractsBackgroundVideo_C* ContractsBackgroundVideo; // 0x348(0x08)
	struct ULargeModal_C* LargeModal; // 0x350(0x08)
	struct UUniversalHorizontalDivider_C* UniversalHorizontalDivider; // 0x358(0x08)
	struct UContractViewModel* ContractViewModel; // 0x360(0x08)

	bool IsWidgetActive(); // Function AgentContractScreen.AgentContractScreen_C.IsWidgetActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void OnStackDeactivation(); // Function AgentContractScreen.AgentContractScreen_C.OnStackDeactivation // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AgentContractScreen.AgentContractScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function AgentContractScreen.AgentContractScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnStackActivation(); // Function AgentContractScreen.AgentContractScreen_C.OnStackActivation // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AgentContractScreen(int32_t EntryPoint); // Function AgentContractScreen.AgentContractScreen_C.ExecuteUbergraph_AgentContractScreen // (Final|UbergraphFunction) // @ game+0x1af5410
};

