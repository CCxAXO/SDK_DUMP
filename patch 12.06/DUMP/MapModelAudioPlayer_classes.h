// BlueprintGeneratedClass MapModelAudioPlayer.MapModelAudioPlayer_C
// Size: 0x49 (Inherited: 0x38)
struct UMapModelAudioPlayer_C : UObjectWithWorldContext {
	struct TScriptInterface<IUnorderedMapModel> MapModel; // 0x38(0x10)
	bool AudioEnabled; // 0x48(0x01)

	void SetAudioEnabled(bool NewValue); // Function MapModelAudioPlayer.MapModelAudioPlayer_C.SetAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UAkAudioEvent* GetAddedSoundForItem(struct FWildcard Item); // Function MapModelAudioPlayer.MapModelAudioPlayer_C.GetAddedSoundForItem // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void HandleMapModelContentsChanged(struct UObject* Source, struct FUnorderedMapModelChangeEventData& EventData); // Function MapModelAudioPlayer.MapModelAudioPlayer_C.HandleMapModelContentsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindMapModelListeners(); // Function MapModelAudioPlayer.MapModelAudioPlayer_C.UnbindMapModelListeners // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindMapModelListeners(); // Function MapModelAudioPlayer.MapModelAudioPlayer_C.BindMapModelListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMapModel(struct TScriptInterface<IUnorderedMapModel> NewValue); // Function MapModelAudioPlayer.MapModelAudioPlayer_C.SetMapModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

