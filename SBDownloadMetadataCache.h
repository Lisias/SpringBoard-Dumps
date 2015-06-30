/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBDownloadMetadataCache : XXUnknownSuperclass {
	NSMutableSet *_fetchedDownloads;
}
+ (id)sharedInstance;
- (id)init;
- (void)_ensureMetadataCachedForDownload:(id)download;
- (id)applicationIdentifierForDownload:(id)download;
- (BOOL)artworkIsPrerenderedForDownload:(id)download;
- (id)bundleIdentifierForDownload:(id)download;
- (void)downloadRemoved:(id)removed;
- (id)softwareTypeForDownload:(id)download;
- (id)titleForDownload:(id)download;
@end

