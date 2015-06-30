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
	NSDictionary *_discoveredCapabilities;
}
+ (id)sharedInstance;
- (id)init;
- (void)_addConfigurationNamed:(id)named toCompositeDictionary:(id)compositeDictionary;
- (void)_addDefaultConfigurationToCompositeDictionary:(id)compositeDictionary;
- (void)_addIconListIdentifiers:(id)identifiers toSet:(id)set;
- (id)_copyConfigInfoWithName:(id)name;
- (void)_mergeDictionary:(id)dictionary intoDictionary:(id)dictionary2;
- (void)addCapabilities:(id)capabilities resetCapabilites:(id)capabilites;
- (BOOL)allowSensitiveUI:(BOOL)ui hasInternalBundle:(BOOL)bundle;
- (BOOL)allowYouTube;
- (BOOL)allowYouTubePlugin;
- (BOOL)canDisplayHomescreenWallpaper;
- (id)currentConfigurationName;
- (CFBooleanRef)currentITunesStoreCapability;
- (void)dealloc;
- (id)defaultDisplayIdentifiers;
- (void)discoverCurrentConfiguration;
- (id)enabledCapabilities;
- (BOOL)hasCapability:(id)capability;
- (BOOL)hasRestriction:(id)restriction;
- (id)iconState;
- (id)infoForCapability:(id)capability;
- (BOOL)isCarrierInstall;
- (BOOL)isCarrierInstall:(BOOL)install hasInternalBundle:(BOOL)bundle;
- (BOOL)isInternalInstall;
- (id)localizedPlatformName;
- (BOOL)matchesPlatforms:(id)platforms;
- (void)noteConfigurationChangedWithKeys:(id)keys;
- (void)noteITunesStoreCapabilityChanged;
- (id)platformName;
- (void)postCurrentConfiguration;
- (void)setValue:(id)value forCapability:(id)capability;
- (id)systemBuildVersion;
@end

