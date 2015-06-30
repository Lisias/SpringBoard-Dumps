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
	NSMutableSet *_applicationsPlayingMutedAudioSinceLastLock;
	SBProcess *_processCurrentlyRecordingAudio;
	int _locationStatusBarIconType;
	NSDictionary *_backgroundDisplayDict;
	unsigned _ignoreUninstallationEventCount;
	CPDistributedNotificationCenter *_appStateNotificationCenter;
	NSOperationQueue *_backgroundOperationQueue;
	NSLock *_applicationsLock;
	NSMutableDictionary *_systemAppsVisibilityOverrides;
}
@property(retain) NSDictionary *pendingApplicationDictionaries;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_applicationInstallationCallback:(id)callback;
- (void)_decrementUninstallationEventCount;
- (void)_handleInstalledApplicationDictionaryIfReceived;
- (BOOL)_hasRequiredCapabilities:(id)capabilities;
- (void)_loadApplication:(id)application dictionary:(id)dictionary;
- (void)_loadApplication:(id)application dictionary:(id)dictionary allowDemoOnly:(BOOL)only;
- (id)_loadApplications:(BOOL)applications;
- (void)_lockStateChanged:(id)changed;
- (void)_mediaServerConnectionDied:(id)died;
- (void)_postLoadApplications:(id)applications removed:(id)removed modified:(id)modified updateRestrictions:(BOOL)restrictions;
- (void)_preLoadApplications;
- (void)_recordingStateChanged:(id)changed;
- (void)_registerForAVSystemControllerNotifications;
- (void)_reloadBackgroundIDsDict;
- (void)_sendInstalledAppsDidChangeNotification:(id)_sendInstalledApps removed:(id)removed modified:(id)modified;
- (void)_setSuspendTypeForApp:(id)app;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_unusuallyMutedAudioPlaying:(id)playing;
- (BOOL)_updateAppIconVisibilityOverrides;
- (void)_updateLocationState;
- (id)allApplications;
- (int)appVisibilityOverrideForBundleIdentifier:(id)bundleIdentifier;
- (Class)applicationClassForInfoDictionary:(id)infoDictionary;
- (id)applicationCurrentlyRecordingAudio;
- (void)applicationStateChanged:(id)changed state:(unsigned)state;
- (id)applicationWithDisplayIdentifier:(id)displayIdentifier;
- (id)applicationWithPid:(int)pid;
- (id)applicationsWithBundleIdentifier:(id)bundleIdentifier;
- (id)applicationsWithPid:(int)pid;
- (void)buildLocationState;
- (id)dataActivation;
- (void)dealloc;
- (id)iPod;
- (BOOL)loadApplication:(id)application;
- (id)loadApplications;
- (void)loadApplicationsAndIcons:(id)icons reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons4;
- (void)loadApplicationsWithBundle:(id)bundle bundlePath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated seatbeltEnvironmentVariables:(id)variables;
- (int)locationStatusBarIconType;
- (id)newsstandApps;
- (void)processPendingInstalls;
- (id)processWithPid:(int)pid;
- (void)removeApplicationsFromModelWithBundleIdentifier:(id)bundleIdentifier;
- (id)setupApplication;
- (void)uninstallApplication:(id)application;
- (void)updateBackgroundAppPrefs;
- (void)updateSchemesForInfoDictionary:(id)infoDictionary displayIdentifier:(id)identifier application:(id)application;
- (void)waitForOperationsToComplete;
- (id)webApplications;
@end

