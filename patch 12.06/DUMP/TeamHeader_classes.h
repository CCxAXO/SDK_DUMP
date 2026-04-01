// WidgetBlueprintGeneratedClass TeamHeader.TeamHeader_C
// Size: 0x370 (Inherited: 0x318)
struct UTeamHeader_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* ArrowBG; // 0x320(0x08)
	struct UImage* Arrowfg; // 0x328(0x08)
	struct UImage* Background; // 0x330(0x08)
	struct UHorizontalBox* content; // 0x338(0x08)
	struct ULockInCounter_C* LockInCounter; // 0x340(0x08)
	struct UImage* TeamIconFill; // 0x348(0x08)
	struct UImage* TeamIconOutline; // 0x350(0x08)
	struct UTextBlock* TeamRoleName; // 0x358(0x08)
	enum class EPregameTeamID Team; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UPregameTeamModel* ViewModel; // 0x368(0x08)

	void UpdateNumLockedIn(int32_t NumLockedIn); // Function TeamHeader.TeamHeader_C.UpdateNumLockedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPregameTeamModel* ViewModel); // Function TeamHeader.TeamHeader_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateRole(); // Function TeamHeader.TeamHeader_C.UpdateRole // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TeamHeader.TeamHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TeamHeader(int32_t EntryPoint); // Function TeamHeader.TeamHeader_C.ExecuteUbergraph_TeamHeader // (Final|UbergraphFunction) // @ game+0x1b42740
};

