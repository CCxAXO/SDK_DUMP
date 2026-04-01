// Class TakeMovieScene.MovieSceneTakeSection
// Size: 0x718 (Inherited: 0xf8)
struct UMovieSceneTakeSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel HoursCurve; // 0xf8(0x100)
	struct FMovieSceneIntegerChannel MinutesCurve; // 0x1f8(0x100)
	struct FMovieSceneIntegerChannel SecondsCurve; // 0x2f8(0x100)
	struct FMovieSceneIntegerChannel FramesCurve; // 0x3f8(0x100)
	struct FMovieSceneFloatChannel SubFramesCurve; // 0x4f8(0x110)
	struct FMovieSceneStringChannel Slate; // 0x608(0x110)
};

// Class TakeMovieScene.MovieSceneTakeSettings
// Size: 0x90 (Inherited: 0x30)
struct UMovieSceneTakeSettings : UObject {
	struct FString HoursName; // 0x30(0x10)
	struct FString MinutesName; // 0x40(0x10)
	struct FString SecondsName; // 0x50(0x10)
	struct FString FramesName; // 0x60(0x10)
	struct FString SubFramesName; // 0x70(0x10)
	struct FString SlateName; // 0x80(0x10)
};

// Class TakeMovieScene.MovieSceneTakeTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieSceneTakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

