// UserDefinedStruct KillFeedRowInfo.KillFeedRowInfo
// Size: 0x4a (Inherited: 0x00)
struct FKillFeedRowInfo {
	struct APlayerController* OwningPlayer_3_361529BD405A88DC93FB5390E366B0B4; // 0x00(0x08)
	struct AShooterPlayerState* LeftPlayerState_9_B3CF0D5E424FE9D9A566E580429632D3; // 0x08(0x08)
	struct AShooterPlayerState* RightPlayerState_11_53DE82B84913E95183A716A36AA4B577; // 0x10(0x08)
	int32_t KillNumberInRoundForKiller_13_44B38B8E43DAE4CA31C663A0F63B723C; // 0x18(0x04)
	int32_t KillNumberInRoundForVictim_31_CCD4A2E74B36D60E7EEC98B3891E833D; // 0x1c(0x04)
	struct UDamageResponse* DamageResponse_15_A6F68D6947762DA4CB967B8C634882EC; // 0x20(0x08)
	bool bWasAllyRes_19_7DFB202F45A964FD63F334BDAFD948A8; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct AAresEquippable* EquippableUsed_22_793FB6124858143BDAA56F933AADA733; // 0x30(0x08)
	struct TArray<struct FAresAssist> AssistsList_26_0C92D62844C93DDFB2E8BC9A5A221CA3; // 0x38(0x10)
	bool bWasTemporaryDeath_28_36D834AB48CDE62C29B6C893C7C63808; // 0x48(0x01)
	bool bWasRecovery_33_0C60F131465A698060DD7B8B4E584337; // 0x49(0x01)
};

