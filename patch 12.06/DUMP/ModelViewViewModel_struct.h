// Enum ModelViewViewModel.EMVVMExecutionMode
enum class EMVVMExecutionMode : uint8 {
	Immediate = 0,
	Delayed = 1,
	Tick = 2,
	DelayedWhenSharedElseImmediate = 3,
	EMVVMExecutionMode_MAX = 4
};

// Enum ModelViewViewModel.EMVVMBindingMode
enum class EMVVMBindingMode : uint8 {
	OneTimeToDestination = 0,
	OneWayToDestination = 1,
	TwoWay = 2,
	OneTimeToSource = 3,
	OneWayToSource = 4,
	EMVVMBindingMode_MAX = 5
};

// ScriptStruct ModelViewViewModel.MVVMAvailableBinding
// Size: 0x10 (Inherited: 0x00)
struct FMVVMAvailableBinding {
	struct FMVVMBindingName BindingName; // 0x00(0x0c)
	bool bIsReadable; // 0x0c(0x01)
	bool bIsWritable; // 0x0d(0x01)
	bool bHasNotify; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct ModelViewViewModel.MVVMBindingName
// Size: 0x0c (Inherited: 0x00)
struct FMVVMBindingName {
	struct FName BindingName; // 0x00(0x0c)
};

// ScriptStruct ModelViewViewModel.MVVMEventField
// Size: 0x01 (Inherited: 0x00)
struct FMVVMEventField {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ModelViewViewModel.MVVMViewModelContextInstance
// Size: 0x20 (Inherited: 0x00)
struct FMVVMViewModelContextInstance {
	struct FMVVMViewModelContext Context; // 0x00(0x18)
	struct UMVVMViewModelBase* Instance; // 0x18(0x08)
};

// ScriptStruct ModelViewViewModel.MVVMViewModelContext
// Size: 0x18 (Inherited: 0x00)
struct FMVVMViewModelContext {
	struct UMVVMViewModelBase* ContextClass; // 0x00(0x08)
	struct FName ContextName; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ModelViewViewModel.MVVMVCompiledFields
// Size: 0x10 (Inherited: 0x00)
struct FMVVMVCompiledFields {
	struct UStruct* ClassOrScriptStruct; // 0x00(0x08)
	int16_t LibraryStartIndex; // 0x08(0x02)
	int16_t NumberOfProperties; // 0x0a(0x02)
	int16_t NumberOfFunctions; // 0x0c(0x02)
	int16_t NumberOfFieldIds; // 0x0e(0x02)
};

// ScriptStruct ModelViewViewModel.MVVMVCompiledFieldPath
// Size: 0x04 (Inherited: 0x00)
struct FMVVMVCompiledFieldPath {
	int16_t StartIndex; // 0x00(0x02)
	int16_t Num; // 0x02(0x02)
};

// ScriptStruct ModelViewViewModel.MVVMVCompiledFieldId
// Size: 0x02 (Inherited: 0x00)
struct FMVVMVCompiledFieldId {
	int16_t FieldIdIndex; // 0x00(0x02)
};

// ScriptStruct ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
// Size: 0x04 (Inherited: 0x00)
struct FMVVMCompiledLoadedPropertyOrFunctionIndex {
	int16_t Index; // 0x00(0x02)
	char bIsObjectProperty : 1; // 0x02(0x01)
	char bIsScriptStructProperty : 1; // 0x02(0x01)
	char bIsProperty : 1; // 0x02(0x01)
	char pad_2_3 : 5; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
};

// ScriptStruct ModelViewViewModel.MVVMVCompiledBinding
// Size: 0x0e (Inherited: 0x00)
struct FMVVMVCompiledBinding {
	struct FMVVMVCompiledFieldPath SourceFieldPath; // 0x00(0x04)
	struct FMVVMVCompiledFieldPath DestinationFieldPath; // 0x04(0x04)
	struct FMVVMVCompiledFieldPath ConversionFunctionFieldPath; // 0x08(0x04)
	char Flags; // 0x0c(0x01)
	char pad_D[0x1]; // 0x0d(0x01)
};

// ScriptStruct ModelViewViewModel.MVVMCompiledBindingLibrary
// Size: 0x60 (Inherited: 0x00)
struct FMVVMCompiledBindingLibrary {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct UFunction*> LoadedFunctions; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
	struct TArray<struct FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths; // 0x30(0x10)
	struct TArray<struct FMVVMVCompiledFields> CompiledFields; // 0x40(0x10)
	struct TArray<struct FName> CompiledFieldNames; // 0x50(0x10)
};

// ScriptStruct ModelViewViewModel.MVVMViewModelCollection
// Size: 0x28 (Inherited: 0x00)
struct FMVVMViewModelCollection {
	struct TArray<struct FMVVMViewModelContextInstance> ViewModelInstances; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct ModelViewViewModel.MVVMViewSource
// Size: 0x20 (Inherited: 0x00)
struct FMVVMViewSource {
	struct UObject* Source; // 0x00(0x08)
	struct FName SourceName; // 0x08(0x0c)
	int32_t RegisteredCount; // 0x14(0x04)
	bool bCreatedSource; // 0x18(0x01)
	bool bSetManually; // 0x19(0x01)
	bool bAssignedToUserWidgetProperty; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
};

// ScriptStruct ModelViewViewModel.MVVMViewClass_SourceCreator
// Size: 0x48 (Inherited: 0x00)
struct FMVVMViewClass_SourceCreator {
	struct UObject* ExpectedSourceType; // 0x00(0x08)
	struct UMVVMViewModelContextResolver* Resolver; // 0x08(0x08)
	struct FMVVMViewModelContext GlobalViewModelInstance; // 0x10(0x18)
	struct FMVVMVCompiledFieldPath FieldPath; // 0x28(0x04)
	struct FName PropertyName; // 0x2c(0x0c)
	struct FName ParentSourceName; // 0x38(0x0c)
	char Flags; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct ModelViewViewModel.MVVMViewClass_CompiledBinding
// Size: 0x24 (Inherited: 0x00)
struct FMVVMViewClass_CompiledBinding {
	struct FMVVMVCompiledFieldId FieldId; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName SourcePropertyName; // 0x04(0x0c)
	struct FMVVMVCompiledBinding Binding; // 0x10(0x0e)
	enum class EMVVMExecutionMode ExecutionMode; // 0x1e(0x01)
	int8_t EvaluateSourceCreatorIndex; // 0x1f(0x01)
	char Flags; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

