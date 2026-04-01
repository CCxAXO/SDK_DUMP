// BlueprintGeneratedClass VM_PremierStageComboBox.VM_PremierStageComboBox_C
// Size: 0x1c8 (Inherited: 0x90)
struct UVM_PremierStageComboBox_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct TMap<struct FGuid, struct UPremierSeasonModelOld*> SeasonIDToModel; // 0x98(0x50)
	struct TArray<None> HiddenSeasons; // 0xe8(0x10)
	struct FGuid SeasonID; // 0xf8(0x10)
	bool ShowFutureStages; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UPremierSeasonModelOld* ActiveSeason; // 0x110(0x08)
	struct FGuid DefaultActiveStage; // 0x118(0x10)
	struct FMulticastInlineDelegate On SeasonID To Model Changed; // 0x128(0x10)
	struct FMulticastInlineDelegate On ActiveSeason Changed; // 0x138(0x10)
	struct FMulticastInlineDelegate On SeasonID Changed; // 0x148(0x10)
	bool AllowForStagesWithMissingNames; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct TMap<struct FGuid, struct UPremierSeasonModelOld*> PremierSeasonModels; // 0x160(0x50)
	bool SeasonDataFetched; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct FMulticastInlineDelegate On SeasonData Fetched; // 0x1b8(0x10)

	void Set SeasonDataFetched(bool IsDataFetched); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.Set SeasonDataFetched // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set PremierSeasonModels(struct FPremierSeasonHandles& PremierSeasonHandles); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.Set PremierSeasonModels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GuidToPremierSeasonModel Map Comparitor(struct TMap<struct FGuid, struct UPremierSeasonModelOld*> Old Map, struct TMap<struct FGuid, struct UPremierSeasonModelOld*> New Map, bool& Not Equal); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.GuidToPremierSeasonModel Map Comparitor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Init with Season ID(struct FGuid SeasonID); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.Init with Season ID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsCurrentSeasonActiveSeason(bool& Is ActiveSeason); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.IsCurrentSeasonActiveSeason // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void CheckIfActiveSeasonIsHiddenSeason(struct UPremierSeasonModelOld* ActiveSeason, struct UPremierSeasonModelOld*& ResolvedActiveSeason); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.CheckIfActiveSeasonIsHiddenSeason // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set ActiveSeason(struct UPremierSeasonModelOld* New ActiveSeason); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.Set ActiveSeason // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On ActiveSeason Fetched(struct UPremierSeasonModelOld* New ActiveSeason); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.On ActiveSeason Fetched // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set SeasonID ToModel(struct TMap<struct FGuid, struct UPremierSeasonModelOld*> New SeasonIDToModel); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.Set SeasonID ToModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update SeasonID To Model(); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.Update SeasonID To Model // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update SeasonID(struct FGuid SeasonID); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.Update SeasonID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set SeasonID(struct FGuid New SelectedSeasonID); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.Set SeasonID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PremierStageComboBox(int32_t EntryPoint); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.ExecuteUbergraph_VM_PremierStageComboBox // (Final|UbergraphFunction) // @ game+0x1b42740
	void On SeasonData Fetched__DelegateSignature(); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.On SeasonData Fetched__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On SeasonID Changed__DelegateSignature(struct FGuid New SeasonID); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.On SeasonID Changed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On ActiveSeason Changed__DelegateSignature(struct UPremierSeasonModelOld* New ActiveSeason); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.On ActiveSeason Changed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On SeasonID To Model Changed__DelegateSignature(struct TMap<struct FGuid, struct UPremierSeasonModelOld*> New SeasonID To Model); // Function VM_PremierStageComboBox.VM_PremierStageComboBox_C.On SeasonID To Model Changed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

