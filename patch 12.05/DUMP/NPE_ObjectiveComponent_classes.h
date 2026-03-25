// BlueprintGeneratedClass NPE_ObjectiveComponent.NPE_ObjectiveComponent_C
// Size: 0x2c0 (Inherited: 0x218)
struct UNPE_ObjectiveComponent_C : UBaseObjectiveComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x218(0x08)
	struct FName OnboardingObjectiveID; // 0x220(0x0c)
	bool IsNPEProgressionObjective; // 0x22c(0x01)
	bool bShouldUpdateMissionHUD; // 0x22d(0x01)
	char pad_22E[0x2]; // 0x22e(0x02)
	struct FName InputActionName_Console; // 0x230(0x0c)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct FText BeforeInputActionText_Console; // 0x240(0x18)
	struct FText AfterInputActionText_Console; // 0x258(0x18)
	struct FName InputActionName_Desktop; // 0x270(0x0c)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FText BeforeInputActionText_Desktop; // 0x280(0x18)
	struct FText AfterInputActionText_Desktop; // 0x298(0x18)
	struct FMulticastInlineDelegate OnPromptTextUpdated; // 0x2b0(0x10)

	void OnObjectiveActivated_PlatformVisibility(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function NPE_ObjectiveComponent.NPE_ObjectiveComponent_C.OnObjectiveActivated_PlatformVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AutoCompleteOnServer(); // Function NPE_ObjectiveComponent.NPE_ObjectiveComponent_C.AutoCompleteOnServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function NPE_ObjectiveComponent.NPE_ObjectiveComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateActionTextWithNotify(struct FName InputActionNameConsole, struct FText BeforeActionTextConsole, struct FText AfterActionTextConsole, struct FName InputActionNameDesktop, struct FText BeforeActionNameDesktop, struct FText AfterActionNameDesktop); // Function NPE_ObjectiveComponent.NPE_ObjectiveComponent_C.UpdateActionTextWithNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_NPE_ObjectiveComponent(int32_t EntryPoint); // Function NPE_ObjectiveComponent.NPE_ObjectiveComponent_C.ExecuteUbergraph_NPE_ObjectiveComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnPromptTextUpdated__DelegateSignature(); // Function NPE_ObjectiveComponent.NPE_ObjectiveComponent_C.OnPromptTextUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

