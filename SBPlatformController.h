/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBPlatformController : NSObject {
	NSString *_currentConfigurationName;
	NSMutableDictionary *_currentConfiguration;
	NSMutableDictionary *_currentCapabilities;
}
+ (id)sharedInstance;
- (id)init;
- (void)addCapabilities:(id)capabilities removeCapabilities:(id)capabilities2;
- (BOOL)canTakePhoto;
- (void)dealloc;
- (id)enabledCapabilities;
- (BOOL)hasCapability:(id)capability;
- (BOOL)hasRestriction:(id)restriction;
- (id)iconState;
- (id)infoForCapability:(id)capability;
- (BOOL)isInternalInstall;
- (id)localizedPlatformName;
- (BOOL)matchesPlatforms:(id)platforms;
- (void)noteITunesStoreCapabilityChanged;
- (id)platformName;
- (void)setInfo:(id)info forCapability:(id)capability;
- (id)systemBuildVersion;
@end

@interface SBPlatformController (private)
- (void)_addConfigurationNamed:(id)named toCompositeDictionary:(id)compositeDictionary;
- (id)_macAddress;
- (void)_mergeDictionary:(id)dictionary intoDictionary:(id)dictionary2;
- (BOOL)allowSensitiveUI:(BOOL)ui hasInternalBundle:(BOOL)bundle;
- (BOOL)allowWiFi;
- (BOOL)allowYouTube;
- (BOOL)allowYouTubePlugin;
- (id)currentConfigurationName;
- (CFBooleanRef)currentITunesStoreCapability;
- (void)discoverCurrentConfiguration;
- (BOOL)isCarrierInstall:(BOOL)install hasInternalBundle:(BOOL)bundle;
- (void)noteConfigurationChanged:(id)changed;
- (void)postCurrentConfiguration;
@end

