// BlueprintGeneratedClass BaseGunSkinVOComponent.BaseGunSkinVOComponent_C
// Size: 0x3c8 (Inherited: 0x1d1)
struct UBaseGunSkinVOComponent_C : UBaseVOComponent_C {
	char pad_1D1[0x7]; // 0x1d1(0x07)
	struct TMap<enum class RoundEndVOEnum, struct UAkAudioEvent*> RoundEndVO; // 0x1d8(0x50)
	struct TMap<enum class BubbleDownVOEnum, struct UAkAudioEvent*> BubbleDownGeneric; // 0x228(0x50)
	struct TMap<enum class KillsVOEnum, struct UAkAudioEvent*> Kills; // 0x278(0x50)
	struct UAkAudioEvent* WeaponInspectVO; // 0x2c8(0x08)
	struct UAkAudioEvent* StopWeaponInspectVO; // 0x2d0(0x08)
	struct TMap<enum class KillsVOEnum, struct UAkAudioEvent*> StopKills; // 0x2d8(0x50)
	struct TMap<enum class BubbleDownVOEnum, struct UAkAudioEvent*> StopBubbleDownGeneric; // 0x328(0x50)
	struct TMap<enum class RoundEndVOEnum, struct UAkAudioEvent*> StopRoundEndVO; // 0x378(0x50)

	void GetStopWeaponVO(struct TMap<enum class RoundEndVOEnum, struct UAkAudioEvent*>& StopRoundEndVO, struct TMap<enum class BubbleDownVOEnum, struct UAkAudioEvent*>& StopBubbleDownGeneric, struct TMap<enum class KillsVOEnum, struct UAkAudioEvent*>& StopKills); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.GetStopWeaponVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetWeaponVO(struct TMap<enum class RoundEndVOEnum, struct UAkAudioEvent*>& RoundEndVO, struct TMap<enum class BubbleDownVOEnum, struct UAkAudioEvent*>& BubbleDownGeneric, struct TMap<enum class KillsVOEnum, struct UAkAudioEvent*>& Kills); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.GetWeaponVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Stop_GunSkin_MeleeInspect(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.Stop_GunSkin_MeleeInspect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_MeleeInspect(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_MeleeInspect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_Killstreak(int32_t Killstreak Count, struct UAudBasePawnVOComponent_C* VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_Killstreak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_Headshot(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_Headshot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_PentaKill(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_PentaKill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_ClutchPlay(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_ClutchPlay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_GunInspect(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_GunInspect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_LastKillMelee(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_LastKillMelee // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_KillMelee(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_KillMelee // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_Kill(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_Kill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_BubbleDownGeneric(struct UAudBasePawnVOComponent_C* Character VO Component, bool WaitsOnAnnouncer); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_BubbleDownGeneric // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuth_GunSkin_LastKill(struct UAudBasePawnVOComponent_C* Character VO Component); // Function BaseGunSkinVOComponent.BaseGunSkinVOComponent_C.OnAuth_GunSkin_LastKill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

