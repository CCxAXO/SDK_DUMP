// BlueprintGeneratedClass BombGameReplayGameEventReciever.BombGameReplayGameEventReciever_C
// Size: 0x40 (Inherited: 0x38)
struct UBombGameReplayGameEventReciever_C : UReplayGameEventReceiver {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x38(0x08)

	void RegisterGameStateForEvents(struct AShooterGameState* GameState); // Function BombGameReplayGameEventReciever.BombGameReplayGameEventReciever_C.RegisterGameStateForEvents // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameReplayGameEventReciever.BombGameReplayGameEventReciever_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombDefused(struct AShooterCharacter* DefusingCharacter); // Function BombGameReplayGameEventReciever.BombGameReplayGameEventReciever_C.OnBombDefused // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombExploded(enum class BombSiteEnum PlantSite); // Function BombGameReplayGameEventReciever.BombGameReplayGameEventReciever_C.OnBombExploded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombGameReplayGameEventReciever(int32_t EntryPoint); // Function BombGameReplayGameEventReciever.BombGameReplayGameEventReciever_C.ExecuteUbergraph_BombGameReplayGameEventReciever // (Final|UbergraphFunction) // @ game+0x1b42740
};

