/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDisplay.h"

@class SBAppContextHostView, NSDictionary, NSMutableSet, NSString, UIRemoteApplication, NSMutableArray, NSArray, SBCFBundle, NSTimer;

@interface SBApplication : SBDisplay {
	NSString *_bundleIdentifier;
	NSString *_roleIdentifier;
	NSString *_displayIdentifier;
	NSString *_path;
	NSDictionary *_spotlightIconNames;
	NSString *_bundleVersion;
	NSString *_longDisplayName;
	NSString *_defaultImageName;
	NSDictionary *_searchDomainLaunchInfo;
	SBCFBundle *_cachedBundle;
	NSString *_launchdJobLabel;
	int _pid;
	SBApplicationTimes *_times;
	double _modificationDate;
	NSString *_displayName;
	NSString *_demoRole;
	NSMutableSet *_statusBarItemSet;
	NSMutableArray *_tags;
	UIRemoteApplication *_remoteApplication;
	SBAppContextHostView *_contextHostView;
	NSDictionary *_seatbeltEnvVars;
	NSString *_signerIdentity;
	unsigned _eventPort;
	unsigned _activationEventSequenceNumber;
	NSTimer *_watchdogTimer;
	unsigned _watchdogType : 4;
	unsigned _doingBackgroundNetworking : 16;
	unsigned _failedLaunchCount : 8;
	unsigned _provisioningProfileValidated : 1;
	unsigned _enabled : 1;
	unsigned _useDemoRole : 1;
	unsigned _isDefaultRole : 1;
	unsigned _isSystemApplication : 1;
	unsigned _isSystemProvisioningApplication : 1;
	unsigned _hasMiniAlerts : 1;
	unsigned _isUnsupportediBooks : 1;
	unsigned _isRevealable : 1;
	unsigned _uiRequiresPersistentWiFi : 1;
	unsigned _dataFlagsIsSet : 1;
	unsigned _isClassic : 1;
	unsigned _supportsPortraitOrientation : 1;
	unsigned _supportsPortraitUpsideDownOrientation : 1;
	unsigned _supportsLandscapeLeftOrientation : 1;
	unsigned _supportsLandscapeRightOrientation : 1;
	unsigned _hasShownDataPlanAlertSinceLock : 1;
	unsigned _defaultStatusBarStyle : 8;
	unsigned _defaultInterfaceOrientation : 8;
	unsigned _sbUsesNetwork : 8;
	unsigned _dataFlags : 8;
	unsigned _launchAlerts : 8;
	int _jetsamPriority;
	int _ratingRank;
	Class _iconClass;
	NSArray *_customMachServices;
	NSArray *_externalAccessoryProtocols;
}
+ (void)flushLaunchAlertsOfType:(int)type;
+ (id)snapshotsDirectory;
+ (void)userElapsedCPUTime:(double *)time systemElapsedCPUTime:(double *)time2 idleElapsedCPUTime:(double *)time3;
- (id)initWithBundleIdentifier:(id)bundleIdentifier roleIdentifier:(id)identifier path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
- (void)_addInternalDebugVariablesToEnvironment;
- (id)_additionalDisplayQualification;
- (void)_cancelAutoRelaunch;
- (void)_cancelWatchdogTimer;
- (void)_clearContextHostView;
- (void)_clearWatchdogAssertions;
- (BOOL)_doesProfileMatchSignerIdentity:(MISProfileRef)identity;
- (id)_expirationDateForProvisioningProfile;
- (void)_hideContextHostView;
- (void)_markWatchdogCPUTimes;
- (id)_pathIfFileExistsAtPath:(id)path;
- (void)_purgeRemoteApplication;
- (void)_relaunchAfterExit;
- (void)_resetDataUsage;
- (void)_resetEventPort;
- (void)_scheduleWatchdogAssertionWithTimeout:(double *)timeout token:(unsigned)token;
- (void)_setContextHostView:(id)view;
- (void)_setDataUsage:(int)usage;
- (void)_setDoingBackgroundNetworking:(unsigned)networking;
- (BOOL)_shouldAutoLaunchOnBoot:(BOOL)boot;
- (BOOL)_signatureNeedsExplicitUserTrust;
- (void)_startWatchdogTimerType:(int)type;
- (void)_unregisterRemoteViewsAndSheets;
- (void)_watchdogAssertExpired:(id)expired;
- (void)_watchdogFired;
- (void)_watchdogFiredFired;
- (void)activate;
- (unsigned)activationEventSequenceNumber;
- (unsigned)addWatchdogAssertionWithTimeout:(double *)timeout;
- (int)applicationSignatureState;
- (double)autoDimTime;
- (void)autoLaunchIfNecessaryOnBoot:(BOOL)boot;
- (double)autoLockTime;
- (id)bundle;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (int)classicDefaultStatusBarMode;
- (id)contextHostView;
- (int)dataUsage;
- (void)deactivate;
- (void)deactivated;
- (void)dealloc;
- (id)defaultImage:(BOOL *)image;
- (id)defaultImage:(BOOL *)image originalOrientation:(int *)orientation currentOrientation:(int *)orientation3;
- (int)defaultStatusBarMode;
- (id)demoRole;
- (id)displayIdentifier;
- (id)displayName;
- (double)elapsedCPUTime;
- (BOOL)enabled;
- (unsigned)eventPort;
- (void)exitedAbnormally;
- (void)exitedCommon;
- (void)exitedNormally;
- (id)externalAccessoryProtocols;
- (int)failedLaunchCount;
- (void)flushSnapshotsForAllRoles:(BOOL)allRoles;
- (BOOL)hasMiniAlerts;
- (BOOL)hasShownDataPlanAlertSinceLock;
- (Class)iconClass;
- (BOOL)isBeingDebugged;
- (BOOL)isClassic;
- (BOOL)isDefaultRole;
- (BOOL)isRevealable;
- (BOOL)isSameExecutableAsApplication:(id)application;
- (BOOL)isSystemApplication;
- (BOOL)isSystemProvisioningApplication;
- (BOOL)isUnsupportediBooks;
- (BOOL)isUserRatable;
- (BOOL)isWidgetApplication;
- (unsigned)jetsamPriority;
- (void)kill;
- (BOOL)launch;
- (void)launchFailed;
- (int)launchInterfaceOrientationForCurrentOrientation:(int)currentOrientation;
- (void)launchSucceeded:(BOOL)succeeded;
- (id)launchdJobLabel;
- (id)longDisplayName;
- (void)markApplicationIdentityAsTrusted;
- (void)markLaunchTime;
- (double)modificationDate;
- (void)noteAddedStatusBarItem:(id)item;
- (void)noteRemovedStatusBarItem:(id)item;
- (id)path;
- (int)pid;
- (void)prepareForUninstallation;
- (BOOL)provisioningProfileValidated;
- (void)purgeBundleCaches;
- (int)ratingRank;
- (id)remoteApplication;
- (void)removeStatusBarItems;
- (void)removeWatchdogAssertionWithToken:(unsigned)token;
- (void)renewWatchdogAssertionWithToken:(unsigned)token timeout:(double *)timeout;
- (void)resetLaunchAlertForType:(int)type;
- (id)roleIdentifier;
- (id)seatbeltEnvironmentVariables;
- (void)setDemoRole:(id)role;
- (void)setDisplayName:(id)name;
- (void)setEnabled:(BOOL)enabled;
- (void)setHasMiniAlerts:(BOOL)alerts;
- (void)setHasShownDataPlanAlertSinceLock:(BOOL)lock;
- (void)setIsDefaultRole:(BOOL)role;
- (void)setIsUnsupportediBooks:(BOOL)books;
- (void)setLaunchdJobLabel:(id)label;
- (void)setPid:(int)pid;
- (void)setRoleIdentifier:(id)identifier;
- (void)setSeatbeltEnvironmentVariables:(id)variables;
- (void)setTags:(id)tags;
- (void)setUseDemoRole:(BOOL)role;
- (void)setUsesBackgroundNetwork:(BOOL)network;
- (void)setUsesEdgeNetwork:(BOOL)network;
- (void)setUsesWiFiNetwork:(BOOL)network;
- (BOOL)shouldLaunchPNGless;
- (BOOL)shouldWatchdog;
- (BOOL)showLaunchAlertForType:(int)type;
- (id)signerIdentity;
- (id)spotlightIconNames;
- (void)startWatchdogTimerForPhoneSlideIfNecessary;
- (int)statusBarMode;
- (id)tags;
- (void)validateSystemProvisioningEntitlements:(XXStruct_kUSYWB *)entitlements;
- (void)willActivateOtherRole:(id)role;
@end

