// Enum RGISocialNotifications.ENotificationType
enum class ENotificationType : uint8 {
	Unknown = 0,
	FriendRequest = 1,
	PartyInvite = 2,
	ENotificationType_MAX = 3
};

// Enum RGISocialNotifications.NotificationCounterType
enum class NotificationCounterType : uint8 {
	Simple = 0,
	Aggregate = 1,
	Composite = 2,
	All = 3,
	None = 4,
	NotificationCounterType_MAX = 5
};

