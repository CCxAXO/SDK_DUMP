// Class StructUtilsEngine.StructUtilsFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UStructUtilsFunctionLibrary : UBlueprintFunctionLibrary {

	void SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, int32_t& Value); // Function StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7067ba0
	void Reset(struct FInstancedStruct& InstancedStruct, struct UScriptStruct* StructType); // Function StructUtilsEngine.StructUtilsFunctionLibrary.Reset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7067350
	bool NotEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B); // Function StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7066d10
	struct FInstancedStruct MakeInstancedStruct(int32_t& Value); // Function StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7067900
	bool IsValid_InstancedStruct(struct FInstancedStruct& InstancedStruct); // Function StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7066bb0
	enum class EStructUtilsResult IsInstancedStructValid(struct FInstancedStruct& InstancedStruct); // Function StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x70671f0
	void GetInstancedStructValue(enum class EStructUtilsResult& ExecResult, struct FInstancedStruct& InstancedStruct, int32_t& Value); // Function StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7067f40
	bool EqualEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B); // Function StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7066f80
};

