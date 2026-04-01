// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8 {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// Size: 0x58 (Inherited: 0x00)
struct FEyeTrackerGazeData {
	struct FVector GazeOrigin; // 0x00(0x18)
	struct FVector GazeDirection; // 0x18(0x18)
	struct FVector FixationPoint; // 0x30(0x18)
	float ConfidenceValue; // 0x48(0x04)
	bool bIsLeftEyeBlink; // 0x4c(0x01)
	bool bIsRightEyeBlink; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	float LeftPupilDiameter; // 0x50(0x04)
	float RightPupilDiameter; // 0x54(0x04)
};

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// Size: 0x80 (Inherited: 0x00)
struct FEyeTrackerStereoGazeData {
	struct FVector LeftEyeOrigin; // 0x00(0x18)
	struct FVector LeftEyeDirection; // 0x18(0x18)
	struct FVector RightEyeOrigin; // 0x30(0x18)
	struct FVector RightEyeDirection; // 0x48(0x18)
	struct FVector FixationPoint; // 0x60(0x18)
	float ConfidenceValue; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

