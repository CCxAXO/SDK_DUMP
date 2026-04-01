// Class MetasoundFrontend.MetaSoundDocumentInterface
// Size: 0x30 (Inherited: 0x30)
struct UMetaSoundDocumentInterface : UInterface {
};

// Class MetasoundFrontend.MetasoundParameterPack
// Size: 0x48 (Inherited: 0x30)
struct UMetasoundParameterPack : UObject {
	char pad_30[0x18]; // 0x30(0x18)

	enum class ESetParamResult SetTrigger(struct FName ParameterName, bool OnlyIfExists); // Function MetasoundFrontend.MetasoundParameterPack.SetTrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x7cf4f60
	enum class ESetParamResult SetString(struct FName ParameterName, struct FString InValue, bool OnlyIfExists); // Function MetasoundFrontend.MetasoundParameterPack.SetString // (Final|Native|Public|BlueprintCallable) // @ game+0x7cf5160
	enum class ESetParamResult SetInt(struct FName ParameterName, int32_t InValue, bool OnlyIfExists); // Function MetasoundFrontend.MetasoundParameterPack.SetInt // (Final|Native|Public|BlueprintCallable) // @ game+0x7cf5720
	enum class ESetParamResult SetFloat(struct FName ParameterName, float InValue, bool OnlyIfExists); // Function MetasoundFrontend.MetasoundParameterPack.SetFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x7cf5460
	enum class ESetParamResult SetBool(struct FName ParameterName, bool InValue, bool OnlyIfExists); // Function MetasoundFrontend.MetasoundParameterPack.SetBool // (Final|Native|Public|BlueprintCallable) // @ game+0x7cf59b0
	struct UMetasoundParameterPack* MakeMetasoundParameterPack(); // Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7cf5c70
	bool HasTrigger(struct FName ParameterName); // Function MetasoundFrontend.MetasoundParameterPack.HasTrigger // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf3f20
	bool HasString(struct FName ParameterName); // Function MetasoundFrontend.MetasoundParameterPack.HasString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf4050
	bool HasInt(struct FName ParameterName); // Function MetasoundFrontend.MetasoundParameterPack.HasInt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf42b0
	bool HasFloat(struct FName ParameterName); // Function MetasoundFrontend.MetasoundParameterPack.HasFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf4180
	bool HasBool(struct FName ParameterName); // Function MetasoundFrontend.MetasoundParameterPack.HasBool // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf43e0
	bool GetTrigger(struct FName ParameterName, enum class ESetParamResult& Result); // Function MetasoundFrontend.MetasoundParameterPack.GetTrigger // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf4510
	struct FString GetString(struct FName ParameterName, enum class ESetParamResult& Result); // Function MetasoundFrontend.MetasoundParameterPack.GetString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf4700
	int32_t GetInt(struct FName ParameterName, enum class ESetParamResult& Result); // Function MetasoundFrontend.MetasoundParameterPack.GetInt // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf4b80
	float GetFloat(struct FName ParameterName, enum class ESetParamResult& Result); // Function MetasoundFrontend.MetasoundParameterPack.GetFloat // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf4990
	bool GetBool(struct FName ParameterName, enum class ESetParamResult& Result); // Function MetasoundFrontend.MetasoundParameterPack.GetBool // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cf4d70
};

// Class MetasoundFrontend.MetaSoundBuilderDocument
// Size: 0x220 (Inherited: 0x30)
struct UMetaSoundBuilderDocument : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMetasoundFrontendDocument Document; // 0x38(0x1e0)
	ClassPtrProperty MetaSoundUClass; // 0x218(0x08)
};

