// WidgetBlueprintGeneratedClass WBP_View_CharacterSelectEnemyLockIn.WBP_View_CharacterSelectEnemyLockIn_C
// Size: 0x408 (Inherited: 0x3e0)
struct UWBP_View_CharacterSelectEnemyLockIn_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* HorizontalBox_52; // 0x3e8(0x08)
	struct UVM_CharacterSelectEnemyLockIn_C* EnemyLockInVM; // 0x3f0(0x08)
	struct TArray<struct UWBP_View_EnemyPlayerLockStatus_C*> EnemyPlayerWidgets; // 0x3f8(0x10)

	void SetNewNumLockedIn(int32_t NumLockedIn); // Function WBP_View_CharacterSelectEnemyLockIn.WBP_View_CharacterSelectEnemyLockIn_C.SetNewNumLockedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNewNumPlayers(int32_t NumPlayers); // Function WBP_View_CharacterSelectEnemyLockIn.WBP_View_CharacterSelectEnemyLockIn_C.SetNewNumPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateEnemyStatusWidgets(); // Function WBP_View_CharacterSelectEnemyLockIn.WBP_View_CharacterSelectEnemyLockIn_C.CreateEnemyStatusWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_View_CharacterSelectEnemyLockIn.WBP_View_CharacterSelectEnemyLockIn_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_View_CharacterSelectEnemyLockIn(int32_t EntryPoint); // Function WBP_View_CharacterSelectEnemyLockIn.WBP_View_CharacterSelectEnemyLockIn_C.ExecuteUbergraph_WBP_View_CharacterSelectEnemyLockIn // (Final|UbergraphFunction) // @ game+0x1b42740
};

