// WidgetBlueprintGeneratedClass AnnouncementHUDElement_PC.AnnouncementHUDElement_PC_C
// Size: 0x410 (Inherited: 0x3f3)
struct UAnnouncementHUDElement_PC_C : UAnnouncementHUDElement_C {
	char pad_3F3[0x5]; // 0x3f3(0x05)
	struct UWidgetAnimation* AnimateOut; // 0x3f8(0x08)
	struct UWidgetAnimation* AnimateIn; // 0x400(0x08)
	struct UBorder* AnnouncementHolder; // 0x408(0x08)

	void GetAnnouncementHolder(struct UBorder*& AnnouncementHolder); // Function AnnouncementHUDElement_PC.AnnouncementHUDElement_PC_C.GetAnnouncementHolder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetAnimateOut(struct UWidgetAnimation*& Animation); // Function AnnouncementHUDElement_PC.AnnouncementHUDElement_PC_C.GetAnimateOut // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetAnimateIn(struct UWidgetAnimation*& Animation); // Function AnnouncementHUDElement_PC.AnnouncementHUDElement_PC_C.GetAnimateIn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
};

