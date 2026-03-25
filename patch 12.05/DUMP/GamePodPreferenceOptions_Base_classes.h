// WidgetBlueprintGeneratedClass GamePodPreferenceOptions_Base.GamePodPreferenceOptions_Base_C
// Size: 0x380 (Inherited: 0x318)
struct UGamePodPreferenceOptions_Base_C : UUserWidget {
	struct FText OwnerViewTextValue; // 0x318(0x18)
	struct FText FollowerViewTextValue; // 0x330(0x18)
	struct UPartyModel* Party Model; // 0x348(0x08)
	struct UPartyViewController* View Controller; // 0x350(0x08)
	bool Is Editable; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FString Subject; // 0x360(0x10)
	bool Is Self; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UPartyPlayerModel* Player Party Model; // 0x378(0x08)

	struct UWidget* OnGetMenuContent(); // Function GamePodPreferenceOptions_Base.GamePodPreferenceOptions_Base_C.OnGetMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

