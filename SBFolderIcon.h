/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIcon.h"

@class SBFolder, SBDownloadingProgressBar, NSMutableSet, UIImageView;

@interface SBFolderIcon : SBIcon {
	SBFolder *_folder;
	UIImageView *_iconBorderView;
	UIImageView *_scrollingIconImageView;
	SBDownloadingProgressBar *_progressBar;
	NSMutableSet *_animatingIcons;
	unsigned _currentScrollRow;
	BOOL _skippingGridIcons;
}
+ (id)homeScreenIconOverlayImage;
- (id)initWithFolder:(id)folder;
- (void)_delegateCloseFolderAnimated:(BOOL)animated;
- (void)_delegateOpenFolder:(id)folder animated:(BOOL)animated;
- (unsigned)_firstIconIndexForRow:(unsigned)row;
- (unsigned)_firstSkippedIconIndex;
- (unsigned)_maxIcons;
- (id)_miniIconGrid;
- (id)_miniIconGridFromRow:(unsigned)row toRow:(unsigned)row2;
- (unsigned)_numberOfExcessIcons;
- (CGRect)_rectForMiniIconAtIndex:(unsigned)index firstRow:(unsigned)row;
- (void)_scrollAnimationDidStop:(id)_scrollAnimation finished:(id)finished context:(void *)context;
- (CGSize)_sizeOfMiniIconGrid;
- (CGSize)_sizeOfMiniIconGridWithRows:(unsigned)rows;
- (void)_updateBadgeValue;
- (void)_updateProgressBar;
- (BOOL)allowsTapWhileEditing;
- (CGImageRef)createComposedIconImageUsingContext:(CGContextRef)context;
- (id)croppedImageForIcon:(id)icon;
- (void)dealloc;
- (BOOL)delaysUnhighlightWhenTapped;
- (id)description;
- (id)displayName;
- (id)folder;
- (CGRect)frameForIconOverlay;
- (id)generateIconImage:(int)image;
- (double)grabDurationForEvent:(id)event;
- (id)iconBorderView;
- (id)imageForReflection;
- (void)launch;
- (BOOL)matchesRepresentation:(id)representation;
- (id)miniImageForIcon:(id)icon;
- (void)noteContainedIconBadgeChanged:(id)changed;
- (void)noteContainedIconDownloadingStateChanged:(id)changed;
- (void)noteContainedIconImageChanged:(id)changed;
- (void)noteContainedIconsAdded:(id)added removed:(id)removed;
- (void)noteIcon:(id)icon isAnimatingIn:(BOOL)anIn;
- (void)placeGhostlyImageView;
- (id)progressBar;
- (CGRect)rectForMiniIconAtIndex:(unsigned)index;
- (id)representation;
- (void)setDisplayedIconImage:(id)image;
- (void)setGhostly:(BOOL)ghostly requester:(int)requester;
- (void)setIconScrollPosition:(int)position animated:(BOOL)animated;
- (void)setIsOverlapping:(BOOL)overlapping;
- (void)setPartialGhostly:(float)ghostly requester:(int)requester;
- (void)showDropGlow:(BOOL)glow;
- (CGAffineTransform)transformToMakeIconBorderExpandToSizeOfDropGlow;
@end

