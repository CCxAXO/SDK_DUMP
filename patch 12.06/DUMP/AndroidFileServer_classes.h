// Class AndroidFileServer.AndroidFileServerBPLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAndroidFileServerBPLibrary : UBlueprintFunctionLibrary {

	bool StopFileServer(bool bUSB, bool bNetwork); // Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7cbc800
	bool StartFileServer(bool bUSB, bool bNetwork, int32_t Port); // Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7cbc980
	enum class EAFSActiveType IsFileServerRunning(); // Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c6df80
};

