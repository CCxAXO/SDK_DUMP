// Class PlatformUI.BinaryAsset
// Size: 0x40 (Inherited: 0x30)
struct UBinaryAsset : UObject {
	struct TArray<char> Asset; // 0x30(0x10)
};

// Class PlatformUI.PlatformUI
// Size: 0x398 (Inherited: 0x318)
struct UPlatformUI : UUserWidget {
	struct FString SdkInstanceId; // 0x318(0x10)
	struct UPlatformUIPrimaryDataAsset* PrimaryAsset; // 0x328(0x08)
	char pad_330[0x68]; // 0x330(0x68)
};

// Class PlatformUI.PlatformUIFRE
// Size: 0x560 (Inherited: 0x398)
struct UPlatformUIFRE : UPlatformUI {
	struct FLinearColor AccentColor; // 0x398(0x10)
	struct FLinearColor AccentColor2; // 0x3a8(0x10)
	struct FLinearColor CardOpenGradientStartColor; // 0x3b8(0x10)
	struct FLinearColor CardOpenGradientEndColor; // 0x3c8(0x10)
	struct FLinearColor LoadingFillGradientStartColor; // 0x3d8(0x10)
	struct FLinearColor LoadingFillGradientEndColor; // 0x3e8(0x10)
	struct FLinearColor LoadingTextColor; // 0x3f8(0x10)
	struct UTexture* BackgroundTexture; // 0x408(0x08)
	struct UXamlAsset* GameLogoBig; // 0x410(0x08)
	struct UXamlAsset* GameLogoSmall; // 0x418(0x08)
	struct FString ProductName; // 0x420(0x10)
	float AuthLoadingTextAnchorX; // 0x430(0x04)
	float AuthLoadingTextAnchorY; // 0x434(0x04)
	float AuthLoadingTextPositionX; // 0x438(0x04)
	float AuthLoadingTextPositionY; // 0x43c(0x04)
	float AuthLoadingIndicatorAnchorX; // 0x440(0x04)
	float AuthLoadingIndicatorAnchorY; // 0x444(0x04)
	float AuthLoadingIndicatorPositionX; // 0x448(0x04)
	float AuthLoadingIndicatorPositionY; // 0x44c(0x04)
	enum class LoadingIndicatorType AuthLoadingIndicatorType; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	float AuthLoadingWidth; // 0x454(0x04)
	float AuthLoadingIndicatorHeight; // 0x458(0x04)
	bool bDisplayGamepadDisconnectNotifications; // 0x45c(0x01)
	char pad_45D[0x103]; // 0x45d(0x103)

	bool SetHotfixAvailability(enum class EPlatformUIHotFixAvailability HotfixAvailability); // Function PlatformUI.PlatformUIFRE.SetHotfixAvailability // (Final|Native|Public|BlueprintCallable) // @ game+0x7110550
};

// Class PlatformUI.PlatformUIPrimaryDataAsset
// Size: 0x88 (Inherited: 0x38)
struct UPlatformUIPrimaryDataAsset : UPrimaryDataAsset {
	struct TMap<struct FString, struct UObject*> Assets; // 0x38(0x50)
};

// Class PlatformUI.XamlAsset
// Size: 0x40 (Inherited: 0x30)
struct UXamlAsset : UObject {
	struct FString String; // 0x30(0x10)
};

