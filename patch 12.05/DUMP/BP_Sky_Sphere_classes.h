// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// Size: 0x518 (Inherited: 0x460)
struct ABP_Sky_Sphere_C : AActor {
	struct UStaticMeshComponent* Sky Sphere mesh; // 0x460(0x08)
	struct USceneComponent* base; // 0x468(0x08)
	struct UMaterialInstanceDynamic* Sky material; // 0x470(0x08)
	bool Refresh material; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct ADirectionalLight* Directional light actor; // 0x480(0x08)
	bool Colors determined by sun position; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	double Sun height; // 0x490(0x08)
	double Sun brightness; // 0x498(0x08)
	double Horizon falloff; // 0x4a0(0x08)
	struct FLinearColor Zenith color; // 0x4a8(0x10)
	struct FLinearColor Horizon color; // 0x4b8(0x10)
	struct FLinearColor Cloud Color; // 0x4c8(0x10)
	struct FLinearColor Overall Color; // 0x4d8(0x10)
	double Cloud speed; // 0x4e8(0x08)
	double Cloud oPACITY; // 0x4f0(0x08)
	double Stars brightness; // 0x4f8(0x08)
	struct UCurveLinearColor* Horizon color curve; // 0x500(0x08)
	struct UCurveLinearColor* Zenith color curve; // 0x508(0x08)
	struct UCurveLinearColor* Cloud color curve; // 0x510(0x08)

	void UpdateSunDirection(); // Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UserConstructionScript(); // Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

