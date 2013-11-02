/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBFolderIconObserver.h"
#import "SBIconView.h"

@class SBDownloadingProgressBar, NSMutableSet, SBFolderIcon, UIImageView;

@interface SBFolderIconView : SBIconView <SBFolderIconObserver> {
	UIImageView *_iconBackgroundView;
	UIImageView *_iconForegroundView;
	SBDownloadingProgressBar *_progressBar;
	NSMutableSet *_animatingIcons;
	unsigned _currentScrollRow;
	BOOL _skippingGridIcons;
	float _miniIconVisibleOffset;
}
@property(readonly, retain) SBFolderIcon *folderIcon;
- (id)_folderBackgroundImage;
- (id)_folderForegroundImage;
- (void)_positionMiniGrid;
- (void)_updateProgressBar;
- (BOOL)allowsTapWhileEditing;
- (void)containedIconImageDidUpdate:(id)containedIconImage;
- (void)dealloc;
- (BOOL)delaysUnhighlightWhenTapped;
- (id)description;
- (id)folder;
- (CGRect)frameForIconOverlay;
- (double)grabDurationForEvent:(id)event;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (id)iconBackgroundView;
- (void)iconImageDidUpdate:(id)iconImage;
- (id)iconImageSnapshot:(id)snapshot;
- (void)noteIconAdded:(id)added;
- (void)placeGhostlyImageView;
- (void)positionCloseBoxOfType:(int)type;
- (void)positionIconImageView;
- (void)prepareForRecycling;
- (id)progressBar;
- (CGRect)rectForMiniIconAtIndex:(unsigned)index;
- (void)setFolderIcon:(id)icon;
- (void)setGhostly:(BOOL)ghostly requester:(int)requester;
- (void)setIcon:(id)icon;
- (void)setIconScrollPosition:(int)position animated:(BOOL)animated;
- (void)setIsOverlapping:(BOOL)overlapping;
- (void)setPartialGhostly:(float)ghostly requester:(int)requester;
- (void)showDropGlow:(BOOL)glow;
- (id)snapshotSettings;
- (CGAffineTransform)transformToMakeIconBorderExpandToSizeOfDropGlow;
@end

