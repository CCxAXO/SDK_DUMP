// WidgetBlueprintGeneratedClass WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_RewardThumbnail_Interface_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOfferDTO* Offer DTO; // 0x3e8(0x08)
	struct UVM_StoreOffer_C* VM_StoreOffer; // 0x3f0(0x08)
	struct UVM_StorefrontItem_C* VM_StorefrontItem; // 0x3f8(0x08)

	void OnParentUnhovered(); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.OnParentUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnParentHovered(); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.OnParentHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateColorAndOpacity(struct FLinearColor NewColorAndOpacity); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.UpdateColorAndOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLogoIconTransformChanged(struct FWidgetTransform InLogoIconTransform); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.OnLogoIconTransformChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLogoIconChanged(struct UTexture* LogoIcon); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.OnLogoIconChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRewardChanged(struct URewardModel* Reward); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.OnRewardChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.InitViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.BindEvents // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RewardThumbnail_Interface(int32_t EntryPoint); // Function WBP_Panel_RewardThumbnail_Interface.WBP_Panel_RewardThumbnail_Interface_C.ExecuteUbergraph_WBP_Panel_RewardThumbnail_Interface // (Final|UbergraphFunction) // @ game+0x1af5410
};

