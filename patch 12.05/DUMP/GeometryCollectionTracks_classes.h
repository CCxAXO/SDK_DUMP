// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x138 (Inherited: 0xf8)
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	struct FMovieSceneGeometryCollectionParams Params; // 0xf8(0x40)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0xa8(0x10)
};

