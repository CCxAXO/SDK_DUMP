// BlueprintGeneratedClass FP_AgentProfiles.FP_AgentProfiles_C
// Size: 0x59 (Inherited: 0x40)
struct UFP_AgentProfiles_C : UFilterProviderBase_C {
	struct FString SearchString; // 0x40(0x10)
	struct UAgentProfileViewModel* AgentProfileVM; // 0x50(0x08)
	bool bIsCreatingProfile; // 0x58(0x01)

	void InitAgentProfileVM(); // Function FP_AgentProfiles.FP_AgentProfiles_C.InitAgentProfileVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool InternationalStringContains_1(struct FString Search In, struct FString Substring); // Function FP_AgentProfiles.FP_AgentProfiles_C.InternationalStringContains_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	enum class EFilterInclude FilterObject(struct FWildcard Object); // Function FP_AgentProfiles.FP_AgentProfiles_C.FilterObject // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

