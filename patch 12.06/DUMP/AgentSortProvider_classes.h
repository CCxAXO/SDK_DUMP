// BlueprintGeneratedClass AgentSortProvider.AgentSortProvider_C
// Size: 0x50 (Inherited: 0x40)
struct UAgentSortProvider_C : USortProviderBase_C {
	struct URecruitmentEventViewModel* RecruitmentEventVM; // 0x40(0x08)
	struct UCharacterDataAsset* RecruitmentCharacter; // 0x48(0x08)

	void onNewRecruitmentEvent(struct URecruitmentEventModel* RecruitmentEvent); // Function AgentSortProvider.AgentSortProvider_C.onNewRecruitmentEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitVM(); // Function AgentSortProvider.AgentSortProvider_C.InitVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	enum class ESortOrder SortObjects(struct FWildcard ObjectA, struct FWildcard ObjectB); // Function AgentSortProvider.AgentSortProvider_C.SortObjects // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

