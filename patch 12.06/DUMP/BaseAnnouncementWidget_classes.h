// WidgetBlueprintGeneratedClass BaseAnnouncementWidget.BaseAnnouncementWidget_C
// Size: 0x322 (Inherited: 0x318)
struct UBaseAnnouncementWidget_C : UUserWidget {
	double IdleTime; // 0x318(0x08)
	bool Interruptable; // 0x320(0x01)
	bool HasOwnAnimationOut; // 0x321(0x01)

	void ShouldBeVisibleForViewer(bool& Visible); // Function BaseAnnouncementWidget.BaseAnnouncementWidget_C.ShouldBeVisibleForViewer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnimatingIn(); // Function BaseAnnouncementWidget.BaseAnnouncementWidget_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnimatingOut(); // Function BaseAnnouncementWidget.BaseAnnouncementWidget_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

