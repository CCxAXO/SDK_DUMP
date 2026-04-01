// BlueprintGeneratedClass BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C
// Size: 0x83c (Inherited: 0x650)
struct UBaseMinimapComponent_Parent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x08)
	bool Parameters Changed; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)
	struct FVector2D Size; // 0x660(0x10)
	struct FLinearColor ColorAndOpacity; // 0x670(0x10)
	struct FLinearColor EnemyColorAndOpacity; // 0x680(0x10)
	struct FSlateBrush IconBrush; // 0x690(0xd0)
	struct FSlateBrush EnemyIcon; // 0x760(0xd0)
	struct UVisibilityComponent* VisibilityComp; // 0x830(0x08)
	bool ActiveOnMinimap; // 0x838(0x01)
	bool StartActive; // 0x839(0x01)
	bool UseTeamColorAndBrush; // 0x83a(0x01)
	bool bRequiresVisibilityComponent; // 0x83b(0x01)

	void IsOwnerTeamValid(bool& IsValid); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.IsOwnerTeamValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PushLegacySize(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.PushLegacySize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTeamParameters(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateTeamParameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateEnemyBrush(struct FSlateBrush EnemyIcon); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateEnemyBrush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAlignment(struct FVector2D Alignment); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLayer(enum class EAresMinimapLayer MinimapLayer); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateLayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FLinearColor GetColor(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.GetColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct FSlateBrush GetBrush(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.GetBrush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateSizeSpace(enum class EAresMinimapSizeSpace SizeSpace); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateSizeSpace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldBeVisible(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.ShouldBeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateVisibility(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBrush(struct FSlateBrush IconBrush); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateBrush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSize(struct FVector2D Size); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateColor(struct FLinearColor ColorAndOpacity); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.UpdateColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnOwnerEnteredTeamSight_Event_1(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.OnOwnerEnteredTeamSight_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOwnerExitedTeamSight_Event_1(struct AActor* ActorThatExitedTeamSight); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.OnOwnerExitedTeamSight_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamChanged_Event_1(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetActiveOnMinimap(bool Active); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.SetActiveOnMinimap // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MinimapDisabledChanged(); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.MinimapDisabledChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseMinimapComponent_Parent(int32_t EntryPoint); // Function BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C.ExecuteUbergraph_BaseMinimapComponent_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

