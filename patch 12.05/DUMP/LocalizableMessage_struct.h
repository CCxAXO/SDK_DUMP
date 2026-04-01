// ScriptStruct LocalizableMessage.LocalizableMessageParameterEntry
// Size: 0x20 (Inherited: 0x00)
struct FLocalizableMessageParameterEntry {
	struct FString Key; // 0x00(0x10)
	struct FInstancedStruct Value; // 0x10(0x10)
};

// ScriptStruct LocalizableMessage.LocalizableMessage
// Size: 0x30 (Inherited: 0x00)
struct FLocalizableMessage {
	struct FString Key; // 0x00(0x10)
	struct FString DefaultText; // 0x10(0x10)
	struct TArray<struct FLocalizableMessageParameterEntry> Substitutions; // 0x20(0x10)
};

// ScriptStruct LocalizableMessage.LocalizableMessageParameterInt
// Size: 0x08 (Inherited: 0x00)
struct FLocalizableMessageParameterInt {
	int64_t Value; // 0x00(0x08)
};

// ScriptStruct LocalizableMessage.LocalizableMessageParameterFloat
// Size: 0x08 (Inherited: 0x00)
struct FLocalizableMessageParameterFloat {
	double Value; // 0x00(0x08)
};

// ScriptStruct LocalizableMessage.LocalizableMessageParameterString
// Size: 0x10 (Inherited: 0x00)
struct FLocalizableMessageParameterString {
	struct FString Value; // 0x00(0x10)
};

// ScriptStruct LocalizableMessage.LocalizableMessageParameterMessage
// Size: 0x30 (Inherited: 0x00)
struct FLocalizableMessageParameterMessage {
	struct FLocalizableMessage Value; // 0x00(0x30)
};

