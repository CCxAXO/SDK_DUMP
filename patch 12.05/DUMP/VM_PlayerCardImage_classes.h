// BlueprintGeneratedClass VM_PlayerCardImage.VM_PlayerCardImage_C
// Size: 0x1a0 (Inherited: 0x98)
struct UVM_PlayerCardImage_C : UVM_PlatformPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct UMaterialInterface* DefaultCardMaterial; // 0xa0(0x08)
	struct UMaterialInterface* DefaultLargeCardMaterial; // 0xa8(0x08)
	struct FName CardArtParameter; // 0xb0(0x0c)
	enum class EPlayerCardImageType PlayerCardImageType; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct UPlayerCardImageSet_C* DesignTimeCardImageSet; // 0xc0(0x08)
	struct UPlayerCardImageSet_C* OfflineCardImageSet; // 0xc8(0x08)
	struct UPlayerCardImageSet_C* MissingAssetCardImageSet; // 0xd0(0x08)
	struct UPlayerCardImageSet_C* ErrorCardImageSet; // 0xd8(0x08)
	struct UPlayerCardDataAsset* CurrentCardAsset; // 0xe0(0x08)
	struct UPlayerCardImageSet_C* CurrentCardImageSet; // 0xe8(0x08)
	struct UPlayerCardImageSet_C* InvalidPlayerCardImageSet; // 0xf0(0x08)
	struct UPlayerCardImageSet_C* LoadingCardImageSet; // 0xf8(0x08)
	struct UPlayerCardImageSet_C* ValorantCardImageSet; // 0x100(0x08)
	struct UPlayerCardImageSet_C* LeagueCardImageSet; // 0x108(0x08)
	struct UPlayerCardImageSet_C* BaconCardImageSet; // 0x110(0x08)
	struct UPlayerCardImageSet_C* KeystoneCardImageSet; // 0x118(0x08)
	struct UPlayerCardImageSet_C* WildriftCardImageSet; // 0x120(0x08)
	struct UPlayerCardImageSet_C* TftCardImageSet; // 0x128(0x08)
	struct UPlayerCardImageSet_C* 2xkoCardImageSet; // 0x130(0x08)
	struct UPlayerCardImageSet_C* RiotMobileCardImageSet; // 0x138(0x08)
	struct UPlayerCardImageSet_C* UnknownProductCardImageSet; // 0x140(0x08)
	struct UPlayerCardImageSet_C* PlayStationNetworkCardImageSet; // 0x148(0x08)
	struct UPlayerCardImageSet_C* XboxNetworkCardImageSet; // 0x150(0x08)
	struct UPlayerCardImageSet_C* QQCardImageSet; // 0x158(0x08)
	struct UPlayerCardImageSet_C* WCardImageSet; // 0x160(0x08)
	struct UPlayerCardImageSet_C* NonRealPlayerCardImageSet; // 0x168(0x08)
	struct FGuid OverridePlayerCardID; // 0x170(0x10)
	struct FPlayerCardPayload PlayerCardPayload; // 0x180(0x10)
	struct FMulticastInlineDelegate OnPlayerCardPayloadChanged; // 0x190(0x10)

	void GetPlayerCardPayload(struct FPlayerCardPayload& PlayerCardPayload); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.GetPlayerCardPayload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetPlayerCardPayload(struct FPlayerCardPayload InPlayerCardPayload); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.SetPlayerCardPayload // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetOnlineNetworkCardImageSet(struct UPlayerCardImageSet_C*& Return Value); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.GetOnlineNetworkCardImageSet // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetOverridePlayerCardID(struct FGuid OverridePlayerCardID); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.SetOverridePlayerCardID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMissingAssetCardImageSet(struct UPlayerCardImageSet_C*& Return Value); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.GetMissingAssetCardImageSet // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetPlayerCardImageType(enum class EPlayerCardImageType PlayerCardImageType); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.SetPlayerCardImageType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDesignTimePlayerCardMaterial(struct UMaterialInterface*& Material); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.GetDesignTimePlayerCardMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void MakePlayerCardMaterialFromDefinition(struct FPlayerCardImageDefinition ImageDefinition, struct UMaterialInstanceDynamic*& MaterialInstance); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.MakePlayerCardMaterialFromDefinition // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void MakePlayerCardMaterialFromImageSet(struct UPlayerCardImageSet_C* Image Set, struct UMaterialInstanceDynamic*& Material Instance); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.MakePlayerCardMaterialFromImageSet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetInternalCardState(struct UPlayerCardDataAsset* CardAsset, struct UPlayerCardImageSet_C* CardImageSet); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.SetInternalCardState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HasBadCardState(bool& bHasBadCardState); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.HasBadCardState // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void TryGetPlayerCardAsset(struct UPlayerCardDataAsset*& PlayerCard, bool& IsValid); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.TryGetPlayerCardAsset // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryGetOverrideImageSet(struct UPlayerCardImageSet_C*& ImageSet, bool& bHasOverride); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.TryGetOverrideImageSet // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryGetOverrideCardAsset(struct UPlayerCardDataAsset*& CardAsset, bool& bIsValid); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.TryGetOverrideCardAsset // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDesiredCardState(struct UPlayerCardDataAsset*& CardAsset, struct UPlayerCardImageSet_C*& CardImageSet); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.GetDesiredCardState // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheckForPlayerCardUpdate(); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.CheckForPlayerCardUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetCardPropertiesFromHandle(struct UPlayerCardHandle* PlayerCardHandle, struct UMaterialInterface*& MaterialInterface, struct UTexture2D*& Art, struct UPlayerCardWidgetBase*& PlayerCardWidgetType); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.GetCardPropertiesFromHandle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void MakePlayerCardHandleLoadOptions(struct FPlayerCardHandleLoadOptions& LoadOptions); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.MakePlayerCardHandleLoadOptions // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnPlayerCardLoaded(struct UPlayerCardHandle* PlayerCardHandle); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.OnPlayerCardLoaded // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshAllData(); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlatformPlayerStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.OnPlatformPlayerStateChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_PlayerCardImage(int32_t EntryPoint); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.ExecuteUbergraph_VM_PlayerCardImage // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnPlayerCardPayloadChanged__DelegateSignature(struct FPlayerCardPayload PlayerCardPayload); // Function VM_PlayerCardImage.VM_PlayerCardImage_C.OnPlayerCardPayloadChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

