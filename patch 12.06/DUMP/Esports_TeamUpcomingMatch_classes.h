// WidgetBlueprintGeneratedClass Esports_TeamUpcomingMatch.Esports_TeamUpcomingMatch_C
// Size: 0x330 (Inherited: 0x318)
struct UEsports_TeamUpcomingMatch_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* LeftTeamLogo; // 0x320(0x08)
	struct UImage* RightTeamLogo; // 0x328(0x08)

	void Set Match Info(struct FMatchDTO Match, int32_t HomeTeamIndex, struct TMap<struct FString, struct UTexture2DDynamic*> TeamLogos); // Function Esports_TeamUpcomingMatch.Esports_TeamUpcomingMatch_C.Set Match Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Esports_TeamUpcomingMatch.Esports_TeamUpcomingMatch_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Esports_TeamUpcomingMatch(int32_t EntryPoint); // Function Esports_TeamUpcomingMatch.Esports_TeamUpcomingMatch_C.ExecuteUbergraph_Esports_TeamUpcomingMatch // (Final|UbergraphFunction) // @ game+0x1b42740
};

