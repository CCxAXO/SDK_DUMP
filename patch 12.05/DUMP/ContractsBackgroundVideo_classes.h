// WidgetBlueprintGeneratedClass ContractsBackgroundVideo.ContractsBackgroundVideo_C
// Size: 0x358 (Inherited: 0x318)
struct UContractsBackgroundVideo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* StaticBackground; // 0x320(0x08)
	struct UImage* VideoTarget; // 0x328(0x08)
	struct UScrollBox* WheelInterceptBox-SeeComment; // 0x330(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x338(0x08)
	struct UFileMediaSource* SpecialContractSource; // 0x340(0x08)
	enum class EContractType ContractType; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UFileMediaSource* BattlepassSource; // 0x350(0x08)

	void Init(enum class EContractType ContractType); // Function ContractsBackgroundVideo.ContractsBackgroundVideo_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function ContractsBackgroundVideo.ContractsBackgroundVideo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ContractsBackgroundVideo.ContractsBackgroundVideo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ContractsBackgroundVideo.ContractsBackgroundVideo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleMediaOpened(struct FString OpenedUrl); // Function ContractsBackgroundVideo.ContractsBackgroundVideo_C.HandleMediaOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContractsBackgroundVideo(int32_t EntryPoint); // Function ContractsBackgroundVideo.ContractsBackgroundVideo_C.ExecuteUbergraph_ContractsBackgroundVideo // (Final|UbergraphFunction) // @ game+0x1af5410
};

