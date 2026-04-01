// Class CinematicCamera.CameraRig_Crane
// Size: 0x490 (Inherited: 0x460)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x460(0x04)
	float CraneYaw; // 0x464(0x04)
	float CraneArmLength; // 0x468(0x04)
	bool bLockMountPitch; // 0x46c(0x01)
	bool bLockMountYaw; // 0x46d(0x01)
	char pad_46E[0x2]; // 0x46e(0x02)
	struct USceneComponent* TransformComponent; // 0x470(0x08)
	struct USceneComponent* CraneYawControl; // 0x478(0x08)
	struct USceneComponent* CranePitchControl; // 0x480(0x08)
	struct USceneComponent* CraneCameraMount; // 0x488(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x480 (Inherited: 0x460)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x460(0x04)
	bool bLockOrientationToRail; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct USceneComponent* TransformComponent; // 0x468(0x08)
	struct USplineComponent* RailSplineComponent; // 0x470(0x08)
	struct USceneComponent* RailCameraMount; // 0x478(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3ae0100
};

// Class CinematicCamera.CineCameraActor
// Size: 0xd10 (Inherited: 0xc90)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0xc90(0x70)
	char pad_D00[0x10]; // 0xd00(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae0ea0
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xd00 (Inherited: 0xbe0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xbe0(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0xbec(0x0c)
	struct FCameraLensSettings LensSettings; // 0xbf8(0x1c)
	char pad_C14[0x4]; // 0xc14(0x04)
	struct FCameraFocusSettings FocusSettings; // 0xc18(0x68)
	struct FPlateCropSettings CropSettings; // 0xc80(0x04)
	float CurrentFocalLength; // 0xc84(0x04)
	float CurrentAperture; // 0xc88(0x04)
	float CurrentFocusDistance; // 0xc8c(0x04)
	char bOverride_CustomNearClippingPlane : 1; // 0xc90(0x01)
	char pad_C90_1 : 7; // 0xc90(0x01)
	char pad_C91[0x3]; // 0xc91(0x03)
	float CustomNearClippingPlane; // 0xc94(0x04)
	char pad_C98[0x8]; // 0xc98(0x08)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0xca0(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0xcb0(0x10)
	struct FString DefaultFilmbackPresetName; // 0xcc0(0x10)
	struct FString DefaultFilmbackPreset; // 0xcd0(0x10)
	struct FString DefaultLensPresetName; // 0xce0(0x10)
	float DefaultLensFocalLength; // 0xcf0(0x04)
	float DefaultLensFStop; // 0xcf4(0x04)
	char pad_CF8[0x8]; // 0xcf8(0x08)

	void SetLensSettings(struct FCameraLensSettings& NewLensSettings); // Function CinematicCamera.CineCameraComponent.SetLensSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ae2d20
	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ae1fa0
	void SetFocusSettings(struct FCameraFocusSettings& NewFocusSettings); // Function CinematicCamera.CineCameraComponent.SetFocusSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ae2b80
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ae22a0
	void SetFilmback(struct FCameraFilmbackSettings& NewFilmback); // Function CinematicCamera.CineCameraComponent.SetFilmback // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ae2e50
	void SetCustomNearClippingPlane(float NewCustomNearClippingPlane); // Function CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ae2780
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ae2870
	void SetCurrentAperture(float NewCurrentAperture); // Function CinematicCamera.CineCameraComponent.SetCurrentAperture // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ae2970
	void SetCropSettings(struct FPlateCropSettings& NewCropSettings); // Function CinematicCamera.CineCameraComponent.SetCropSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ae2a70
	void SetCropPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetCropPresetByName // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ae1cf0
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae26b0
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3ae1860
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae20d0
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae2750
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3ae1aa0
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae2520
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae23e0
	struct FString GetCropPresetName(); // Function CinematicCamera.CineCameraComponent.GetCropPresetName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae1e20
};

// Class CinematicCamera.CineCameraSettings
// Size: 0xc0 (Inherited: 0x48)
struct UCineCameraSettings : UDeveloperSettings {
	struct FString DefaultLensPresetName; // 0x48(0x10)
	float DefaultLensFocalLength; // 0x58(0x04)
	float DefaultLensFStop; // 0x5c(0x04)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x60(0x10)
	struct FString DefaultFilmbackPreset; // 0x70(0x10)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x80(0x10)
	struct FString DefaultCropPresetName; // 0x90(0x10)
	struct TArray<struct FNamedPlateCropPreset> CropPresets; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)

	void SetLensPresets(struct TArray<struct FNamedLensPreset>& InLensPresets); // Function CinematicCamera.CineCameraSettings.SetLensPresets // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x3ae6330
	void SetFilmbackPresets(struct TArray<struct FNamedFilmbackPreset>& InFilmbackPresets); // Function CinematicCamera.CineCameraSettings.SetFilmbackPresets // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x3ae5f00
	void SetDefaultLensPresetName(struct FString InDefaultLensPresetName); // Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName // (Final|Native|Private|BlueprintCallable) // @ game+0x3ae6750
	void SetDefaultLensFStop(float InDefaultLensFStop); // Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop // (Final|Native|Private|BlueprintCallable) // @ game+0x3ae6530
	void SetDefaultLensFocalLength(float InDefaultLensFocalLength); // Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength // (Final|Native|Private|BlueprintCallable) // @ game+0x3ae6640
	void SetDefaultFilmbackPreset(struct FString InDefaultFilmbackPreset); // Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset // (Final|Native|Private|BlueprintCallable) // @ game+0x3ae6150
	void SetDefaultCropPresetName(struct FString InDefaultCropPresetName); // Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName // (Final|Native|Private|BlueprintCallable) // @ game+0x3ae5d20
	void SetCropPresets(struct TArray<struct FNamedPlateCropPreset>& InCropPresets); // Function CinematicCamera.CineCameraSettings.SetCropPresets // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x3ae5ac0
	struct TArray<struct FString> GetLensPresetNames(); // Function CinematicCamera.CineCameraSettings.GetLensPresetNames // (Final|Native|Private|Const) // @ game+0x3ae5980
	bool GetLensPresetByName(struct FString PresetName, struct FCameraLensSettings& LensSettings); // Function CinematicCamera.CineCameraSettings.GetLensPresetByName // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ae6e10
	struct TArray<struct FString> GetFilmbackPresetNames(); // Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames // (Final|Native|Private|Const) // @ game+0x3ae5840
	bool GetFilmbackPresetByName(struct FString PresetName, struct FCameraFilmbackSettings& FilmbackSettings); // Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ae6bd0
	struct TArray<struct FString> GetCropPresetNames(); // Function CinematicCamera.CineCameraSettings.GetCropPresetNames // (Final|Native|Private|Const) // @ game+0x3ae5700
	bool GetCropPresetByName(struct FString PresetName, struct FPlateCropSettings& CropSettings); // Function CinematicCamera.CineCameraSettings.GetCropPresetByName // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ae69a0
	struct UCineCameraSettings* GetCineCameraSettings(); // Function CinematicCamera.CineCameraSettings.GetCineCameraSettings // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3ae6930
};

