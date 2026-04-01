// WidgetBlueprintGeneratedClass WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C
// Size: 0x1bf9 (Inherited: 0x1b88)
struct UWBP_Panel_FavoriteIndicator_C : UWBP_Button_Icon_Primary_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b88(0x08)
	struct UVM_FavoriteItem_C* VM_FavoriteItem; // 0x1b90(0x08)
	struct FAresConditionalInputAction FavoriteAction; // 0x1b98(0x28)
	bool InputActionEnabled; // 0x1bc0(0x01)
	char pad_1BC1[0x7]; // 0x1bc1(0x07)
	struct FText FavoriteText; // 0x1bc8(0x18)
	struct FText UnfavoriteText; // 0x1be0(0x18)
	enum class Enum_WBP_Panel_FavoriteIndicator_VisibilityOptions VisibilityBehavior; // 0x1bf8(0x01)

	void InitFromReward(struct URewardModel* RewardModel); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.InitFromReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ToggleVisibilityOnFavoritedState(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.ToggleVisibilityOnFavoritedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFavoriteActionName(bool IsFavorited); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.UpdateFavoriteActionName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFavoriteActionActive(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.UpdateFavoriteActionActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetInputActionEnabled(bool InputActionEnabled); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.SetInputActionEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFavoriteAction(struct FName ActionName); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.HandleFavoriteAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupCIACallbacks(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.SetupCIACallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Any VMHas Valid Data Changed(bool NewValue); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.Handle Any VMHas Valid Data Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ToggleVisibilityOnFavoriteCandidacy(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.ToggleVisibilityOnFavoriteCandidacy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Visibility(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.Update Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Is Favorite Candidate Changed(bool IsFavoriteCandidateChanged); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.Handle Is Favorite Candidate Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Is Favorited Changed(bool IsFavorited); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.Handle Is Favorited Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromHandle(struct UBaseHandle* BaseHandle); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.InitFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnCurrentTextStyleChanged(); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_FavoriteIndicator(int32_t EntryPoint); // Function WBP_Panel_FavoriteIndicator.WBP_Panel_FavoriteIndicator_C.ExecuteUbergraph_WBP_Panel_FavoriteIndicator // (Final|UbergraphFunction) // @ game+0x1b42740
};

