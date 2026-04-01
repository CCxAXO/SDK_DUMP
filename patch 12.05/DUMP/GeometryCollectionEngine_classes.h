// Class GeometryCollectionEngine.GeometryCollectionExternalRenderInterface
// Size: 0x30 (Inherited: 0x30)
struct UGeometryCollectionExternalRenderInterface : UInterface {
};

// Class GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCollectionISMPoolSubSystem : UWorldSubsystem {
	struct AGeometryCollectionISMPoolActor* ISMPoolActor; // 0x38(0x08)
};

// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x5e0 (Inherited: 0x330)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x330(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x330(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x330(0x01)
	char bIsRemovalEventListeningEnabled : 1; // 0x330(0x01)
	char pad_330_4 : 4; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x334(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x34c(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x364(0x18)
	struct FChaosRemovalEventRequestSettings RemovalEventRequestSettings; // 0x37c(0x10)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x390(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x3e0(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x430(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x440(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x450(0x10)
	struct FMulticastInlineDelegate OnRemovalEvents; // 0x460(0x10)
	char pad_470[0x170]; // 0x470(0x170)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x362f820
	void SortRemovalEvents(struct TArray<struct FChaosRemovalEventData>& RemovalEvents, enum class EChaosRemovalSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x362f620
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x362fc20
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x362fa20
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3630390
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x362ff60
	void SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3630290
	void SetRemovalEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x362fe50
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36305b0
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3630180
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36304a0
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3630070
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36306c0
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34f6120
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x362fe20
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36307d0
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34f6120
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x470 (Inherited: 0x460)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x460(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x468(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3634b50
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x58 (Inherited: 0x30)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x30(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x40(0x08)
	struct FGuid CompatibleCollectionState; // 0x48(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xd10 (Inherited: 0x6e0)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x6e0(0x08)
	char pad_6E8[0xe8]; // 0x6e8(0xe8)
	struct UGeometryCollection* RestCollection; // 0x7d0(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x7d8(0x10)
	bool Simulating; // 0x7e8(0x01)
	char pad_7E9[0x1]; // 0x7e9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0x7ea(0x01)
	char pad_7EB[0x1]; // 0x7eb(0x01)
	int32_t GravityGroupIndex; // 0x7ec(0x04)
	bool bForceMotionBlur; // 0x7f0(0x01)
	bool EnableClustering; // 0x7f1(0x01)
	char pad_7F2[0x2]; // 0x7f2(0x02)
	int32_t ClusterGroupIndex; // 0x7f4(0x04)
	int32_t MaxClusterLevel; // 0x7f8(0x04)
	int32_t MaxSimulatedLevel; // 0x7fc(0x04)
	enum class EDamageModelTypeEnum DamageModel; // 0x800(0x01)
	char pad_801[0x7]; // 0x801(0x07)
	struct TArray<float> DamageThreshold; // 0x808(0x10)
	bool bUseSizeSpecificDamageThreshold; // 0x818(0x01)
	char pad_819[0x3]; // 0x819(0x03)
	struct FGeometryCollectionDamagePropagationData DamagePropagationData; // 0x81c(0x0c)
	bool bEnableDamageFromCollision; // 0x828(0x01)
	bool bAllowRemovalOnSleep; // 0x829(0x01)
	bool bAllowRemovalOnBreak; // 0x82a(0x01)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x82b(0x01)
	int32_t CollisionGroup; // 0x82c(0x04)
	float CollisionSampleFraction; // 0x830(0x04)
	float LinearEtherDrag; // 0x834(0x04)
	float AngularEtherDrag; // 0x838(0x04)
	char pad_83C[0x4]; // 0x83c(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x840(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x848(0x01)
	char pad_849[0x7]; // 0x849(0x07)
	struct FVector InitialLinearVelocity; // 0x850(0x18)
	struct FVector InitialAngularVelocity; // 0x868(0x18)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x880(0x08)
	struct FGeomComponentCacheParameters CacheParameters; // 0x888(0x50)
	struct TArray<struct FTransform> RestTransforms; // 0x8d8(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x8e8(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x8f8(0x10)
	char pad_908[0x18]; // 0x908(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x920(0x10)
	struct FMulticastInlineDelegate OnChaosRemovalEvent; // 0x930(0x10)
	struct FMulticastInlineDelegate OnChaosCrumblingEvent; // 0x940(0x10)
	char pad_950[0x10]; // 0x950(0x10)
	float DesiredCacheTime; // 0x960(0x04)
	bool CachePlayback; // 0x964(0x01)
	char pad_965[0x3]; // 0x965(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x968(0x10)
	bool bNotifyBreaks; // 0x978(0x01)
	bool bNotifyCollisions; // 0x979(0x01)
	bool bNotifyTrailing; // 0x97a(0x01)
	bool bNotifyRemovals; // 0x97b(0x01)
	bool bNotifyCrumblings; // 0x97c(0x01)
	bool bCrumblingEventIncludesChildren; // 0x97d(0x01)
	bool bNotifyGlobalBreaks; // 0x97e(0x01)
	bool bNotifyGlobalCollisions; // 0x97f(0x01)
	bool bNotifyGlobalRemovals; // 0x980(0x01)
	bool bNotifyGlobalCrumblings; // 0x981(0x01)
	bool bGlobalCrumblingEventIncludesChildren; // 0x982(0x01)
	bool bStoreVelocities; // 0x983(0x01)
	bool bShowBoneColors; // 0x984(0x01)
	bool bUseRootProxyForNavigation; // 0x985(0x01)
	bool bUpdateNavigationInTick; // 0x986(0x01)
	char pad_987[0x1]; // 0x987(0x01)
	struct AGeometryCollectionISMPoolActor* ISMPool; // 0x988(0x08)
	bool bAutoAssignISMPool; // 0x990(0x01)
	bool bOverrideCustomRenderer; // 0x991(0x01)
	char pad_992[0x6]; // 0x992(0x06)
	ClassPtrProperty CustomRendererType; // 0x998(0x08)
	struct UGeometryCollectionExternalRenderInterface* CustomRenderer; // 0x9a0(0x08)
	bool bEnableReplication; // 0x9a8(0x01)
	bool bEnableAbandonAfterLevel; // 0x9a9(0x01)
	char pad_9AA[0x2]; // 0x9aa(0x02)
	struct FName AbandonedCollisionProfileName; // 0x9ac(0x0c)
	struct TArray<struct FName> CollisionProfilePerLevel; // 0x9b8(0x10)
	char pad_9C8[0x10]; // 0x9c8(0x10)
	int32_t ReplicationAbandonClusterLevel; // 0x9d8(0x04)
	int32_t ReplicationAbandonAfterLevel; // 0x9dc(0x04)
	int32_t ReplicationMaxPositionAndVelocityCorrectionLevel; // 0x9e0(0x04)
	char pad_9E4[0x4]; // 0x9e4(0x04)
	struct FGeometryCollectionRepData RepData; // 0x9e8(0x38)
	char pad_A20[0x2a8]; // 0xa20(0x2a8)
	struct UBodySetup* DummyBodySetup; // 0xcc8(0x08)
	struct UChaosGameplayEventDispatcher* EventDispatcher; // 0xcd0(0x08)
	struct TArray<struct UInstancedStaticMeshComponent*> EmbeddedGeometryComponents; // 0xcd8(0x10)
	char pad_CE8[0x28]; // 0xce8(0x28)

	void SetRestCollection(struct UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3637a10
	void SetPerParticleCollisionProfileName(struct TArray<int32_t>& BoneIds, struct FName ProfileName); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetPerParticleCollisionProfileName // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36373f0
	void SetPerLevelCollisionProfileNames(struct TArray<struct FName>& ProfileNames); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetPerLevelCollisionProfileNames // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36375d0
	void SetNotifyRemovals(bool bNewNotifyRemovals); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3636970
	void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalRemovals // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36362f0
	void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCrumblings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36360d0
	void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCollision // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3636470
	void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalBreaks // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3636590
	void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36366e0
	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3636b30
	void SetLocalRestTransforms(struct TArray<struct FTransform>& Transforms, bool bOnlyLeaves); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetLocalRestTransforms // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3637f40
	void SetEnableDamageFromCollision(bool bValue); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3637830
	void SetDamageThreshold(struct TArray<float>& InDamageThreshold); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetDamageThreshold // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3637180
	void SetAnchoredByTransformedBox(struct FBox Box, struct FTransform Transform, bool bAnchored, int32_t MaxLevel); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x36389f0
	void SetAnchoredByIndex(int32_t Index, bool bAnchored); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36390d0
	void SetAnchoredByBox(struct FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3638db0
	void SetAbandonedParticleCollisionProfileName(struct FName CollisionProfile); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetAbandonedParticleCollisionProfileName // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3637710
	void RemoveAllAnchors(); // Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36389d0
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (RequiredAPI|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnRep_RepData(); // Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData // (Final|RequiredAPI|Native|Protected) // @ game+0x36360b0
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1af5410
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1af5410
	bool IsRootBroken(); // Function GeometryCollectionEngine.GeometryCollectionComponent.IsRootBroken // (Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x3636080
	struct FTransform GetRootInitialTransform(); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootInitialTransform // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3638230
	int32_t GetRootIndex(); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36382c0
	struct FTransform GetRootCurrentTransform(); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootCurrentTransform // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x36381a0
	void GetMassAndExtents(int32_t ItemIndex, float& OutMass, struct FBox& OutExtents); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3637cf0
	struct FBox GetLocalBounds(); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3639d10
	struct TArray<struct FTransform> GetInitialLocalRestTransforms(); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLocalRestTransforms // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3638130
	int32_t GetInitialLevel(int32_t ItemIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3638300
	struct FString GetDebugInfo(); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3637970
	struct TArray<float> GetDamageThreshold(); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetDamageThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36372e0
	void CrumbleCluster(int32_t ItemIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36392a0
	void CrumbleActiveClusters(); // Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3639280
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3636cf0
	void ApplyLinearVelocity(int32_t ItemIndex, struct FVector& LinearVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36385f0
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3636fc0
	void ApplyInternalStrain(int32_t ItemIndex, struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3639470
	void ApplyExternalStrain(int32_t ItemIndex, struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36398c0
	void ApplyBreakingLinearVelocity(int32_t ItemIndex, struct FVector& LinearVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36387e0
	void ApplyBreakingAngularVelocity(int32_t ItemIndex, struct FVector& AngularVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36387e0
	void ApplyAssetDefaults(); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAssetDefaults // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36373d0
	void ApplyAngularVelocity(int32_t ItemIndex, struct FVector& AngularVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3638400
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x520 (Inherited: 0x460)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x468(0x18)
	bool bDebugDrawWholeCollection; // 0x480(0x01)
	bool bDebugDrawHierarchy; // 0x481(0x01)
	bool bDebugDrawClustering; // 0x482(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x483(0x01)
	bool bShowRigidBodyId; // 0x484(0x01)
	bool bShowRigidBodyCollision; // 0x485(0x01)
	bool bCollisionAtOrigin; // 0x486(0x01)
	bool bShowRigidBodyTransform; // 0x487(0x01)
	bool bShowRigidBodyInertia; // 0x488(0x01)
	bool bShowRigidBodyVelocity; // 0x489(0x01)
	bool bShowRigidBodyForce; // 0x48a(0x01)
	bool bShowRigidBodyInfos; // 0x48b(0x01)
	bool bShowTransformIndex; // 0x48c(0x01)
	bool bShowTransform; // 0x48d(0x01)
	bool bShowParent; // 0x48e(0x01)
	bool bShowLevel; // 0x48f(0x01)
	bool bShowConnectivityEdges; // 0x490(0x01)
	bool bShowGeometryIndex; // 0x491(0x01)
	bool bShowGeometryTransform; // 0x492(0x01)
	bool bShowBoundingBox; // 0x493(0x01)
	bool bShowFaces; // 0x494(0x01)
	bool bShowFaceIndices; // 0x495(0x01)
	bool bShowFaceNormals; // 0x496(0x01)
	bool bShowSingleFace; // 0x497(0x01)
	int32_t SingleFaceIndex; // 0x498(0x04)
	bool bShowVertices; // 0x49c(0x01)
	bool bShowVertexIndices; // 0x49d(0x01)
	bool bShowVertexNormals; // 0x49e(0x01)
	bool bUseActiveVisualization; // 0x49f(0x01)
	float PointThickness; // 0x4a0(0x04)
	float LineThickness; // 0x4a4(0x04)
	bool bTextShadow; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	float TextScale; // 0x4ac(0x04)
	float NormalScale; // 0x4b0(0x04)
	float AxisScale; // 0x4b4(0x04)
	float ArrowScale; // 0x4b8(0x04)
	struct FColor RigidBodyIdColor; // 0x4bc(0x04)
	float RigidBodyTransformScale; // 0x4c0(0x04)
	struct FColor RigidBodyCollisionColor; // 0x4c4(0x04)
	struct FColor RigidBodyInertiaColor; // 0x4c8(0x04)
	struct FColor RigidBodyVelocityColor; // 0x4cc(0x04)
	struct FColor RigidBodyForceColor; // 0x4d0(0x04)
	struct FColor RigidBodyInfoColor; // 0x4d4(0x04)
	struct FColor TransformIndexColor; // 0x4d8(0x04)
	float TransformScale; // 0x4dc(0x04)
	struct FColor LevelColor; // 0x4e0(0x04)
	struct FColor ParentColor; // 0x4e4(0x04)
	float ConnectivityEdgeThickness; // 0x4e8(0x04)
	struct FColor GeometryIndexColor; // 0x4ec(0x04)
	float GeometryTransformScale; // 0x4f0(0x04)
	struct FColor BoundingBoxColor; // 0x4f4(0x04)
	struct FColor FaceColor; // 0x4f8(0x04)
	struct FColor FaceIndexColor; // 0x4fc(0x04)
	struct FColor FaceNormalColor; // 0x500(0x04)
	struct FColor SingleFaceColor; // 0x504(0x04)
	struct FColor VertexColor; // 0x508(0x04)
	struct FColor VertexIndexColor; // 0x50c(0x04)
	struct FColor VertexNormalColor; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x518(0x08)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xd8(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
// Size: 0x470 (Inherited: 0x460)
struct AGeometryCollectionISMPoolActor : AActor {
	struct UGeometryCollectionISMPoolComponent* ISMPoolComp; // 0x460(0x08)
	struct UGeometryCollectionISMPoolDebugDrawComponent* ISMPoolDebugDrawComp; // 0x468(0x08)
};

// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
// Size: 0x400 (Inherited: 0x330)
struct UGeometryCollectionISMPoolComponent : USceneComponent {
	char pad_330[0xd0]; // 0x330(0xd0)
};

// Class GeometryCollectionEngine.GeometryCollectionISMPoolRenderer
// Size: 0xd0 (Inherited: 0x30)
struct UGeometryCollectionISMPoolRenderer : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct AGeometryCollectionISMPoolActor* ISMPoolActor; // 0x38(0x08)
	char pad_40[0x90]; // 0x40(0x90)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0x1f0 (Inherited: 0x30)
struct UGeometryCollection : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	bool EnableClustering; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t ClusterGroupIndex; // 0x44(0x04)
	int32_t MaxClusterLevel; // 0x48(0x04)
	enum class EDamageModelTypeEnum DamageModel; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<float> DamageThreshold; // 0x50(0x10)
	bool bUseSizeSpecificDamageThreshold; // 0x60(0x01)
	bool PerClusterOnlyDamageThreshold; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	struct FGeometryCollectionDamagePropagationData DamagePropagationData; // 0x64(0x0c)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float ConnectionGraphBoundsFilteringMargin; // 0x74(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x78(0x10)
	struct TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar; // 0x88(0x10)
	bool bUseFullPrecisionUVs; // 0x98(0x01)
	bool bStripOnCook; // 0x99(0x01)
	bool bStripRenderDataOnCook; // 0x9a(0x01)
	char pad_9B[0x5]; // 0x9b(0x05)
	ClassPtrProperty CustomRendererType; // 0xa0(0x08)
	struct FGeometryCollectionProxyMeshData RootProxyData; // 0xa8(0x10)
	struct TArray<struct FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes; // 0xb8(0x10)
	bool EnableNanite; // 0xc8(0x01)
	bool bConvertVertexColorsToSRGB; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct UPhysicalMaterial* PhysicsMaterial; // 0xd0(0x08)
	bool bDensityFromPhysicsMaterial; // 0xd8(0x01)
	bool bMassAsDensity; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	float Mass; // 0xdc(0x04)
	float MinimumMassClamp; // 0xe0(0x04)
	bool bImportCollisionFromSource; // 0xe4(0x01)
	bool bScaleOnRemoval; // 0xe5(0x01)
	bool bRemoveOnMaxSleep; // 0xe6(0x01)
	char pad_E7[0x1]; // 0xe7(0x01)
	struct FVector2D MaximumSleepTime; // 0xe8(0x10)
	struct FVector2D RemovalDuration; // 0xf8(0x10)
	bool bSlowMovingAsSleeping; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float SlowMovingVelocityThreshold; // 0x10c(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x110(0x10)
	bool EnableRemovePiecesOnFracture; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x128(0x10)
	struct UDataflow* DataflowAsset; // 0x138(0x08)
	struct FString DataflowTerminal; // 0x140(0x10)
	struct TMap<struct FString, struct FString> Overrides; // 0x150(0x50)
	struct FGuid PersistentGuid; // 0x1a0(0x10)
	struct FGuid StateGuid; // 0x1b0(0x10)
	int32_t RootIndex; // 0x1c0(0x04)
	int32_t BoneSelectedMaterialIndex; // 0x1c4(0x04)
	struct UMaterialInterface* BoneSelectedMaterial; // 0x1c8(0x08)
	char pad_1D0[0x10]; // 0x1d0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x1e0(0x10)

	void SetEnableNanite(bool bValue); // Function GeometryCollectionEngine.GeometryCollection.SetEnableNanite // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x366bab0
	void SetConvertVertexColorsToSRGB(bool bValue); // Function GeometryCollectionEngine.GeometryCollection.SetConvertVertexColorsToSRGB // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x366b9b0
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x550 (Inherited: 0x460)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x460(0x08)
	struct UMaterial* RayMarchMaterial; // 0x468(0x08)
	float SurfaceTolerance; // 0x470(0x04)
	float Isovalue; // 0x474(0x04)
	bool Enabled; // 0x478(0x01)
	bool RenderVolumeBoundingBox; // 0x479(0x01)
	char pad_47A[0xd6]; // 0x47a(0xd6)
};

// Class GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
// Size: 0x700 (Inherited: 0x6e0)
struct UGeometryCollectionISMPoolDebugDrawComponent : UDebugDrawComponent {
	bool bShowGlobalStats; // 0x6e0(0x01)
	bool bShowStats; // 0x6e1(0x01)
	bool bShowBounds; // 0x6e2(0x01)
	char pad_6E3[0x5]; // 0x6e3(0x05)
	struct UInstancedStaticMeshComponent* SelectedComponent; // 0x6e8(0x08)
	char pad_6F0[0x10]; // 0x6f0(0x10)
};

