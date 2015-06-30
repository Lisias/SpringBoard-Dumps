/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIcon.h"
#import "SpringBoard-Structs.h"


@interface SBFolderIcon : SBIcon {
	SBFolder *_folder;
	float _progress;
}
@property(readonly, assign) float progress;
- (id)initWithFolder:(id)folder;
- (unsigned)_firstSkippedIconIndex;
- (unsigned)_gridColumns;
- (unsigned)_gridRows;
- (unsigned)_maxIcons;
- (float)_miniIconGap;
- (id)_miniIconGridWithSkipping:(BOOL)skipping;
- (float)_miniIconSize;
- (unsigned)_numberOfExcessIcons;
- (CGRect)_rectForMiniIconAtIndex:(unsigned)index;
- (CGRect)_rectForMiniIconImage:(id)miniIconImage atIndex:(unsigned)index;
- (CGSize)_sizeOfMiniIconGridWithRows:(unsigned)rows;
- (unsigned)_skippingIconThreshold;
- (void)_updateBadgeValue;
- (void)_updateProgressBar;
- (id)croppedImageForIcon:(id)icon;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)folder;
- (id)generateIconImage:(int)image;
- (id)getGenericIconImage:(int)image;
- (id)gridImageWithSkipping:(BOOL)skipping;
- (id)iconOverlayImageForLocation:(int)location;
- (void)launch;
- (BOOL)matchesRepresentation:(id)representation;
- (id)miniImageForIcon:(id)icon;
- (void)noteContainedIcon:(id)icon replacedIcon:(id)icon2;
- (void)noteContainedIconBadgeChanged:(id)changed;
- (void)noteContainedIconDownloadingStateChanged:(id)changed;
- (void)noteContainedIconImageChanged:(id)changed;
- (void)noteContainedIconsAdded:(id)added removed:(id)removed;
- (id)representation;
- (BOOL)shouldSkipIcons;
- (id)updateGridImageIcon:(id)icon inGrid:(id)grid withImage:(id)image skipping:(BOOL)skipping;
- (void)updateLabel;
@end

