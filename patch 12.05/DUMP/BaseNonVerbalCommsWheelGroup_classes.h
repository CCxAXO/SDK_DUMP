// BlueprintGeneratedClass BaseNonVerbalCommsWheelGroup.BaseNonVerbalCommsWheelGroup_C
// Size: 0x45 (Inherited: 0x30)
struct UBaseNonVerbalCommsWheelGroup_C : UObject {
	struct TArray<struct UBaseNonVerbalCommWheel_C*> Wheels; // 0x30(0x10)
	int32_t InitialShownWheel; // 0x40(0x04)
	enum class ENonVerbalCommSystemName CommSystemForTelemetry; // 0x44(0x01)

	void GetRadialItemFromIndex(int32_t Wheel, int32_t Option, struct UBaseNonVerbalCommWheel_C*& WheelClass, struct UBaseNonVerbalCommRadialItem_C*& RadialItemClass); // Function BaseNonVerbalCommsWheelGroup.BaseNonVerbalCommsWheelGroup_C.GetRadialItemFromIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

