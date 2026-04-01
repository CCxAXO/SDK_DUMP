// BlueprintGeneratedClass TimedBomb.TimedBomb_C
// Size: 0x6e0 (Inherited: 0x6b8)
struct ATimedBomb_C : APlantedBomb_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	double FirstBombTickSpeedUpTimeRemaining; // 0x6c0(0x08)
	double SecondBombTickSpeedUpTimeRemaining; // 0x6c8(0x08)
	double ThirdBombTickSpeedUpTimeRemaining; // 0x6d0(0x08)
	double DetonationBombTickSpeedUpTimeRemaining; // 0x6d8(0x08)

	void AuthUpdateBombTickState(); // Function TimedBomb.TimedBomb_C.AuthUpdateBombTickState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function TimedBomb.TimedBomb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function TimedBomb.TimedBomb_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void AuthBeep(); // Function TimedBomb.TimedBomb_C.AuthBeep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TimedBomb(int32_t EntryPoint); // Function TimedBomb.TimedBomb_C.ExecuteUbergraph_TimedBomb // (Final|UbergraphFunction) // @ game+0x1b42740
};

