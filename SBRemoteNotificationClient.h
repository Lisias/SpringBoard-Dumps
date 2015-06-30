/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBRemoteNotificationClient : XXUnknownSuperclass <NSCoding> {
	NSString *_bundleIdentifier;
	NSString *_environment;
	NSData *_lastKnownDeviceToken;
	NSDate *_missingDate;
	BOOL _backgroundDeliveryDisabled;
	int _dayOfLastNewsstandPush;
	unsigned _dailyCountOfNewsstandPushes;
	BOOL _backgroundAppRefreshAllowed;
	BOOL _wantsPush;
	NSString *_pushDisabledReason;
}
@property(assign, nonatomic, getter=isBackgroundAppRefreshAllowed) BOOL backgroundAppRefreshAllowed;
@property(assign, nonatomic) BOOL backgroundDeliveryDisabled;
@property(readonly, retain, nonatomic) NSString *bundleIdentifier;
@property(assign, nonatomic) unsigned dailyCountOfNewsstandPushes;
@property(assign, nonatomic) int dayOfLastNewsstandPush;
@property(retain, nonatomic) NSString *environment;
@property(retain, nonatomic) NSData *lastKnownDeviceToken;
@property(retain, nonatomic) NSDate *missingDate;
@property(readonly, assign, nonatomic, getter=isNewsstandApplication) BOOL newsstandApplication;
@property(retain, nonatomic) NSString *pushDisabledReason;
@property(readonly, assign, nonatomic, getter=isPushEnabled) BOOL pushEnabled;
@property(readonly, assign, nonatomic) BOOL supportsBackgroundAppRefresh;
@property(assign, nonatomic, getter=doesWantPush) BOOL wantsPush;
- (id)initWithBundleIdentifier:(id)bundleIdentifier;
- (id)initWithCoder:(id)coder;
- (BOOL)allowsUserNotifications;
- (id)application;
- (BOOL)backgroundAppRefreshAllowedForBundleIdentifier:(id)bundleIdentifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isNewsstandPushEnabled;
- (BOOL)wantsPushWithCoder:(id)coder;
@end

