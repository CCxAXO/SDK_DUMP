// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// Size: 0x40 (Inherited: 0x00)
struct FMovieSceneGeometryCollectionParams {
	char pad_0[0x8]; // 0x00(0x08)
	struct FSoftObjectPath GeometryCollectionCache; // 0x08(0x28)
	struct FFrameNumber StartFrameOffset; // 0x30(0x04)
	struct FFrameNumber EndFrameOffset; // 0x34(0x04)
	float PlayRate; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// Size: 0x48 (Inherited: 0x40)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
	struct FFrameNumber SectionEndTime; // 0x44(0x04)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// Size: 0x68 (Inherited: 0x20)
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20(0x48)
};

