// BlueprintGeneratedClass VM_TopNavigation.VM_TopNavigation_C
// Size: 0x1a8 (Inherited: 0x90)
struct UVM_TopNavigation_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UUINavigationModel* UINavigationModel; // 0x98(0x08)
	enum class EWidgetVisibilityOption BreadcrumbVisibilityOption; // 0xa0(0x01)
	enum class EWidgetVisibilityOption PlayButtonVisibilityOption; // 0xa1(0x01)
	enum class EWidgetVisibilityOption NavigationBarVisibilityOption; // 0xa2(0x01)
	enum class EWidgetVisibilityOption LoyaltyVisibilityOption; // 0xa3(0x01)
	enum class EWidgetVisibilityOption GeneralAlertStatusVisibilityOption; // 0xa4(0x01)
	enum class EWidgetVisibilityOption SocialEntranceVisibilityOption; // 0xa5(0x01)
	enum class EWidgetVisibilityOption OptionsButtonVisibilityOption; // 0xa6(0x01)
	enum class EWidgetVisibilityOption WalletVisibilityOption; // 0xa7(0x01)
	struct FMulticastInlineDelegate OnBreadcrumbVisibilityOptionChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnPlayButtonVisibilityOptionChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnNavigationBarVisibilityOptionChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnLoyaltyVisibilityOptionChanged; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnServerStatusVisibilityOptionChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnSocialEntranceVisibilityOptionChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnOptionsButtonVisibilityOptionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnWalletVisibilityOptionChanged; // 0x118(0x10)
	struct FMulticastInlineDelegate OnGeneralAlertStatusVisibilityOptionChanged; // 0x128(0x10)
	struct FMulticastInlineDelegate OnPersistentNavigationBarVisibilityOptionChanged; // 0x138(0x10)
	enum class EWidgetVisibilityOption PersistentNavigationBarVisibilityOption; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FMulticastInlineDelegate OnBackActionEnabledChanged; // 0x150(0x10)
	enum class EWidgetVisibilityOption BonusStoreVisibilityOption; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct FMulticastInlineDelegate OnBonusStoreVisibilityOptionChanged; // 0x168(0x10)
	enum class EWidgetVisibilityOption MissionProgressionVisibilityOption; // 0x178(0x01)
	bool BackActionEnabled; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct FMulticastInlineDelegate OnMissionProgressionVisibilityOptionChanged; // 0x180(0x10)
	enum class EWidgetVisibilityOption SoupVisibilityOption; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FMulticastInlineDelegate OnSoupVisibilityOptionChanged; // 0x198(0x10)

	void SetSoupVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetSoupVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackActionEnabled(bool inEnabled); // Function VM_TopNavigation.VM_TopNavigation_C.SetBackActionEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMissionProgressionVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetMissionProgressionVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBonusStoreVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetBonusStoreVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPersistentNavigationBarVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetPersistentNavigationBarVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function VM_TopNavigation.VM_TopNavigation_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetWalletVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetWalletVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOptionsButtonVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetOptionsButtonVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSocialEntranceVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetSocialEntranceVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetGeneralAlertStatusVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetGeneralAlertStatusVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLoyaltyVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetLoyaltyVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNavigationBarVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetNavigationBarVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayButtonVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetPlayButtonVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBreadcrumbVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetBreadcrumbVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateWidgetVisibility(struct FShellWidgetVisibilityOptions WidgetVisibilityOptions); // Function VM_TopNavigation.VM_TopNavigation_C.UpdateWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToUINavigationModel(bool bShouldBind); // Function VM_TopNavigation.VM_TopNavigation_C.BindToUINavigationModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToOptions(); // Function VM_TopNavigation.VM_TopNavigation_C.NavigateToOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToLobby(); // Function VM_TopNavigation.VM_TopNavigation_C.NavigateToLobby // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_TopNavigation.VM_TopNavigation_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_TopNavigation(int32_t EntryPoint); // Function VM_TopNavigation.VM_TopNavigation_C.ExecuteUbergraph_VM_TopNavigation // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnSoupVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnSoupVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMissionProgressionVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnMissionProgressionVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBonusStoreVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnBonusStoreVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBackActionEnabledChanged__DelegateSignature(bool OutEnabled); // Function VM_TopNavigation.VM_TopNavigation_C.OnBackActionEnabledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPersistentNavigationBarVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnPersistentNavigationBarVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGeneralAlertStatusVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnGeneralAlertStatusVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnWalletVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnWalletVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOptionsButtonVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnOptionsButtonVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSocialEntranceVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnSocialEntranceVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnServerStatusVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnServerStatusVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLoyaltyVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnLoyaltyVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNavigationBarVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnNavigationBarVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayButtonVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnPlayButtonVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBreadcrumbVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnBreadcrumbVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

