/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWebApplication : SBApplication {
	SBBookmarkIcon *_bookmarkIcon;
	NSURL *_launchURL;
}
@property(retain, nonatomic) SBBookmarkIcon *bookmarkIcon;
@property(retain, nonatomic) NSURL *launchURL;
+ (id)_dataContainerURL;
+ (id)_primaryWebAppInfo;
+ (id)_snapshotDirectory;
+ (id)_snapshotManifest;
+ (id)_webAppIdentifierFromWebClipIdentifier:(id)webClipIdentifier;
+ (id)_webClipIdentifierFromWebAppIdentifier:(id)webAppIdentifier;
- (id)_customStartupImageForLaunchingOrientation:(int)launchingOrientation;
- (id)_snapshotManifest;
- (void)dealloc;
- (id)displayName;
- (Class)iconClass;
- (id)iconIdentifier;
- (BOOL)isWebApplication;
- (void)refreshLaunchImagesInSnapshotManifestIfNeededWithInfoDictionary:(id)infoDictionary;
- (id)sandboxPath;
- (id)sceneIdentifierForDisplay:(id)display;
@end

