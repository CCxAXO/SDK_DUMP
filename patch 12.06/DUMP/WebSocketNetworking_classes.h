// Class WebSocketNetworking.WebSocketConnection
// Size: 0x1e70 (Inherited: 0x1e60)
struct UWebSocketConnection : UNetConnection {
	char pad_1E60[0x10]; // 0x1e60(0x10)
};

// Class WebSocketNetworking.WebSocketNetDriver
// Size: 0x860 (Inherited: 0x850)
struct UWebSocketNetDriver : UNetDriver {
	int32_t WebSocketPort; // 0x850(0x04)
	char pad_854[0xc]; // 0x854(0x0c)
};

