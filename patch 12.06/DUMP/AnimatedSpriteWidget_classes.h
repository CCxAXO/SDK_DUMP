// WidgetBlueprintGeneratedClass AnimatedSpriteWidget.AnimatedSpriteWidget_C
// Size: 0x418 (Inherited: 0x318)
struct UAnimatedSpriteWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* AlternateSizer; // 0x320(0x08)
	struct UImage* FrameImage; // 0x328(0x08)
	double FramesPerSecond; // 0x330(0x08)
	bool Looping; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FTimerHandle LoopUpdateHandle; // 0x340(0x08)
	struct UPaperFlipbook* CurrentAnimation; // 0x348(0x08)
	struct TMap<struct FString, struct UPaperFlipbook*> AnimationStates; // 0x350(0x50)
	double CurrentTime; // 0x3a0(0x08)
	struct UPaperSprite* CurentSprite; // 0x3a8(0x08)
	struct FMulticastInlineDelegate FinishedAnimation; // 0x3b0(0x10)
	struct FMulticastInlineDelegate FinishedLoop; // 0x3c0(0x10)
	struct FLinearColor ColorTint; // 0x3d0(0x10)
	enum class ESlateVisibility OverallVisible; // 0x3e0(0x01)
	bool IsPaused; // 0x3e1(0x01)
	char pad_3E2[0x6]; // 0x3e2(0x06)
	struct FString CurrentState; // 0x3e8(0x10)
	struct UPaperSprite* sptrimerlktre; // 0x3f8(0x08)
	struct FVector2D SizeOverride; // 0x400(0x10)
	bool SizeToFlipbook; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	int32_t FlibookSampleFrame; // 0x414(0x04)

	void AddNewAnimationState(struct FString StateName, struct UPaperFlipbook* FlipBook); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.AddNewAnimationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChangeSize(struct FVector2D Size, bool SizeToFlipbook, int32_t FlipbookSampleFram); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ChangeSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChangeVisibility(enum class ESlateVisibility OverallVisible); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ChangeVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetToDefault(bool PlayAnimation, bool Looping); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ResetToDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDefaultAnimation(); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.SetDefaultAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayAnimationState(struct FString StateName, bool Loop, bool& Success); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.PlayAnimationState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChangeColor(struct FLinearColor ColorTint); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ChangeColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopCurrentAnimation(bool PlayAnimation, bool Loop); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.StopCurrentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PauseCurrentAnimation(); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.PauseCurrentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResumeCurrentAnimation(); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ResumeCurrentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Loop(); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.Loop // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayCurrentAnimation(bool Looping); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.PlayCurrentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AnimatedSpriteWidget(int32_t EntryPoint); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.ExecuteUbergraph_AnimatedSpriteWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void FinishedLoop__DelegateSignature(struct UPaperFlipbook* Animation); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.FinishedLoop__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FinishedAnimation__DelegateSignature(struct UPaperFlipbook* Animation); // Function AnimatedSpriteWidget.AnimatedSpriteWidget_C.FinishedAnimation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

