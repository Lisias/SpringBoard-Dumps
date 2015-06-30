/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBApplicationController : XXUnknownSuperclass {
	NSDictionary *_pendingApplicationDictionaries;
	NSMutableDictionary *_applications;
	NSMutableDictionary *_applicationsByBundleIdentifer;
	NSMutableSet *_applicationsUsingLocation;
	NSTimer *_locationIconTimer;
	BOOL _locationIconRemovalPending;
	SBProcess *_processCurrentlyRecordingAudio;
	NSDictionary *_backgroundDisplayDict;
	unsigned _ignoreUninstallationEventCount;
	CPDistributedNotificationCenter *_appStateNotificationCenter;
	NSOperationQueue *_backgroundOperationQueue;
	NSLock *_applicationsLock;
}
@property(retain) NSDictionary *pendingApplicationDictionaries;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_applicationInstallationCallback:(id)callback;
- (void)_awayControllerDidLock:(id)_awayController;
- (id)_defaultRoleForApplication:(id)application;
- (void)_handleInstalledApplicationDictionaryIfReceived;
- (BOOL)_hasRequiredCapabilities:(id)capabilities;
- (BOOL)_locationActiveForAppWithDetails:(id)details;
- (void)_locationIconTimerFired:(id)fired;
- (void)_mediaServerConnectionDied:(id)died;
- (void)_recordingStateChanged:(id)changed;
- (void)_registerForAudioRecordingNotifications;
- (void)_registerForAwayControllerDidLockNotification;
- (void)_reloadBackgroundIDsDict;
- (void)_removeLocationIconTimer;
- (void)_setLocationIconTimer;
- (void)_setSuspendTypeForApp:(id)app;
- (void)_unregisterForAudioRecordingNotifications;
- (void)_updateLocationState;
- (id)allApplications;
- (Class)applicationClassForBundleIdentifier:(id)bundleIdentifier;
- (id)applicationCurrentlyRecordingAudio;
- (void)applicationStateChanged:(id)changed state:(unsigned)state;
- (id)applicationWithDisplayIdentifier:(id)displayIdentifier;
- (id)applicationWithPid:(int)pid;
- (id)applicationsWithBundleIdentifier:(id)bundleIdentifier;
- (id)applicationsWithPid:(int)pid;
- (BOOL)appsAreUsingLocation;
- (BOOL)aquireInstallationAssertionForDisplayIdentifier:(id)displayIdentifier clientPort:(unsigned)port;
- (void)buildLocationState;
- (id)dataActivation;
- (void)dealloc;
- (id)displayNameForInfoDictionary:(id)infoDictionary inBundle:(id)bundle atPath:(id)path;
- (id)iPod;
- (id)loadApplications;
- (void)loadApplicationsAndIcons:(id)icons reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons4;
- (void)loadRolesWithBundle:(id)bundle bundlePath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated seatbeltEnvironmentVariables:(id)variables;
- (id)primaryRoleApplicationWithPid:(int)pid;
- (void)processPendingInstalls;
- (id)processWithPid:(int)pid;
- (void)removeApplicationsFromModelWithBundleIdentifier:(id)bundleIdentifier;
- (id)rolesForInfoPlist:(id)infoPlist;
- (id)rolesForRoleDefinitions:(id)roleDefinitions;
- (void)setApplicationRoles:(id)roles withProcess:(id)process;
- (void)uninstallApplication:(id)application;
- (void)updateBackgroundAppPrefs;
- (void)updateSchemesForRoleDefinition:(id)roleDefinition displayIdentifier:(id)identifier application:(id)application;
- (void)waitForOperationsToComplete;
- (id)widgetRoles;
@end

