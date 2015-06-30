/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBApplicationController : NSObject {
	NSDictionary *_pendingApplicationDictionaries;
	NSMutableDictionary *_applications;
	NSMutableDictionary *_applicationsByBundleIdentifer;
	SBApplication *_springBoard;
	unsigned _ignoreUninstallationEventCount;
	NSOperationQueue *_backgroundOperationQueue;
}
@property(retain) NSDictionary *pendingApplicationDictionaries;
+ (id)sharedInstance;
- (id)init;
- (void)_applicationInstallationCallback:(id)callback;
- (void)_handleInstalledApplicationDictionaryIfReceived;
- (id)allApplications;
- (Class)applicationClassForBundleIdentifier:(id)bundleIdentifier;
- (id)applicationWithDisplayIdentifier:(id)displayIdentifier;
- (id)applicationWithPid:(int)pid;
- (id)applicationsWithBundleIdentifier:(id)bundleIdentifier;
- (void)dealloc;
- (id)displayNameForInfoDictionary:(id)infoDictionary inBundle:(id)bundle;
- (id)iPod;
- (id)loadApplications;
- (void)loadApplicationsAndIcons:(id)icons reveal:(BOOL)reveal popIn:(BOOL)anIn;
- (void)loadRolesWithBundle:(id)bundle bundlePath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated seatbeltEnvironmentVariables:(id)variables;
- (void)processPendingInstalls;
- (void)removeApplicationsFromModelWithBundleIdentifier:(id)bundleIdentifier;
- (id)rolesForInfoPlist:(id)infoPlist;
- (id)rolesForRoleDefinitions:(id)roleDefinitions;
- (id)springBoard;
- (void)uninstallApplication:(id)application;
- (void)updateSchemesForRoleDefinition:(id)roleDefinition displayIdentifier:(id)identifier application:(id)application;
- (void)waitForOperationsToComplete;
- (id)widgetRoles;
@end

