// WidgetBlueprintGeneratedClass OptionalKillBannerEffects_Parent.OptionalKillBannerEffects_Parent_C
// Size: 0x451 (Inherited: 0x318)
struct UOptionalKillBannerEffects_Parent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FKillBannerStruct Data; // 0x320(0x128)
	int32_t Kills; // 0x448(0x04)
	int32_t MaxKills; // 0x44c(0x04)
	bool WasHeadshot; // 0x450(0x01)

	void TriggerFadeIn(); // Function OptionalKillBannerEffects_Parent.OptionalKillBannerEffects_Parent_C.TriggerFadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerFadeOut(); // Function OptionalKillBannerEffects_Parent.OptionalKillBannerEffects_Parent_C.TriggerFadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ConfigureData(struct FKillBannerStruct Data, int32_t KillCount, int32_t MaxKill, bool WasHeadshot); // Function OptionalKillBannerEffects_Parent.OptionalKillBannerEffects_Parent_C.ConfigureData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFadeIn(); // Function OptionalKillBannerEffects_Parent.OptionalKillBannerEffects_Parent_C.OnFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFadeOut(); // Function OptionalKillBannerEffects_Parent.OptionalKillBannerEffects_Parent_C.OnFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_OptionalKillBannerEffects_Parent(int32_t EntryPoint); // Function OptionalKillBannerEffects_Parent.OptionalKillBannerEffects_Parent_C.ExecuteUbergraph_OptionalKillBannerEffects_Parent // (Final|UbergraphFunction) // @ game+0x1af5410
};

