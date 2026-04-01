// BlueprintGeneratedClass Attachment_Base.Attachment_Base_C
// Size: 0x110 (Inherited: 0x108)
struct UAttachment_Base_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)

	void GetOwningPlayerInfo(struct ABasePlayerCharacter_C*& Owning Player, struct AGun_C*& Owned Gun, enum class EAresTeamRole& Team Role, double& Health, double& Shield, bool& isAlive?, struct UWeapon_Skin_Base_C*& Owned Gun Skin); // Function Attachment_Base.Attachment_Base_C.GetOwningPlayerInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddToGun (Override This One)(); // Function Attachment_Base.Attachment_Base_C.AddToGun (Override This One) // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Attachment_Base.Attachment_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_OnAssetsLoaded(int32_t AssetTypes); // Function Attachment_Base.Attachment_Base_C.K2_OnAssetsLoaded // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Attachment_Base(int32_t EntryPoint); // Function Attachment_Base.Attachment_Base_C.ExecuteUbergraph_Attachment_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

