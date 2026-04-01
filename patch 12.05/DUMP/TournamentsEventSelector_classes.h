// WidgetBlueprintGeneratedClass TournamentsEventSelector.TournamentsEventSelector_C
// Size: 0x330 (Inherited: 0x318)
struct UTournamentsEventSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedComboBox_C* SharedComboBox; // 0x320(0x08)
	struct UPartyModel* Party Model; // 0x328(0x08)

	void Get Event Model Display Text(struct UPremierEventModelOld* PremierEventModel, struct FText& DisplayText); // Function TournamentsEventSelector.TournamentsEventSelector_C.Get Event Model Display Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ShouldUpdateEventID(struct FString PremierEventID, struct UPartyModel* Party Model, bool& ShouldUpdateEventID); // Function TournamentsEventSelector.TournamentsEventSelector_C.ShouldUpdateEventID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLeaderView(); // Function TournamentsEventSelector.TournamentsEventSelector_C.UpdateLeaderView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSelectedOption(); // Function TournamentsEventSelector.TournamentsEventSelector_C.UpdateSelectedOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateOptions(); // Function TournamentsEventSelector.TournamentsEventSelector_C.UpdateOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TournamentsEventSelector.TournamentsEventSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnActiveSeasonChanged(); // Function TournamentsEventSelector.TournamentsEventSelector_C.OnActiveSeasonChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartyOwnerChanged(bool NewValue); // Function TournamentsEventSelector.TournamentsEventSelector_C.OnPartyOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartyIDChanged(struct FString NewValue); // Function TournamentsEventSelector.TournamentsEventSelector_C.OnPartyIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void NoOp(); // Function TournamentsEventSelector.TournamentsEventSelector_C.NoOp // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void NoOpError(enum class EPartyErrorEnum PartyErrorEnum); // Function TournamentsEventSelector.TournamentsEventSelector_C.NoOpError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEventSelected(struct FString Item); // Function TournamentsEventSelector.TournamentsEventSelector_C.OnEventSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPremierEventIDChanged(struct FString NewValue); // Function TournamentsEventSelector.TournamentsEventSelector_C.OnPremierEventIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsRosterPartyChanged(bool NewValue); // Function TournamentsEventSelector.TournamentsEventSelector_C.OnIsRosterPartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsEventSelector(int32_t EntryPoint); // Function TournamentsEventSelector.TournamentsEventSelector_C.ExecuteUbergraph_TournamentsEventSelector // (Final|UbergraphFunction) // @ game+0x1af5410
};

