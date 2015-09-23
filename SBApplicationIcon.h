/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBApplicationIcon : SBLeafIcon {
	UIImage *_cachedSquareHomeScreenContentsImage;
}
+ (id)_squareHomeScreenIconImagesMemoryPool;
- (id)initWithApplication:(id)application;
- (id)__loadIconImageForDataSource:(id)dataSource format:(int)format;
- (id)__loadUnmaskedIconImageForFormat:(int)format;
- (id)_blockForGeneratingIconImageInBackgroundWithFormat:(int)format complete:(id)complete;
- (id)application;
- (id)automationID;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)generateIconImage:(int)image;
- (void)generateIconImageInBackground:(id)background;
- (id)getUnmaskedIconImage:(int)image;
- (void)setBadge:(id)badge;
- (id)tags;
@end

