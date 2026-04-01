// Class StructUtilsEngine.StructUtilsFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UStructUtilsFunctionLibrary : UBlueprintFunctionLibrary {

	void SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, int32_t& Value); // Function StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x70f7270
	void Reset(struct FInstancedStruct& InstancedStruct, struct UScriptStruct* StructType); // Function StructUtilsEngine.StructUtilsFunctionLibrary.Reset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x70f6a20
	bool NotEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B); // Function StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x70f63e0
	struct FInstancedStruct MakeInstancedStruct(int32_t& Value); // Function StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x70f6fd0
	bool IsValid_InstancedStruct(struct FInstancedStruct& InstancedStruct); // Function StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x70f6280
	enum class EStructUtilsResult IsInstancedStructValid(struct FInstancedStruct& InstancedStruct); // Function StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x70f68c0
	void GetInstancedStructValue(enum class EStructUtilsResult& ExecResult, struct FInstancedStruct& InstancedStruct, int32_t& Value); // Function StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x70f7610
	bool EqualEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B); // Function StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x70f6650
};

