// Class ImgMediaFactory.ImgMediaSettings
// Size: 0x70 (Inherited: 0x30)
struct UImgMediaSettings : UObject {
	struct FFrameRate DefaultFrameRate; // 0x30(0x08)
	bool BandwidthThrottlingEnabled; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float CacheBehindPercentage; // 0x3c(0x04)
	float CacheSizeGB; // 0x40(0x04)
	int32_t CacheThreads; // 0x44(0x04)
	int32_t CacheThreadStackSizeKB; // 0x48(0x04)
	float GlobalCacheSizeGB; // 0x4c(0x04)
	bool UseGlobalCache; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	uint32_t ExrDecoderThreads; // 0x54(0x04)
	struct FString DefaultProxy; // 0x58(0x10)
	bool UseDefaultProxy; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

