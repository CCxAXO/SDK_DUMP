// BlueprintGeneratedClass BaseNonVerbalCommRadialItem.BaseNonVerbalCommRadialItem_C
// Size: 0x68 (Inherited: 0x30)
struct UBaseNonVerbalCommRadialItem_C : UObject {
	struct FText DisplayText; // 0x30(0x18)
	enum class NonVerbalCommTypesEnum CommEnum; // 0x48(0x01)
	enum class TacticalVOEnum Voiceline; // 0x49(0x01)
	enum class VOPriorityEnum VoicelinePriority; // 0x4a(0x01)
	enum class VOEmoteEnum EmoteVoiceline; // 0x4b(0x01)
	bool bShouldPing; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FText ChatText; // 0x50(0x18)
};

