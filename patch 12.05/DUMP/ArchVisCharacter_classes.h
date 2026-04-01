// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x8c0 (Inherited: 0x860)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x858(0x10)
	struct FString LookUpAtRateAxisName; // 0x868(0x10)
	struct FString TurnAxisName; // 0x878(0x10)
	struct FString TurnAtRateAxisName; // 0x888(0x10)
	struct FString MoveForwardAxisName; // 0x898(0x10)
	struct FString MoveRightAxisName; // 0x8a8(0x10)
	float MouseSensitivityScale_Pitch; // 0x8b8(0x04)
	float MouseSensitivityScale_Yaw; // 0x8bc(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0x1110 (Inherited: 0x1080)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0x1078(0x18)
	struct FRotator RotationalDeceleration; // 0x1090(0x18)
	struct FRotator MaxRotationalVelocity; // 0x10a8(0x18)
	float MinPitch; // 0x10c0(0x04)
	float MaxPitch; // 0x10c4(0x04)
	float WalkingFriction; // 0x10c8(0x04)
	float WalkingSpeed; // 0x10cc(0x04)
	float WalkingAcceleration; // 0x10d0(0x04)
	char pad_10DC[0x34]; // 0x10dc(0x34)
};

