// BlueprintGeneratedClass AnnouncerVOComponent.AnnouncerVOComponent_C
// Size: 0x1d2 (Inherited: 0x1d1)
struct UAnnouncerVOComponent_C : UBaseVOComponent_C {
	enum class EAresTeamRole AnnouncerRole; // 0x1d1(0x01)

	void PlayAudio(struct UAkAudioEvent* event, struct TArray<bool>& Switches, int32_t RandomSeed, struct AShooterCharacter* VOThrowTargetCharacter, struct UAresAudioComponent*& AudioComponent); // Function AnnouncerVOComponent.AnnouncerVOComponent_C.PlayAudio // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AudibleToMe(bool ToSelf, bool ToAllies, bool ToEnemies, bool ToSpecificAllies, double Must Be In Range To Start, struct TArray<struct AShooterCharacter*>& SpecificAllies, bool& ShouldPlay); // Function AnnouncerVOComponent.AnnouncerVOComponent_C.AudibleToMe // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void ShouldInterrupt(enum class VOPriorityEnum New, enum class VOPriorityEnum Current, bool& Should Interrupt); // Function AnnouncerVOComponent.AnnouncerVOComponent_C.ShouldInterrupt // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
};

