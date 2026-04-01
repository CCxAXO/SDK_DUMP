// WidgetBlueprintGeneratedClass Coach.Coach_C
// Size: 0x348 (Inherited: 0x318)
struct UCoach_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UImage* CoachIcon; // 0x328(0x08)
	struct UPlayerNameWidget_C* PlayerNameWidget; // 0x330(0x08)
	enum class EPregameTeamID PregameTeamID; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UPregameViewModel* PregameViewModel; // 0x340(0x08)

	void Init(struct UPregameViewModel* PregameViewModel); // Function Coach.Coach_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateContents(); // Function Coach.Coach_C.UpdateContents // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCoachAdded(struct UPregamePlayerModel* Player); // Function Coach.Coach_C.OnCoachAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Coach(int32_t EntryPoint); // Function Coach.Coach_C.ExecuteUbergraph_Coach // (Final|UbergraphFunction) // @ game+0x1b42740
};

