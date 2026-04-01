// BlueprintGeneratedClass VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C
// Size: 0x110 (Inherited: 0x90)
struct UVM_CharacterSelectGameDetails_C : UAresViewModelBase {
	struct UPregameViewModel* PregameModel; // 0x90(0x08)
	struct UGameModeUIData* ModeUIData; // 0x98(0x08)
	struct FMulticastInlineDelegate OnMapTextChanged; // 0xa0(0x10)
	struct UMatchmakingQueueDataAsset* QueueDataAsset; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnModeQueueTextChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnModeImageChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnMapImageChanged; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnIsLocalPlayerCoachChanged; // 0xe8(0x10)
	bool bIsLocalPlayerCoach; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FMulticastInlineDelegate OnHideDevAgentsChanged; // 0x100(0x10)

	void GetIsLocalPlayerCoach(bool& Result); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.GetIsLocalPlayerCoach // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIsCoach(bool NewIsCoach); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.SetIsCoach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetModeText(); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.SetModeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMode(struct UGameModeHandle* GameModeHandle); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.SetMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetQueue(struct UMatchmakingQueueDataAsset* QueueAsset); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.SetQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMap(struct UMapHandle* MapHandle); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.SetMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewController* PregameController); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHideDevAgentsChanged__DelegateSignature(bool HideDevAgents); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.OnHideDevAgentsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsLocalPlayerCoachChanged__DelegateSignature(); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.OnIsLocalPlayerCoachChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMapImageChanged__DelegateSignature(struct UObject* NewImage); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.OnMapImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnModeImageChanged__DelegateSignature(struct UObject* NewIcon); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.OnModeImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnModeQueueTextChanged__DelegateSignature(struct FText ModeQueueText); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.OnModeQueueTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMapTextChanged__DelegateSignature(struct FText MapText); // Function VM_CharacterSelectGameDetails.VM_CharacterSelectGameDetails_C.OnMapTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

