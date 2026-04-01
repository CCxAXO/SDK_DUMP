// BlueprintGeneratedClass BombCinematicsManagerComponent.BombCinematicsManagerComponent_C
// Size: 0x210 (Inherited: 0x1d0)
struct UBombCinematicsManagerComponent_C : UCinematicsManagerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)
	double ScoreFieldOfViewDegreesMin; // 0x1d8(0x08)
	double ScoreDistanceFromCameraMin; // 0x1e0(0x08)
	double ScoreFieldOfViewWeight; // 0x1e8(0x08)
	double ScoreDistanceWeight; // 0x1f0(0x08)
	double FOVDotProductMax; // 0x1f8(0x08)
	double ScoreDistanceFromCameraMax; // 0x200(0x08)
	double FOVDotProductMin; // 0x208(0x08)

	float ScoreCamera(struct FCinematicCameraScoreData& CameraToScore); // Function BombCinematicsManagerComponent.BombCinematicsManagerComponent_C.ScoreCamera // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BombCinematicsManagerComponent.BombCinematicsManagerComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombCinematicsManagerComponent(int32_t EntryPoint); // Function BombCinematicsManagerComponent.BombCinematicsManagerComponent_C.ExecuteUbergraph_BombCinematicsManagerComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

