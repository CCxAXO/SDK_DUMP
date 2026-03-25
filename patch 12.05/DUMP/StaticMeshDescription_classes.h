// Class StaticMeshDescription.StaticMeshDescription
// Size: 0x2f8 (Inherited: 0x2f8)
struct UStaticMeshDescription : UMeshDescriptionBase {

	void SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2624680
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, struct FName& SlotName); // Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2623d30
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2624a40
	void CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID& PolygonID_PlusX, struct FPolygonID& PolygonID_MinusX, struct FPolygonID& PolygonID_PlusY, struct FPolygonID& PolygonID_MinusY, struct FPolygonID& PolygonID_PlusZ, struct FPolygonID& PolygonID_MinusZ); // Function StaticMeshDescription.StaticMeshDescription.CreateCube // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2624050
};

