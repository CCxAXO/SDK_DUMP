// UserDefinedStruct FaceOffTransitionModel.FaceOffTransitionModel
// Size: 0x88 (Inherited: 0x00)
struct FFaceOffTransitionModel {
	struct UMapDataAsset* Map_18_7D8FCDAB4974CAF5AEA304B5353EE967; // 0x00(0x08)
	struct UGameModeDataAsset* Mode_19_4F9173C348FF8A6F29A0F7979A865455; // 0x08(0x08)
	struct FString QueueID_27_614E5C3D4FEE72A45FE142A0B41460DF; // 0x10(0x10)
	struct FString GamePodID_29_FEE1E46140B5A4A004640DB113D706FC; // 0x20(0x10)
	bool IsCustomGame_10_77BB7F0B4D16A2859CABE596A413383D; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FLoadingScreenTeam AllyTeam_5_91D9618C408FEB329D5EF99EA80B9EF6; // 0x38(0x20)
	struct FLoadingScreenTeam EnemyTeam_7_8AD3731B4E26CFD91BB3A1829D74B287; // 0x58(0x20)
	bool IsReplay_22_16A84BD14B5FE6876D2C9D904495A147; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FDateTime ReplayDateTime_25_B359E3DA4C3E32860A4334B619BB7CFA; // 0x80(0x08)
};

