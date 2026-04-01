// BlueprintGeneratedClass VM_SingleMatMenuTile.VM_SingleMatMenuTile_C
// Size: 0x2f0 (Inherited: 0x90)
struct UVM_SingleMatMenuTile_C : UAresViewModelBase {
	struct FMulticastInlineDelegate EnabledStateChanged; // 0x90(0x10)
	bool IsHovered; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	double HoldPercentage; // 0xa8(0x08)
	struct FMulticastInlineDelegate HoldPercentageChanged; // 0xb0(0x10)
	struct FText OptionName; // 0xc0(0x18)
	struct FText OptionDescription; // 0xd8(0x18)
	struct FText OptionFooter; // 0xf0(0x18)
	bool IsEnabled; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FText DisabledDescription; // 0x110(0x18)
	char pad_128[0x8]; // 0x128(0x08)
	struct FSlateBrush OptionBackground; // 0x130(0xd0)
	struct FSlateBrush OptionIcon; // 0x200(0xd0)
	struct FMulticastInlineDelegate HoveredStateChanged; // 0x2d0(0x10)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x2e0(0x08)
	struct UBP_ContentTileTall_ListItem_C* ContentData; // 0x2e8(0x08)

	void SetInitalValues(); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.SetInitalValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToContentData(bool Bind); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.BindToContentData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UBP_ContentTileTall_ListItem_C* ContentData, struct UMaterialInstanceDynamic* MaterialInstance); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateMaterialBackground(struct UTexture* Texture); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.UpdateMaterialBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsHovered(bool NewValue); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.SetIsHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetIsHovered(bool& Value); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.GetIsHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateMaterialStates(); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.UpdateMaterialStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHoldPercentage(double NewValue); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.SetHoldPercentage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetHoldPercentage(double& Value); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.GetHoldPercentage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetIsEnabled(bool NewValue); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.SetIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetIsEnabled(bool& Value); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.GetIsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HoveredStateChanged__DelegateSignature(bool NewValue); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.HoveredStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HoldPercentageChanged__DelegateSignature(double NewValue); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.HoldPercentageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnabledStateChanged__DelegateSignature(bool NewValue); // Function VM_SingleMatMenuTile.VM_SingleMatMenuTile_C.EnabledStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

