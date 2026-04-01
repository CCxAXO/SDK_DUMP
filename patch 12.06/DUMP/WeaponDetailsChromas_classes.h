// WidgetBlueprintGeneratedClass WeaponDetailsChromas.WeaponDetailsChromas_C
// Size: 0x428 (Inherited: 0x318)
struct UWeaponDetailsChromas_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* ChromasContainer; // 0x320(0x08)
	struct FMulticastInlineDelegate OnChromaSelected; // 0x328(0x10)
	double ChromaPadding; // 0x338(0x08)
	struct TArray<struct UWeaponDetailsChroma_C*> ChromaWidgets; // 0x340(0x10)
	struct UEquippableSkinChromaHandle* CurrentChroma; // 0x350(0x08)
	struct UEquippableSkinHandle* CurrentSkin; // 0x358(0x08)
	struct TMap<struct UEquippableSkinChromaHandle*, int32_t> ChromaToRewardLevel; // 0x360(0x50)
	struct TMap<struct UEquippableSkinChromaHandle*, struct USidegradeModel*> ChromaToSidegrade; // 0x3b0(0x50)
	struct FText ChromaUISetting; // 0x400(0x18)
	struct FMulticastInlineDelegate OnChromasPopulated; // 0x418(0x10)

	void ClearSelection(); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.ClearSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Populate Chromas(struct FEquippableSkinChromaHandles& EquippableSkinChromaHandles); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.Populate Chromas // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedChroma(struct UEquippableSkinChromaHandle* Chroma); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.SetSelectedChroma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSkin(struct UEquippableSkinHandle* SkinHandle); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.SetSkin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWeaponDetailsChroma_C* CreateChromaOption(struct UEquippableSkinChromaHandle* ChromaHandle, struct UEquippableSkinHandle* SkinHandle); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.CreateChromaOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddChromaOption(struct UWeaponDetailsChroma_C* ChromaWidget); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.AddChromaOption // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnChromaClicked(struct UEquippableSkinChromaHandle* Chroma); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.OnChromaClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WeaponDetailsChromas(int32_t EntryPoint); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.ExecuteUbergraph_WeaponDetailsChromas // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnChromasPopulated__DelegateSignature(); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.OnChromasPopulated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnChromaSelected__DelegateSignature(struct UEquippableSkinChromaHandle* Chroma); // Function WeaponDetailsChromas.WeaponDetailsChromas_C.OnChromaSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

