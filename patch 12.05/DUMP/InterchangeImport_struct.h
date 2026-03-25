// Enum InterchangeImport.EMaterialXLuminanceMode
enum class EMaterialXLuminanceMode : uint8 {
	ACEScg = 0,
	Rec709 = 1,
	Rec2020 = 2,
	Rec2100 = 2,
	Custom = 3,
	EMaterialXLuminanceMode_MAX = 4
};

// Enum InterchangeImport.EMaterialXTextureSampleBlurFilter
enum class EMaterialXTextureSampleBlurFilter : uint8 {
	Box = 0,
	Gaussian = 1,
	EMaterialXTextureSampleBlurFilter_MAX = 2
};

// Enum InterchangeImport.EMAterialXTextureSampleBlurKernel
enum class EMAterialXTextureSampleBlurKernel : uint8 {
	Kernel1 = 0,
	Kernel3 = 1,
	Kernel5 = 2,
	Kernel7 = 3,
	EMAterialXTextureSampleBlurKernel_MAX = 4
};

