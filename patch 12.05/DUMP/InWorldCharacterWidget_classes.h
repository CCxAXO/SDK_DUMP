// WidgetBlueprintGeneratedClass InWorldCharacterWidget.InWorldCharacterWidget_C
// Size: 0x371 (Inherited: 0x330)
struct UInWorldCharacterWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UBackgroundBlur* BackgroundBlur_73; // 0x338(0x08)
	struct UTextBlock* CharacterName; // 0x340(0x08)
	struct UProgressBar* HealthBar; // 0x348(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x350(0x08)
	struct AAresPlayerStateBase* OwningPlayerState; // 0x358(0x08)
	struct AShooterCharacter* FirstPersonShooterCharacter; // 0x360(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x368(0x08)
	bool bConstructed; // 0x370(0x01)

	bool IsObserver(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.IsObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetHealthPercent(double& Percent); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.GetHealthPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateHealth(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.UpdateHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideHealth(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.HideHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveOwningCharacter(struct AShooterCharacter* Shooter Character); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.ReceiveOwningCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCanSeeHealthBarsChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnCanSeeHealthBarsChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowHealth(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.ShowHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveOwningPlayerState(struct AAresPlayerStateBase* Player State); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.ReceiveOwningPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDamageSectionDirtied(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnDamageSectionDirtied // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDamageSectionDestroyed(struct UDamageableComponent* DamageHandler, struct UDamageSectionComponent* Section, struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnDamageSectionDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCinemtaticModeChanged(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSpawnedCharacterChanged(struct AShooterCharacter* New Value); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnSpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerNameChanged(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.OnPlayerNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UnbindCurrentCharacterAttributeChange(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.UnbindCurrentCharacterAttributeChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindCurrentCharacterAttributeChange(); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.BindCurrentCharacterAttributeChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InWorldCharacterWidget(int32_t EntryPoint); // Function InWorldCharacterWidget.InWorldCharacterWidget_C.ExecuteUbergraph_InWorldCharacterWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

