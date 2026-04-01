// BlueprintGeneratedClass VM_RankedInfo.VM_RankedInfo_C
// Size: 0x350 (Inherited: 0x90)
struct UVM_RankedInfo_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FString Subject; // 0x98(0x10)
	struct UCompetitiveSeasonHandle* CompetitiveSeasonHandle; // 0xa8(0x08)
	int32_t CompetitiveTier; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FCompetitiveTierData CompetitiveTierData; // 0xb8(0x88)
	int32_t CurrentSeasonGamesNeededForRating; // 0x140(0x04)
	bool IsActRankHidden; // 0x144(0x01)
	bool IsLeaderboardTier; // 0x145(0x01)
	bool IsLoading; // 0x146(0x01)
	char pad_147[0x1]; // 0x147(0x01)
	int32_t LeaderboardRank; // 0x148(0x04)
	int32_t NumberOfWins; // 0x14c(0x04)
	int32_t PeakRank; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FCompetitiveTierData PeakRankData; // 0x158(0x88)
	bool RankedInfoError; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	int32_t RankedRating; // 0x1e4(0x04)
	int32_t TotalGamesNeededForRating; // 0x1e8(0x04)
	int32_t TotalWinsNeededForRank; // 0x1ec(0x04)
	struct FMulticastInlineDelegate OnCompetitiveTierUpdated; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnTotalWinsNeededForRankUpdated; // 0x200(0x10)
	struct FMulticastInlineDelegate OnCompetitiveTierDataUpdated; // 0x210(0x10)
	struct FMulticastInlineDelegate OnCurrentSeasonGamesNeededForRatingUpdated; // 0x220(0x10)
	struct FMulticastInlineDelegate OnNumberOfWinsUpdated; // 0x230(0x10)
	struct FMulticastInlineDelegate OnLeaderboardRankUpdated; // 0x240(0x10)
	struct FMulticastInlineDelegate OnRankedRatingUpdated; // 0x250(0x10)
	struct TMap<int32_t, int32_t> WinsByTier; // 0x260(0x50)
	struct FMulticastInlineDelegate OnTotalGamesNeededForRatingUpdated; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnWinsByTierUpdated; // 0x2c0(0x10)
	struct FGuid SeasonID; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnCompetitiveSeasonHandleUpdated; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnIsLoadingUpdated; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnRankedInfoErrorUpdated; // 0x300(0x10)
	struct FMulticastInlineDelegate OnIsActRankHiddenUpdated; // 0x310(0x10)
	struct FMulticastInlineDelegate OnPeakRankUpdated; // 0x320(0x10)
	struct FMulticastInlineDelegate OnPeakRankDataUpdated; // 0x330(0x10)
	struct FMulticastInlineDelegate OnIsLeaderboardTierUpdated; // 0x340(0x10)

	void SetIsLeaderboardTier(bool IsLeaderboardTier); // Function VM_RankedInfo.VM_RankedInfo_C.SetIsLeaderboardTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPeakRankData(); // Function VM_RankedInfo.VM_RankedInfo_C.SetPeakRankData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPeakRank(int32_t PeakRank); // Function VM_RankedInfo.VM_RankedInfo_C.SetPeakRank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCompetitiveTierData(struct FCompetitiveTierData& CompetitiveTierData); // Function VM_RankedInfo.VM_RankedInfo_C.GetCompetitiveTierData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetIsActRankHidden(bool& IsActRankHidden); // Function VM_RankedInfo.VM_RankedInfo_C.GetIsActRankHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIsActRankHidden(bool IsActRankHidden); // Function VM_RankedInfo.VM_RankedInfo_C.SetIsActRankHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRankedInfoError(bool RankedInfoError); // Function VM_RankedInfo.VM_RankedInfo_C.SetRankedInfoError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsLoading(bool IsLoading); // Function VM_RankedInfo.VM_RankedInfo_C.SetIsLoading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSeasonID(struct FGuid SeasonID); // Function VM_RankedInfo.VM_RankedInfo_C.SetSeasonID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSubject(struct FString Subject); // Function VM_RankedInfo.VM_RankedInfo_C.SetSubject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCurrentSeasonGamesNeededForRating(int32_t CurrentSeasonGamesNeededForRating); // Function VM_RankedInfo.VM_RankedInfo_C.SetCurrentSeasonGamesNeededForRating // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTotalGamesNeededForRating(int32_t TotalGamesNeededForRating); // Function VM_RankedInfo.VM_RankedInfo_C.SetTotalGamesNeededForRating // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetWinsByTier(struct TMap<int32_t, int32_t> WinsByTier); // Function VM_RankedInfo.VM_RankedInfo_C.SetWinsByTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNumberOfWins(int32_t NumberOfWins); // Function VM_RankedInfo.VM_RankedInfo_C.SetNumberOfWins // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRankedRating(int32_t RankedRating); // Function VM_RankedInfo.VM_RankedInfo_C.SetRankedRating // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLeaderboardRank(int32_t LeaderboardRank); // Function VM_RankedInfo.VM_RankedInfo_C.SetLeaderboardRank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCompetitiveTierData(); // Function VM_RankedInfo.VM_RankedInfo_C.SetCompetitiveTierData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTotalWinsNeededForRank(int32_t LeaderboardRank); // Function VM_RankedInfo.VM_RankedInfo_C.SetTotalWinsNeededForRank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCompetitiveTier(int32_t CompetitiveTier); // Function VM_RankedInfo.VM_RankedInfo_C.SetCompetitiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRankedDetails(int32_t NumberOfWins, int32_t PeakRank, int32_t TotalWinsNeededForRank, int32_t LeaderboardRank, int32_t RankedRating, int32_t CompetitiveTier, int32_t TotalGamesNeededForRating, int32_t CurrentSeasonGamesNeededForRating); // Function VM_RankedInfo.VM_RankedInfo_C.SetRankedDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsTierOnLeaderboard(struct FCompetitiveTierData Tier, bool& bool); // Function VM_RankedInfo.VM_RankedInfo_C.IsTierOnLeaderboard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleMMRPlayerLoadSuccess(struct FMMRPlayer& MMRPlayer); // Function VM_RankedInfo.VM_RankedInfo_C.HandleMMRPlayerLoadSuccess // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCompetitiveSeasonLoadSuccess(struct UCompetitiveSeasonHandle* CompetitiveSeasonHandle); // Function VM_RankedInfo.VM_RankedInfo_C.HandleCompetitiveSeasonLoadSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LoadCompetitiveSeason(); // Function VM_RankedInfo.VM_RankedInfo_C.LoadCompetitiveSeason // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LoadMMRPlayer(); // Function VM_RankedInfo.VM_RankedInfo_C.LoadMMRPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct FString Subject, struct FGuid SeasonID); // Function VM_RankedInfo.VM_RankedInfo_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleMMRPlayerLoadError(); // Function VM_RankedInfo.VM_RankedInfo_C.HandleMMRPlayerLoadError // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_RankedInfo.VM_RankedInfo_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerUpdated(); // Function VM_RankedInfo.VM_RankedInfo_C.OnPlayerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_RankedInfo.VM_RankedInfo_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_RankedInfo(int32_t EntryPoint); // Function VM_RankedInfo.VM_RankedInfo_C.ExecuteUbergraph_VM_RankedInfo // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnIsLeaderboardTierUpdated__DelegateSignature(bool IsLeaderboardTier); // Function VM_RankedInfo.VM_RankedInfo_C.OnIsLeaderboardTierUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPeakRankDataUpdated__DelegateSignature(struct FCompetitiveTierData PeakRankData); // Function VM_RankedInfo.VM_RankedInfo_C.OnPeakRankDataUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPeakRankUpdated__DelegateSignature(int32_t PeakRank); // Function VM_RankedInfo.VM_RankedInfo_C.OnPeakRankUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTotalWinsNeededForRankUpdated__DelegateSignature(int32_t TotalWinsNeededForRank); // Function VM_RankedInfo.VM_RankedInfo_C.OnTotalWinsNeededForRankUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsActRankHiddenUpdated__DelegateSignature(bool IsActRankHidden); // Function VM_RankedInfo.VM_RankedInfo_C.OnIsActRankHiddenUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRankedInfoErrorUpdated__DelegateSignature(bool RankedInfoError); // Function VM_RankedInfo.VM_RankedInfo_C.OnRankedInfoErrorUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsLoadingUpdated__DelegateSignature(bool IsLoading); // Function VM_RankedInfo.VM_RankedInfo_C.OnIsLoadingUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCompetitiveSeasonHandleUpdated__DelegateSignature(); // Function VM_RankedInfo.VM_RankedInfo_C.OnCompetitiveSeasonHandleUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCompetitiveTierDataUpdated__DelegateSignature(struct FCompetitiveTierData CompeitiveTierData); // Function VM_RankedInfo.VM_RankedInfo_C.OnCompetitiveTierDataUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCurrentSeasonGamesNeededForRatingUpdated__DelegateSignature(int32_t CurrentSeasonGamesNeededForRating); // Function VM_RankedInfo.VM_RankedInfo_C.OnCurrentSeasonGamesNeededForRatingUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTotalGamesNeededForRatingUpdated__DelegateSignature(int32_t TotalGamesNeededForRating); // Function VM_RankedInfo.VM_RankedInfo_C.OnTotalGamesNeededForRatingUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnWinsByTierUpdated__DelegateSignature(struct TMap<int32_t, int32_t> WinsByTier); // Function VM_RankedInfo.VM_RankedInfo_C.OnWinsByTierUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNumberOfWinsUpdated__DelegateSignature(int32_t NumberOfWins); // Function VM_RankedInfo.VM_RankedInfo_C.OnNumberOfWinsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLeaderboardRankUpdated__DelegateSignature(int32_t LeaderboardRank); // Function VM_RankedInfo.VM_RankedInfo_C.OnLeaderboardRankUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCompetitiveTierUpdated__DelegateSignature(int32_t CompetitiveTier); // Function VM_RankedInfo.VM_RankedInfo_C.OnCompetitiveTierUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRankedRatingUpdated__DelegateSignature(int32_t RankedRating); // Function VM_RankedInfo.VM_RankedInfo_C.OnRankedRatingUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

