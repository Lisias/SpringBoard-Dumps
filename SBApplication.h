/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBDisplayProtocol.h"
#import "CLLocationManagerDelegate.h"
#import "FBWindowContextHostManagerDelegate.h"
#import "SBLeafIconDataSource.h"
#import "SBUserNotificationCapable.h"


__attribute__((visibility("hidden")))
@interface SBApplication : XXUnknownSuperclass <CLLocationManagerDelegate, SBDisplayProtocol, FBWindowContextHostManagerDelegate, SBLeafIconDataSource, SBUserNotificationCapable> {
	NSString *_bundleIdentifier;
	int _appSnapshotSequenceID;
	BOOL _needsMainScreenSnapshotsDownscaled;
	NSMutableDictionary *_defaultImageNamesByScreenType;
	NSDictionary *_defaultImageNamesForOrientation;
	NSString *_launchStoryboardName;
	NSDictionary *_searchDomainLaunchInfo;
	BSCFBundle *_cachedBundle;
	BSMachSendRight *_xpcEventPort;
	int _activationState;
	int _lastExitType;
	unsigned _activationToken;
	FBProcessState *_processState;
	FBApplicationProcess *_process;
	NSString *_displayName;
	NSArray *_tags;
	UIRemoteApplication *_remoteApplication;
	unsigned _monitoringLocaleAndTimeChanges : 1;
	NSDictionary *_alertSuppressionContextsBySectionIdentifier;
	unsigned _doingBackgroundNetworking : 16;
	unsigned _failedLaunchCount : 8;
	unsigned _isSystemProvisioningApplication : 1;
	unsigned _hasMiniAlerts : 1;
	unsigned _isSystemApplication : 1;
	unsigned _isInternalApplication : 1;
	unsigned _requiresPasscodeIfLaunchedBeforeFirstUnlock;
	unsigned _dataFlagsIsSet : 1;
	unsigned _isGameCenterEnabled : 1;
	unsigned _wasGameCenterEverEnabled : 1;
	unsigned _supportsAudioBackgroundMode : 1;
	unsigned _supportsLocationBackgroundMode : 1;
	unsigned _supportsVOIPBackgroundMode : 1;
	unsigned _supportsEABackgroundMode : 1;
	unsigned _supportsRemoteNotificationBackgroundMode : 1;
	unsigned _supportsFetchBackgroundMode : 1;
	unsigned _supportsContinuousBackgroundMode : 1;
	unsigned _wantsUnboundedTaskCompletionAssertions : 1;
	unsigned _prefersSavedSnapshots : 1;
	unsigned _suspendingUnsupported;
	unsigned _hasBeenFrontmost : 1;
	unsigned _requiresHiDPI : 1;
	unsigned _disableScreenJail : 1;
	unsigned _terminationAssertions;
	unsigned _terminationAssertionsForCacheCleaning;
	int _supportedTypes;
	int _defaultClassicModeOverride;
	int _currentClassicMode;
	BOOL _calculatedSupportedTypes;
	BOOL _hasViewServiceEntitlement;
	BOOL _isCloudKitEnabled;
	unsigned _defaultStatusBarStyle : 8;
	BOOL _statusBarIsLegacy;
	int _defaultWallpaperStyle;
	BOOL _canChangeWallpaperStyle;
	unsigned _defaultInterfaceOrientationOverride : 8;
	unsigned _interfaceOrientationOverrideSet : 1;
	unsigned _sbUsesNetwork : 8;
	unsigned _dataFlags : 8;
	unsigned _hasShownDataPlanAlertSinceLock : 1;
	unsigned _launchAlerts : 8;
	unsigned _uninstalled : 1;
	unsigned _isLaunchableDuringSetup : 1;
	unsigned _behavesAsCaller;
	unsigned _wantsPNGlessLaunch : 1;
	unsigned _systemAppSupportsLocalNotifications : 1;
	Class _iconClass;
	NSArray *_customMachServices;
	NSDictionary *_customSpotlightIconPaths;
	NSMutableSet *_requireLocalNotificationsCachingReasons;
	NSArray *_cachedLocalNotifications;
	unsigned _applicationState;
	opaque_pthread_mutex_t _appBundleMutex;
	NSDate *_nextApplicationWakeDate;
	PCPersistentTimer *_applicationWakeTimer;
	PCPersistentTimer *_localNotificationTimer;
	BKSProcessAssertion *_transientProcessAssertion;
	NSTimer *_transientSuspendTimer;
	int _transientAssertionType;
	BKSProcessAssertion *_periodicWakeProcessAssertion;
	NSTimer *_periodicWakeSuspendTimer;
	BKSProcessAssertion *_simpleRemoteActionProcessAssertion;
	int _activationCount;
	double _lastBadgeClearTime;
	NSMutableArray *_activationContextStack;
	SBActivationSettings *_activationSettings;
	SBDeactivationSettings *_deactivationSettings;
	SBStateSettings *_stateSettings;
	NSMutableSet *_reasonsToPendClearingActivationSettings;
	BOOL _pendedClearingActivationSettings;
	NSMutableSet *_suppressVolumeHudCategories;
	unsigned _isBeingDebugged : 1;
	unsigned _isAnimatingActivation : 1;
	unsigned _isAnimatingDeactivation : 1;
	unsigned _launchSuspendedAlways : 1;
	unsigned _showsProgress;
	BOOL _hasActivatedOnce;
	int _applicationRestorationCheckState;
	float _minimumBrightnessLevel;
	NSArray *_domainsToPreheat;
	int _starkLaunchModes;
	int _defaultStarkStatusBarStyle;
	NSMutableDictionary *_alertImpersonatorsByWorkspaceType;
	unsigned _isRecentlyUpdated : 3;
	unsigned _isNewlyInstalled : 3;
	unsigned _hasBadgeValue : 3;
	FBApplicationInfo *_appInfo;
	BKSApplicationDataStore *_dataStore;
	CLLocationManager *_locationManager;
	NSMutableDictionary *_localNotificationsByMonitoredRegionIdentifier;
	NSHashTable *_statusBarStyleOverridesAssertions;
	NSMapTable *_statusBarStyleOverridesAssertionsByStyleOverride;
	int _statusBarStyleOverridesToSuppress;
	BOOL _shouldShowUserNotificationPermissionAlert;
	BOOL _useLaunchStoryboardOrNib;
	BOOL _alwaysLaunchesFullScreen;
	BOOL _isWatchApp;
	BOOL _reachabilitySupported;
}
@property(copy, nonatomic, setter=_setActivationSettings:) SBActivationSettings *_activationSettings;
@property(copy, nonatomic, setter=_setDeactivationSettings:) SBDeactivationSettings *_deactivationSettings;
@property(copy, nonatomic, setter=_setStateSettings:) SBStateSettings *_stateSettings;
@property(readonly, assign, nonatomic, getter=_classicMode) int classicMode;
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) int defaultClassicModeOverride;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int pid;
@property(assign, nonatomic, getter=isReachabilitySupported) BOOL reachabilitySupported;
@property(assign, nonatomic) int statusBarStyleOverridesToSuppress;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) BSMachSendRight *xpcEventPort;
+ (id)_defaultDisplayState;
+ (id)_snapshotsDictionary;
+ (id)_timersDictionary;
+ (BOOL)activationStateIsTransitory:(int)transitory;
+ (id)appStateKeysToPrefetch;
+ (void *)cachedSnapshotSurfaceForPath:(id)path;
+ (id)defaultValueForKey:(id)key bundleIdentifier:(id)identifier urlScheme:(id)scheme;
+ (void)flushAllSystemSnapshots;
+ (void)initialize;
+ (void)removalTimerFired:(id)fired;
+ (void)removeCachedSnapshotSurface:(void *)surface forPath:(id)path;
+ (void)removeCachedSnapshotSurfaceForPath:(id)path;
+ (void)removeCachedSnapshotsForScreen:(id)screen;
+ (void)removeCachedSnapshotsMatchingPath:(id)path;
+ (void)setCachedSnapshotSurface:(void *)surface forPath:(id)path;
+ (void)setCachedSnapshotSurface:(void *)surface forPath:(id)path purgeAfter:(double)after;
+ (void)setDefaultValue:(id)value forKey:(id)key bundleIdentifier:(id)identifier;
+ (void)setRemovalTimer:(double)timer forSnapshotWithPath:(id)path;
+ (BOOL)shouldHaveContextsForActivationState:(int)activationState;
+ (id)systemSnapshotsDirectory;
- (id)initWithApplicationInfo:(id)applicationInfo bundle:(id)bundle infoDictionary:(id)dictionary;
- (id)_activationStateToString;
- (void)_addImageName:(id)name toImageNamesArray:(id)imageNamesArray sceneID:(id)anId size:(CGSize)size;
- (id)_additionalDisplayQualification;
- (id)_alertImpersonatorForWorkspaceType:(int)workspaceType;
- (id)_appInfo;
- (BOOL)_applicationDoesNotHaveRestorationArchive;
- (int)_applicationRestorationCheckState;
- (void)_assignDefaultLaunchImages:(id)images forScreenType:(int)screenType;
- (id)_baseAppSnapshotPath;
- (void)_beginRequireLocalNotificationsCachingWithReason:(id)reason;
- (void)_bumpActivationCountBy:(int)by;
- (id)_cachedImageForSnapshotPath:(id)snapshotPath sceneID:(id)anId scale:(float)scale;
- (id)_cachedSnapshotForImageInfo:(id)imageInfo downscaled:(BOOL)downscaled originalOrientation:(out int *)orientation currentOrientation:(out int *)orientation4;
- (void)_calculateSupportedTypesFromInfoDictionary:(id)infoDictionary;
- (void)_calculateSupportedTypesLazilyIfNecessary;
- (int)_classicModeFromStateOverrides;
- (int)_classicModeFromSupportedTypes;
- (void)_configureDisplayNameForBundleAtPath:(id)path;
- (id)_copyApplicationMetadata;
- (id)_copyUnexpiredScheduledLocalNotifications;
- (BOOL)_currentClassicModeShouldAllowLandscapeLaunching;
- (int)_defaultClassicMode;
- (id)_defaultImageInfoForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale launchingOrientation:(int)orientation;
- (id)_defaultImageNameForSceneID:(id)sceneID;
- (id)_defaultImageNamesByScreenType;
- (id)_defaultImageNamesForOrientation;
- (id)_defaultPNGForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale launchingOrientation:(int)orientation orientation:(int *)orientation5;
- (id)_defaultPNGImageInfoForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale launchingOrientation:(int)orientation;
- (id)_defaultPNGNameFromActivationSettings;
- (id)_defaultPNGNameFromSearchDomainLaunchInfo:(id)searchDomainLaunchInfo;
- (id)_defaultPNGNameFromSuspensionSettings;
- (id)_defaultPNGNameFromSuspensionSettingsWithExpiration:(double *)expiration;
- (id)_defaultPNGNameUsingFallbacksForSceneID:(id)sceneID;
- (id)_defaultPNGNameWhenActivatingFromURLSetting:(id)urlsetting;
- (id)_defaultSplashBoardImageInfoForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale snapshot:(BOOL *)snapshot launchingOrientation:(int)orientation originalOrientation:(int *)orientation6 currentOrientation:(int *)orientation7;
- (void)_didSuspend;
- (unsigned)_doingBackgroundNetworking;
- (void)_dropPeriodicWakeProcessAssertion;
- (void)_dropTransientProcessAssertion;
- (void)_endRequireLocalNotificationsCachingWithReason:(id)reason;
- (int)_fallbackImageOrientationForLaunchingOrientation:(int)launchingOrientation;
- (id)_fallbackOrientationImageTagForLaunchingOrientation:(int)launchingOrientation;
- (id)_fallbackOrientationStringForOrientation:(int)orientation fallbackOrientation:(int *)orientation2;
- (id)_fileSnapshotForImageInfo:(id)imageInfo downscaled:(BOOL)downscaled originalOrientation:(out int *)orientation currentOrientation:(out int *)orientation4;
- (void)_fireNotification:(id)notification;
- (id)_getLocalNotificationFromBulletin:(id)bulletin;
- (BOOL)_hasAnyAlertImpersonator;
- (BOOL)_hasDefaultPNGForApplicationSupportedType:(int)applicationSupportedType;
- (id)_imageNamesFromInfoDictionary:(id)infoDictionary;
- (void)_imageOrientationParametersForLaunchingOrientation:(int)launchingOrientation imageTag:(id *)tag fallbackImageTag:(id *)tag3 fallbackOrientation:(int *)orientation;
- (BOOL)_infoplist_defaultPNGCalculateContainsImageForAnyOrientationOfSize:(CGSize)size;
- (BOOL)_infoplist_defaultPNGCalculateContainsImageOfSize:(CGSize)size withOrientationKey:(id)orientationKey;
- (BOOL)_infoplist_defaultPNGCalculateContainsPortraitImageOfSize:(CGSize)size;
- (id)_infoplist_defaultPNGPathForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale launchingOrientation:(int)orientation imageOrientation:(int *)orientation5 resultingScale:(float *)scale6;
- (void)_invalidateStatusBarStyleOverridesAssertions;
- (BOOL)_isCarSceneID:(id)anId;
- (BOOL)_isLocalNotification:(id)notification scheduledToFireAfterDate:(id)fireAfterDate;
- (BOOL)_isMainSceneID:(id)anId;
- (BOOL)_isNewlyInstalled;
- (BOOL)_isRecentlyUpdated;
- (BOOL)_isSnapshotPresentForLaunchingInterfaceOrientation:(int)launchingInterfaceOrientation;
- (id)_lastLocalNotificationFireDate;
- (id)_launchNibName;
- (id)_launchStoryboardName;
- (int)_launchingInterfaceOrientationForOrientation:(int)orientation ignoringClassicMode:(BOOL)mode;
- (id)_loadImageForSnapshotAtPath:(id)path fileOrientation:(int *)orientation;
- (id)_localizedGenreFromDictionary:(id)dictionary;
- (id)_localizedGenreNameForID:(int)anId;
- (void)_lockStateDidChange:(id)_lockState;
- (int)_mainSceneCompabilityMode;
- (void)_noteIconDataSourceDidChange;
- (void)_noteSnapshotDidUpdate;
- (void)_noteSnapshotDidUpdate:(int)_noteSnapshot;
- (id)_orientationImageTagForLaunchingOrientation:(int)launchingOrientation;
- (id)_pathForExistingImageInCandidates:(id)candidates forSceneID:(id)sceneID size:(CGSize)size scale:(float)scale launchingOrientation:(int)orientation imageOrientation:(int *)orientation6 resultingScale:(float *)scale7;
- (id)_pathForSnapshotWithName:(id)name sceneID:(id)anId scale:(float)scale downscaled:(BOOL)downscaled;
- (id)_pathIfFileExistsAtPath:(id)path;
- (id)_preferredImagePathByScaleInBundle:(id)bundle resourceName:(id)name ofType:(id)type scale:(float)scale outScale:(float *)scale5;
- (id)_preferredImagePathInBundle:(id)bundle baseResourceName:(id)name ofType:(id)type forMainScene:(BOOL)mainScene size:(CGSize)size scale:(float)scale outScale:(float *)scale7;
- (BOOL)_prefersSavedSnapshots;
- (void)_protectedDataDidBecomeAvailable:(id)_protectedData;
- (void)_purgeCachedLocalNotifications;
- (void)_purgeRemoteApplication;
- (void)_removeAlertImpersonator:(id)impersonator;
- (void)_removeNotificationFromRegionMonitoring:(id)regionMonitoring;
- (void)_resetDataUsage;
- (double)_resumeDurationForTransientType:(int)transientType;
- (void)_resumeForPeriodicWakeWithReason:(id)reason;
- (id)_sanitizedImageNameFromName:(id)name withExtension:(id)extension actualExtension:(out id *)extension3;
- (void)_saveSnapshotForSceneID:(id)sceneID frame:(CGRect)frame name:(id)name overrideScale:(float)scale;
- (void)_saveSuspendSnapshot:(id)snapshot forSceneID:(id)sceneID scale:(float)scale;
- (id)_scheduledLocalNotifications;
- (id)_screenFromSceneID:(id)sceneID;
- (CGSize)_screenSizeForScreen:(id)screen;
- (id)_searchDomainLaunchInfo;
- (void)_sendDidLaunchNotification:(BOOL)_send;
- (void)_setActivationState:(int)state;
- (void)_setAlertImpersonator:(id)impersonator forWorkspaceType:(int)workspaceType;
- (void)_setApplicationRestorationCheckState:(int)state;
- (void)_setAutoLaunchForVoIP:(BOOL)voIP;
- (void)_setDataUsage:(int)usage;
- (void)_setDoingBackgroundNetworking:(unsigned)networking;
- (void)_setLastLocalNotificationFireDate:(id)date;
- (void)_setMonitoringForLocaleAndTimeChanges:(BOOL)localeAndTimeChanges;
- (void)_setNewlyInstalled:(BOOL)installed;
- (void)_setRecentlyUpdated:(BOOL)updated;
- (void)_setScheduledLocalNotifications:(id)notifications;
- (void)_setTags:(id)tags;
- (BOOL)_shouldAutoLaunchForVoIP;
- (BOOL)_shouldAutoLaunchOnBootOrInstall:(BOOL)install;
- (BOOL)_shouldAutoRelaunchForEA;
- (BOOL)_shouldUseSnapshotForAppLaunchIfPossible;
- (id)_snapshotContainerName;
- (id)_snapshotCreationDeletionQueueForSceneID:(id)sceneID;
- (id)_snapshotImageForSnapshotImageInfo:(id)snapshotImageInfo downscaled:(BOOL)downscaled originalOrientation:(out int *)orientation currentOrientation:(out int *)orientation4;
- (id)_snapshotImageInfoForSceneID:(id)sceneID named:(id)named size:(CGSize)size scale:(float)scale downscaled:(BOOL)downscaled launchingOrientation:(int)orientation;
- (id)_snapshotImageInfoForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale downscaled:(BOOL)downscaled launchingOrientation:(int)orientation;
- (id)_snapshotImageWithImageName:(id)imageName sceneID:(id)anId size:(CGSize)size scale:(float)scale downscaled:(BOOL)downscaled launchingOrientation:(int)orientation originalOrientation:(int *)orientation7 currentOrientation:(int *)orientation8;
- (BOOL)_snapshotQueue_saveData:(id)data toPath:(id)path forSceneID:(id)sceneID;
- (void)_snapshotQueue_writeSnapshotDataWithProvider:(id)provider atPath:(id)path;
- (id)_snapshotSceneContainerNameForSceneID:(id)sceneID;
- (id)_sortedLaunchImagesForMainScreen:(id)mainScreen bundle:(id)bundle;
- (id)_stringForActivationState:(int)activationState;
- (id)_stringForApplicationState:(unsigned)applicationState;
- (int)_supportedTypeForClassicModeNone;
- (BOOL)_supportsClassicMode:(int)mode;
- (BOOL)_supportsCompactStatusBarHiding;
- (void)_suspendForPeriodicWakeTimerFired:(id)periodicWakeTimerFired;
- (void)_terminationAssertionAddedWithReason:(unsigned char)reason;
- (void)_terminationAssertionRemovedWithReason:(unsigned char)reason;
- (id)_transientIdentifier;
- (void)_transientResumeForType:(int)type;
- (void)_transientSuspendForTimerFired:(id)timerFired;
- (void)_unregisterRemoteViewsAndSheets;
- (void)_updateApplicationWakeTimers;
- (void)_updateLocalNotificationRegionRegistration;
- (void)_updateLocalNotificationTimers;
- (void)_updateOrientationForActivationIfNecessary;
- (void)_updateRecentlyUpdatedTimer;
- (BOOL)_useLaunchNib;
- (BOOL)_useLaunchStoryboard;
- (BOOL)_useLaunchStoryboardOrNib;
- (id)_validInfoPlistOrientationKeys;
- (int)_workspaceTypeFromSceneID:(id)sceneID;
- (void)activate;
- (int)activationState;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)appIsAuthorizedForRegionMonitoring;
- (id)appSnapshotPathForSceneID:(id)sceneID downscaled:(BOOL)downscaled;
- (id)applicationNextWakeDate;
- (int)applicationSignatureState;
- (unsigned)applicationState;
- (void)applyActivationSettings:(id)settings;
- (void)applyDeactivationSettings:(id)settings;
- (void)applyStateSettings:(id)settings;
- (void)autoLaunchIfNecessaryOnBootOrInstall:(BOOL)install;
- (BOOL)badgeHasBeenSetLocally;
- (id)badgeNumberOrString;
- (BOOL)behavesLikePhone;
- (BOOL)boolForActivationSetting:(unsigned)activationSetting;
- (BOOL)boolForDeactivationSetting:(unsigned)deactivationSetting;
- (BOOL)boolForStateSetting:(unsigned)stateSetting;
- (id)bundle;
- (id)bundleContainerPath;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)cachedSnapshotForImageInfo:(id)imageInfo downscaled:(BOOL)downscaled originalOrientation:(out int *)orientation currentOrientation:(out int *)orientation4;
- (BOOL)canAccessDisplay:(id)display;
- (BOOL)canAccessScreen:(id)screen;
- (void)cancelLocalNotification:(id)notification;
- (id)carScene;
- (id)carSceneID;
- (BOOL)classicAppFullScreen;
- (BOOL)classicAppRequiresHiDPI;
- (BOOL)classicAppScaled;
- (BOOL)classicAppZoomedIn;
- (BOOL)classicAppZoomedInOrRequiresHiDPI;
- (BOOL)classicDefaultStatusBarHidden;
- (void)clearActivationSettings;
- (void)clearDeactivationSettings;
- (void)clearStateSettings;
- (id)copyDisplaySettings;
- (id)copyWithZone:(NSZone *)zone;
- (void)createDownscaledSnapshotFromFullSizeSnapshotForMainScene;
- (id)customSpotlightIconPathsForKey:(id)key;
- (id)dataContainerPath;
- (int)dataUsage;
- (void)deactivate;
- (void)dealloc;
- (id)defaultImageForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale snapshot:(BOOL *)snapshot originalOrientation:(int *)orientation currentOrientation:(int *)orientation6;
- (CGSize)defaultLaunchingSizeForScreen:(id)screen;
- (id)defaultPNGPathForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale launchingOrientation:(int)orientation imageOrientation:(int *)orientation5 resultingScale:(float *)scale6;
- (id)defaultSplashBoardImageForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale snapshot:(BOOL *)snapshot launchingOrientation:(int)orientation originalOrientation:(int *)orientation6 currentOrientation:(int *)orientation7;
- (id)defaultSplashBoardImagePathForSceneID:(id)sceneID size:(CGSize)size scale:(float)scale snapshot:(BOOL *)snapshot launchingOrientation:(int)orientation originalOrientation:(int *)orientation6 currentOrientation:(int *)orientation7;
- (BOOL)defaultStatusBarHiddenForOrientation:(int)orientation;
- (int)defaultStatusBarStyle;
- (void)deleteSnapshotForSceneID:(id)sceneID name:(id)name scale:(float)scale;
- (void)didActivateWithTransactionID:(unsigned)transactionID;
- (void)didAnimateActivation;
- (void)didAnimateActivationOnStarkScreenController:(id)controller;
- (void)didAnimateDeactivation;
- (void)didAnimateDeactivationOnStarkScreenController:(id)controller;
- (void)didCreateScene:(id)scene;
- (void)didDeactivateForEventsOnly:(BOOL)eventsOnly;
- (void)didExitWithType:(int)type terminationReason:(int)reason;
- (BOOL)disablesJailForScreen:(id)screen;
- (id)displayName;
- (id)displayNameFromSceneIdentifier:(id)sceneIdentifier;
- (id)domainsToPreheat;
- (int)effectiveStatusBarStyle;
- (id)effectiveStatusBarStyleRequest;
- (BOOL)enabled;
- (id)executionContext;
- (id)externalAccessoryProtocols;
- (id)fallbackFolderName;
- (int)flagForActivationSetting:(unsigned)activationSetting;
- (int)flagForDeactivationSetting:(unsigned)deactivationSetting;
- (int)flagForStateSetting:(unsigned)stateSetting;
- (void)flushSnapshotsForAllScenes;
- (void)flushSnapshotsForSceneID:(id)sceneID;
- (id)folderNames;
- (CGRect)frameForLayout:(id)layout onDisplay:(id)display;
- (void)handleTriggeredRegion:(id)region didEnter:(BOOL)enter;
- (BOOL)hasBeenFrontmost;
- (BOOL)hasGameCenterData;
- (BOOL)hasMiniAlerts;
- (BOOL)hasShownDataPlanAlertSinceLock;
- (BOOL)hasStartedLaunching;
- (id)icon:(id)icon defaultImageWithFormat:(int)format;
- (id)icon:(id)icon imageWithFormat:(int)format;
- (BOOL)icon:(id)icon launchFromLocation:(int)location;
- (int)iconAccessoryType:(id)type;
- (BOOL)iconAllowsLaunch:(id)launch;
- (BOOL)iconAllowsUninstall:(id)uninstall;
- (BOOL)iconAppearsInNewsstand:(id)newsstand;
- (id)iconBadgeNumberOrString:(id)string;
- (BOOL)iconCanEllipsizeLabel:(id)label;
- (BOOL)iconCanTightenLabel:(id)label;
- (Class)iconClass;
- (BOOL)iconCompleteUninstall:(id)uninstall;
- (id)iconDisplayName:(id)name;
- (id)iconFormattedAccessoryString:(id)string;
- (BOOL)iconIsBeta:(id)beta;
- (BOOL)iconIsRecentlyUpdated:(id)updated;
- (unsigned)iconPriority:(id)priority;
- (BOOL)iconProgressIsPaused:(id)paused;
- (float)iconProgressPercent:(id)percent;
- (int)iconProgressState:(id)state;
- (BOOL)isActivating;
- (BOOL)isAnyTerminationAssertionHeld;
- (BOOL)isBeingDebugged;
- (BOOL)isCacheCleaningTerminationAssertionHeld;
- (BOOL)isClassic;
- (BOOL)isCloudKitEnabled;
- (BOOL)isFaceTime;
- (BOOL)isInternalApplication;
- (BOOL)isLaunchableDuringSetup;
- (BOOL)isMobilePhone;
- (BOOL)isNewsstandApplication;
- (BOOL)isNowPlayingApplication;
- (BOOL)isNowRecordingApplication;
- (BOOL)isRecordingAudio;
- (BOOL)isRunning;
- (BOOL)isSameExecutableAsApplication:(id)application;
- (BOOL)isSpringBoard;
- (BOOL)isSystemApplication;
- (BOOL)isSystemProvisioningApplication;
- (BOOL)isTranslucent;
- (BOOL)isUninstalled;
- (BOOL)isWebApplication;
- (double)lastBadgeClearTime;
- (int)launchingInterfaceOrientationForCurrentOrientation;
- (int)launchingInterfaceOrientationForCurrentOrientationIgnoringClassicMode;
- (int)launchingInterfaceOrientationForOrientation:(int)orientation;
- (void)localNotificationTimerFired;
- (void)locationManager:(id)manager didEnterRegion:(id)region;
- (void)locationManager:(id)manager didExitRegion:(id)region;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (id)mainScene;
- (id)mainSceneID;
- (id)mainSceneInitialClientSettingsWithSettings:(id)settings;
- (id)mainSceneSettingsForLayout:(id)layout foreground:(BOOL)foreground;
- (void)markApplicationIdentityAsTrusted;
- (void)markNewlyInstalled;
- (void)markRecentlyUpdated;
- (void)markUserLaunchInitiationTime;
- (float)minimumBrightnessLevel;
- (double)modificationDate;
- (void)noteBadgeSetLocally;
- (void)noteDidOpenURL:(id)note;
- (void)notifyResignActiveForReason:(int)reason;
- (void)notifyResumeActiveForReason:(int)reason;
- (id)objectForActivationSetting:(unsigned)activationSetting;
- (id)objectForDeactivationSetting:(unsigned)deactivationSetting;
- (id)objectForStateSetting:(unsigned)stateSetting;
- (void)overrideDefaultInterfaceOrientation:(int)orientation;
- (id)path;
- (id)preferenceDomain;
- (void)prepareForUninstallation;
- (void)processDidLaunch:(id)process;
- (void)processWillLaunch:(id)process;
- (BOOL)provisioningProfileValidated;
- (void)purgeAllCaches;
- (void)purgeBundleCaches;
- (int)ratingRank;
- (void)releaseStatusBarStyleOverridesAssertion:(id)assertion;
- (id)remoteApplication;
- (void)removeDefaultInterfaceOrientationOverride;
- (BOOL)requiresPasscodeIfLaunchedBeforeFirstUnlock;
- (BOOL)requiresRLNDataProvider;
- (void)resetLaunchAlertForType:(int)type;
- (void)resumeForContentAvailable;
- (void)resumeToQuit;
- (id)sandboxPath;
- (void)saveSnapshotForSceneID:(id)sceneID frame:(CGRect)frame name:(id)name overrideScale:(float)scale;
- (void)saveSuspendSnapshot:(id)snapshot forScene:(id)scene;
- (id)sceneIdentifierForDisplay:(id)display;
- (void)scheduleLocalNotifications:(id)notifications replaceExistingNotifications:(BOOL)notifications2;
- (void)scheduleSnoozeNotification:(id)notification;
- (void)scheduleSnoozeNotificationForLocalNotification:(id)localNotification;
- (id)scheduledLocalNotifications;
- (void)setAlertSuppressionContextsBySectionIdentifier:(id)identifier;
- (void)setApplicationNextWakeDate:(id)date;
- (void)setApplicationState:(unsigned)state;
- (void)setBadge:(id)badge;
- (void)setBeingDebugged:(BOOL)debugged;
- (void)setDisplayName:(id)name;
- (void)setFlag:(int)flag forActivationSetting:(unsigned)activationSetting;
- (void)setFlag:(int)flag forDeactivationSetting:(unsigned)deactivationSetting;
- (void)setFlag:(int)flag forStateSetting:(unsigned)stateSetting;
- (void)setHasBeenFrontmost:(BOOL)frontmost;
- (void)setHasMiniAlerts:(BOOL)alerts;
- (void)setHasShownDataPlanAlertSinceLock:(BOOL)lock;
- (void)setNowPlayingWithAudio:(BOOL)audio;
- (void)setObject:(id)object forActivationSetting:(unsigned)activationSetting;
- (void)setObject:(id)object forDeactivationSetting:(unsigned)deactivationSetting;
- (void)setObject:(id)object forStateSetting:(unsigned)stateSetting;
- (void)setPendClearingActivationSettings:(BOOL)settings forReason:(id)reason;
- (void)setShowsProgress:(BOOL)progress;
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forCategory:(id)category;
- (void)setUsesBackgroundNetwork:(BOOL)network;
- (void)setUsesEdgeNetwork:(BOOL)network;
- (void)setUsesWiFiNetwork:(BOOL)network;
- (BOOL)setWallpaperStyleForBackgroundStyle:(int)backgroundStyle;
- (BOOL)shouldAutoLaunchOnBootOrInstall;
- (BOOL)shouldAutoRelaunchAfterExit;
- (BOOL)shouldLaunchPNGless;
- (BOOL)shouldLaunchSuspendedAlways;
- (BOOL)shouldShowUserNotificationPermissionAlert;
- (BOOL)shouldSuppressAlertForSuppressionContexts:(id)suppressionContexts sectionIdentifier:(id)identifier;
- (BOOL)showLaunchAlertForType:(int)type;
- (BOOL)showSystemVolumeHUDForCategory:(id)category;
- (BOOL)showsProgress;
- (id)signerIdentity;
- (CGRect)snapshotFrameAdjustedForClassicBasedOnFrame:(CGRect)classicBasedOnFrame insideBounds:(CGRect)bounds withStatusBarHeight:(float)statusBarHeight andDefaultPNGSize:(CGSize)size forOrientation:(int)orientation;
- (id)snapshotImageInfosWithImageName:(id)imageName sceneID:(id)anId launchingSize:(CGSize)size launchingScale:(float)scale launchingOrientation:(int)orientation;
- (id)snoozeNotificationForLocalNotification:(id)localNotification;
- (void)spdResumeForTrafficRequested;
- (int)starkStatusBarStyle;
- (id)statusBarEffectiveStyleRequestWithStyleOverrides:(int)styleOverrides;
- (BOOL)statusBarHiddenForCurrentOrientation;
- (BOOL)statusBarHiddenForOrientation:(int)orientation;
- (int)statusBarOrientation;
- (int)statusBarStyle;
- (id)statusBarStyleOverridesAssertionsByStyleOverride;
- (id)statusBarStyleRequest;
- (BOOL)supportsApplicationType:(int)type;
- (BOOL)supportsAudioBackgroundMode;
- (BOOL)supportsBackgroundAppRefresh;
- (BOOL)supportsContinuousBackgroundMode;
- (BOOL)supportsEABackgroundMode;
- (BOOL)supportsFetchBackgroundMode;
- (BOOL)supportsLocationBackgroundMode;
- (BOOL)supportsRemoteNotificationBackgroundMode;
- (BOOL)supportsStarkAudio;
- (BOOL)supportsStarkFullScreen;
- (BOOL)supportsStarkGateKeeper;
- (BOOL)supportsVOIPBackgroundMode;
- (BOOL)suppressesBanners;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesNotificationCenter;
- (BOOL)suspendingUnsupported;
- (id)tags;
- (void)takeStatusBarStyleOverridesAssertion:(id)assertion;
- (id)transitionContext;
- (void)triggerLocationArrowForNotification:(id)notification;
- (void)updateProcessState:(id)state;
- (id)urlScheme;
- (BOOL)usesLocalNotifications;
- (void)validateSystemProvisioningEntitlements:(XXStruct_kUSYWB *)entitlements;
- (void)wakeTimerFired;
- (int)wallpaperStyle;
- (BOOL)wantsUnboundedTaskCompletionAssertions;
- (double)watchdogExtension;
- (void)willActivate;
- (void)willActivateWithTransactionID:(unsigned)transactionID;
- (void)willAnimateActivation;
- (void)willAnimateActivationOnStarkScreenController:(id)controller;
- (void)willAnimateDeactivation:(BOOL)deactivation;
- (void)willAnimateDeactivationOnStarkScreenController:(id)controller;
- (void)willDeactivateForEventsOnly:(BOOL)eventsOnly;
@end

