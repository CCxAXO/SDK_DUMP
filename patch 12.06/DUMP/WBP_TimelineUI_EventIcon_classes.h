// WidgetBlueprintGeneratedClass WBP_TimelineUI_EventIcon.WBP_TimelineUI_EventIcon_C
// Size: 0x45a (Inherited: 0x3e0)
struct UWBP_TimelineUI_EventIcon_C : UWBP_Panel_TimelinePinBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Event_Defuse; // 0x3e8(0x08)
	struct UImage* Event_Detonation; // 0x3f0(0x08)
	struct UWBP_UI_Icon_KillStack_C* Event_Kill; // 0x3f8(0x08)
	struct UImage* Event_MainTimeline_Bookmark; // 0x400(0x08)
	struct UImage* Event_MainTimeline_Death; // 0x408(0x08)
	struct UImage* Event_MainTimeline_Kill; // 0x410(0x08)
	struct UImage* Event_PlantSpike; // 0x418(0x08)
	struct UImage* Event_SideSwap; // 0x420(0x08)
	struct UImage* Event_ULT; // 0x428(0x08)
	struct UOverlay* SideSwapOverlay; // 0x430(0x08)
	struct UWidgetSwitcher* WS_EventType; // 0x438(0x08)
	enum class E_Replays_TimelineEventTypes E_eventType; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FLinearColor Event_Color; // 0x444(0x10)
	int32_t Kill Counter; // 0x454(0x04)
	bool IsMyTeamEvent; // 0x458(0x01)
	bool IsSelfEvent; // 0x459(0x01)

	void SetKillCounter(int32_t New Kill Count); // Function WBP_TimelineUI_EventIcon.WBP_TimelineUI_EventIcon_C.SetKillCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEventType(enum class E_Replays_TimelineEventTypes NewEventType); // Function WBP_TimelineUI_EventIcon.WBP_TimelineUI_EventIcon_C.SetEventType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEventIconColor(); // Function WBP_TimelineUI_EventIcon.WBP_TimelineUI_EventIcon_C.SetEventIconColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_TimelineUI_EventIcon.WBP_TimelineUI_EventIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_TimelineUI_EventIcon(int32_t EntryPoint); // Function WBP_TimelineUI_EventIcon.WBP_TimelineUI_EventIcon_C.ExecuteUbergraph_WBP_TimelineUI_EventIcon // (Final|UbergraphFunction) // @ game+0x1b42740
};

