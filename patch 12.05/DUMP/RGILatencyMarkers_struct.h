// Enum RGILatencyMarkers.ERGILatencyIntervalType
enum class ERGILatencyIntervalType : uint8 {
	Work = 0,
	Slack = 1,
	Slop = 2,
	Count = 3,
	ERGILatencyIntervalType_MAX = 4
};

// Enum RGILatencyMarkers.ERGILatencyMarkerType
enum class ERGILatencyMarkerType : uint8 {
	SimulationStart = 0,
	SimulationEnd = 1,
	RenderSubmitStart = 2,
	RenderSubmitEnd = 3,
	PresentStart = 4,
	PresentEnd = 5,
	InputSample = 6,
	TriggerFlash = 7,
	PCLatencyPing = 8,
	DrawSceneCommandEnqueued = 20,
	DrawSceneCommandStart = 21,
	DrawSceneCommandEnd = 22,
	SlateDrawWindowCommandStart = 23,
	EndDrawingViewportRHICommandEnqueued = 24,
	VALRenderSyncStart = 25,
	VALRenderSyncEnd = 26,
	Count = 27,
	ERGILatencyMarkerType_MAX = 28
};

// ScriptStruct RGILatencyMarkers.RGILatencyInterval
// Size: 0x03 (Inherited: 0x00)
struct FRGILatencyInterval {
	enum class ERGILatencyIntervalType IntervalType; // 0x00(0x01)
	enum class ERGILatencyMarkerType BeginMarker; // 0x01(0x01)
	enum class ERGILatencyMarkerType EndMarker; // 0x02(0x01)
};

