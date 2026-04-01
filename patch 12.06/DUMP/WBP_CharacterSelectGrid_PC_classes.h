// WidgetBlueprintGeneratedClass WBP_CharacterSelectGrid_PC.WBP_CharacterSelectGrid_PC_C
// Size: 0x478 (Inherited: 0x438)
struct UWBP_CharacterSelectGrid_PC_C : UWBP_CharacterSelectGrid_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UWBP_Button_IconTab_C* AllFilter; // 0x440(0x08)
	struct UWBP_Button_IconTab_C* ControllerFilter; // 0x448(0x08)
	struct UWBP_Button_IconTab_C* DuelistFilter; // 0x450(0x08)
	struct UImage* Image_35; // 0x458(0x08)
	struct UWBP_Button_IconTab_C* InitiatorFilter; // 0x460(0x08)
	struct UWBP_Button_IconTab_C* SentinelFilter; // 0x468(0x08)
	struct UWBP_List_Grid_C* WBP_List_Grid; // 0x470(0x08)

	void GetButtonToRoleMap(struct TMap<struct UCommonButtonBase*, struct UCharacterRoleUIData*>& Result); // Function WBP_CharacterSelectGrid_PC.WBP_CharacterSelectGrid_PC_C.GetButtonToRoleMap // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void GetListGrid(struct UWBP_List_Grid_C*& ListGrid); // Function WBP_CharacterSelectGrid_PC.WBP_CharacterSelectGrid_PC_C.GetListGrid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_CharacterSelectGrid_PC.WBP_CharacterSelectGrid_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_CharacterSelectGrid_PC.WBP_CharacterSelectGrid_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_CharacterSelectGrid_PC(int32_t EntryPoint); // Function WBP_CharacterSelectGrid_PC.WBP_CharacterSelectGrid_PC_C.ExecuteUbergraph_WBP_CharacterSelectGrid_PC // (Final|UbergraphFunction) // @ game+0x1b42740
};

