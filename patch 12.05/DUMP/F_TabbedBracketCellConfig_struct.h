// UserDefinedStruct F_TabbedBracketCellConfig.F_TabbedBracketCellConfig
// Size: 0x4c (Inherited: 0x00)
struct FF_TabbedBracketCellConfig {
	enum class EBracketMatchupID MatchupAID_32_343E37944D51A2C5492A2FA910498C25; // 0x00(0x01)
	enum class EBracketMatchupID MatchupBID_33_B896A45C472AE1F73E7D93BAC72EE71D; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FLinearColor BackgroundColor_34_54489896485A2948A087A8B8AABE29FC; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText TopLeftText_37_FA1750494FFB42F23800DFB7CECC4002; // 0x18(0x18)
	struct FText BottomRightText_38_7BA73D1F44929CC37F4BA9B183E451BF; // 0x30(0x18)
	enum class E_BracketLineBuilding_FeedIn IncomingLine_19_1D870A734CD0036AA1B264AA1FA4DC9A; // 0x48(0x01)
	enum class E_BracketLineBuilding_GoesOut OutgoingLine_22_CA5BAD5C41F207A7DF03A697E304D041; // 0x49(0x01)
	bool bShowBottomLine_25_4C5838E04C7F4CBAE8290A9EA8212038; // 0x4a(0x01)
	bool bShowTopLine_27_0D93086C496B5951DF8454A6C1043B52; // 0x4b(0x01)
};

