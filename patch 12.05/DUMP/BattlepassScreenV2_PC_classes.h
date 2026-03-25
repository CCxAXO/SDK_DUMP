// WidgetBlueprintGeneratedClass BattlepassScreenV2_PC.BattlepassScreenV2_PC_C
// Size: 0x368 (Inherited: 0x340)
struct UBattlepassScreenV2_PC_C : UBattlepassScreen_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UContractDetails_C* ContractDetails; // 0x348(0x08)
	struct ULargeModal_C* LargeModal; // 0x350(0x08)
	struct UImage* LightingSweeps; // 0x358(0x08)
	struct UUniversalHorizontalDivider_C* UniversalHorizontalDivider; // 0x360(0x08)

	bool IsWidgetActive(); // Function BattlepassScreenV2_PC.BattlepassScreenV2_PC_C.IsWidgetActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void OnStackDeactivation(); // Function BattlepassScreenV2_PC.BattlepassScreenV2_PC_C.OnStackDeactivation // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function BattlepassScreenV2_PC.BattlepassScreenV2_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Back(); // Function BattlepassScreenV2_PC.BattlepassScreenV2_PC_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStackActivation(); // Function BattlepassScreenV2_PC.BattlepassScreenV2_PC_C.OnStackActivation // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BattlepassScreenV2_PC(int32_t EntryPoint); // Function BattlepassScreenV2_PC.BattlepassScreenV2_PC_C.ExecuteUbergraph_BattlepassScreenV2_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};

