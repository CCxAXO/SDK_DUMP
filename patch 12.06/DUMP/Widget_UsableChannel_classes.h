// WidgetBlueprintGeneratedClass Widget_UsableChannel.Widget_UsableChannel_C
// Size: 0x368 (Inherited: 0x358)
struct UWidget_UsableChannel_C : UBaseUsableHUDComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UUniversalChargeBar_C* UniversalChargeBar; // 0x360(0x08)

	void HandleCurrentlyInUseUpdate(bool CurrentlyInUse); // Function Widget_UsableChannel.Widget_UsableChannel_C.HandleCurrentlyInUseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUsingTimeUpdate(double CurrentUsingTime, double MaxUsingTime); // Function Widget_UsableChannel.Widget_UsableChannel_C.HandleUsingTimeUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Widget_UsableChannel.Widget_UsableChannel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_UsableChannel(int32_t EntryPoint); // Function Widget_UsableChannel.Widget_UsableChannel_C.ExecuteUbergraph_Widget_UsableChannel // (Final|UbergraphFunction) // @ game+0x1b42740
};

