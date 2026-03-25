// BlueprintGeneratedClass BP_Schedule_Entry_Item.BP_Schedule_Entry_Item_C
// Size: 0x98 (Inherited: 0x30)
struct UBP_Schedule_Entry_Item_C : UObject {
	struct UEsportsMatchModelV2* Esports Match Model; // 0x30(0x08)
	struct FDateTime Start Time; // 0x38(0x08)
	bool Is Day Container; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TSet<struct FString> AssociatedLeagueIDs; // 0x48(0x50)
};

