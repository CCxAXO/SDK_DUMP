// Class ActorSequence.ActorSequence
// Size: 0x98 (Inherited: 0x70)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x70(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x78(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x108 (Inherited: 0xd8)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xd8(0x20)
	struct UActorSequence* Sequence; // 0xf8(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0x100(0x08)

	void StopSequence(); // Function ActorSequence.ActorSequenceComponent.StopSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x7c2a960
	void PlaySequence(); // Function ActorSequence.ActorSequenceComponent.PlaySequence // (Final|Native|Public|BlueprintCallable) // @ game+0x7c2a9c0
	void PauseSequence(); // Function ActorSequence.ActorSequenceComponent.PauseSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x7c2a990
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x4d0 (Inherited: 0x4d0)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

