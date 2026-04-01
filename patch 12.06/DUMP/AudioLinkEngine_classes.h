// Class AudioLinkEngine.AudioLinkBlueprintInterface
// Size: 0x30 (Inherited: 0x30)
struct UAudioLinkBlueprintInterface : UInterface {

	void StopLink(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink // (Native|Public|BlueprintCallable) // @ game+0x3aef7d0
	void SetLinkSound(struct USoundBase* NewSound); // Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound // (Native|Public|BlueprintCallable) // @ game+0x3aef900
	void PlayLink(float StartTime); // Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink // (Native|Public|BlueprintCallable) // @ game+0x3aef800
	bool IsLinkPlaying(); // Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aef790
};

