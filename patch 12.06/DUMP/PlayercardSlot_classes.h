// WidgetBlueprintGeneratedClass PlayercardSlot.PlayercardSlot_C
// Size: 0x39c (Inherited: 0x318)
struct UPlayercardSlot_C : UPlayercardSlot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* Bottom; // 0x320(0x08)
	struct UImage* Center; // 0x328(0x08)
	struct UImage* ChampsAura; // 0x330(0x08)
	struct UImage* ChampsAura_2; // 0x338(0x08)
	struct UImage* cornertiny; // 0x340(0x08)
	struct UImage* cornertiny_2; // 0x348(0x08)
	struct UImage* cornertiny_3; // 0x350(0x08)
	struct UImage* cornertiny_4; // 0x358(0x08)
	struct UImage* Left; // 0x360(0x08)
	struct UNamedSlot* PlayerCard; // 0x368(0x08)
	struct UOverlay* Premier_Basic; // 0x370(0x08)
	struct UOverlay* Premier_ChampsAura; // 0x378(0x08)
	struct UOverlay* Premier_Qualified; // 0x380(0x08)
	struct UOverlay* PremierOverlay; // 0x388(0x08)
	struct UImage* Right; // 0x390(0x08)
	bool Premier_ShouldShowPremier; // 0x398(0x01)
	enum class EPremierPrestigePlating Premier_Plating; // 0x399(0x01)
	bool Premier_ShouldShowAura; // 0x39a(0x01)
	bool Premier_IsCombat Report; // 0x39b(0x01)

	void UpdatePremier(bool ShowPremier, enum class EPremierPrestigePlating Plating, bool ShowAura, bool IsCombatReport); // Function PlayercardSlot.PlayercardSlot_C.UpdatePremier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier_ShowPremier(bool ShowPremier); // Function PlayercardSlot.PlayercardSlot_C.Premier_ShowPremier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier_ShowAura(bool ShowAura); // Function PlayercardSlot.PlayercardSlot_C.Premier_ShowAura // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier_SetLevel(enum class EPremierPrestigePlating Plating); // Function PlayercardSlot.PlayercardSlot_C.Premier_SetLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier_SetIsCombatReport(bool IsCombatReport); // Function PlayercardSlot.PlayercardSlot_C.Premier_SetIsCombatReport // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PlayercardSlot.PlayercardSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayercardSlot(int32_t EntryPoint); // Function PlayercardSlot.PlayercardSlot_C.ExecuteUbergraph_PlayercardSlot // (Final|UbergraphFunction) // @ game+0x1b42740
};

