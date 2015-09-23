/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBIcon : XXUnknownSuperclass {
	NSHashTable *_observers;
	id _badgeNumberOrString;
	unsigned _isRevealable : 1;
	unsigned _uninstalled : 1;
	UIImage *_cachedIconImages[12];
	id<SBIconDelegate> _delegate;
}
@property(assign, nonatomic) id<SBIconDelegate> delegate;
@property(readonly, assign, nonatomic) BOOL shouldWarmUp;
- (id)init;
- (void)addObserver:(id)observer;
- (BOOL)allowsUninstall;
- (id)automationID;
- (id)badgeNumberOrString;
- (int)badgeValue;
- (BOOL)canEllipsizeLabel;
- (void)completeUninstall;
- (void)dealloc;
- (id)displayName;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)generateIconImage:(int)image;
- (id)getGenericIconImage:(int)image;
- (id)getIconImage:(int)image;
- (id)getStandardIconImageForLocation:(int)location;
- (BOOL)hasObserver:(id)observer;
- (int)iconFormatForLocation:(int)location;
- (id)iconOverlayImageForLocation:(int)location;
- (BOOL)isRevealable;
- (BOOL)isUninstalled;
- (void)launch;
- (BOOL)launchEnabled;
- (void)launchFromViewSwitcher;
- (void)localeChanged;
- (int)localizedCompareDisplayNames:(id)names;
- (BOOL)matchesEntity:(id)entity;
- (BOOL)matchesRepresentation:(id)representation;
- (void)noteBadgeDidChange;
- (void)purgeCachedImages;
- (void)reloadIconImage;
- (void)reloadIconImagePurgingImageCache:(BOOL)cache;
- (void)removeObserver:(id)observer;
- (id)representation;
- (void)setBadge:(id)badge;
- (void)setIsRevealable:(BOOL)revealable;
- (void)setUninstalled;
- (BOOL)shouldCacheImageForFormat:(int)format;
- (id)tags;
- (id)uninstallAlertBody;
- (id)uninstallAlertBodyForAppWithDocumentUpdatesPending;
- (id)uninstallAlertBodyForAppWithDocumentsInCloud;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
- (id)uninstallAlertTitleForAppWithDocumentUpdatesPending;
- (id)uninstallAlertTitleForAppWithDocumentsInCloud;
@end

@interface SBIcon (SBApplicationIcon)
- (id)application;
- (BOOL)isApplicationIcon;
@end

@interface SBIcon (SBBookmarkIcon)
- (BOOL)isBookmarkIcon;
@end

@interface SBIcon (SBDownloadingIcon)
- (id)download;
- (BOOL)isDownloadingIcon;
@end

@interface SBIcon (SBUserInstalledApplicationIcon)
- (BOOL)isUserInstalledApplicationIcon;
@end

@interface SBIcon (SBWebApplicationIcon)
- (BOOL)isWebApplicationIcon;
@end

@interface SBIcon (SBFolderIcon)
- (id)enclosingFolder;
- (id)folder;
- (BOOL)isFolderIcon;
@end

@interface SBIcon (SBLeafIcon)
- (id)applicationBundleID;
- (BOOL)isLeafIcon;
- (id)leafIdentifier;
- (id)webClip;
@end

@interface SBIcon (SBPrintStatusIcon)
- (BOOL)isPrintStatusIcon;
@end

@interface SBIcon (SBDestinationHole)
- (BOOL)isDestinationHole;
@end

@interface SBIcon (SBNullIcon)
- (BOOL)isNullIcon;
@end

@interface SBIcon (Internal)
- (void)_notifyAccessoriesDidUpdate;
- (void)_notifyImageDidUpdate;
- (void)_notifyLaunchEnabledDidChange;
@end

@interface SBIcon (SBNewsstandApplicationIcon)
- (BOOL)iconAppearsInNewsstand;
- (BOOL)isNewsstandApplicationIcon;
@end

@interface SBIcon (SBNewsstandIcon)
- (BOOL)isNewsstandIcon;
@end

