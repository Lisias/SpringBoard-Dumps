/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBFolderView.h"

@class UIButton, SBStarkIconLayoutOverrideStrategy;

__attribute__((visibility("hidden")))
@interface SBStarkFolderView : SBFolderView {
	BOOL _buttonUXEnabled;
	UIButton *_scrollLeftButton;
	UIButton *_scrollRightButton;
	CGSize _scrollButtonSize;
	SBStarkIconLayoutOverrideStrategy *_iconLayoutOverrideStrategy;
	UIEdgeInsets _listViewInsets;
}
@property(retain, nonatomic) SBStarkIconLayoutOverrideStrategy *iconLayoutOverrideStrategy;
- (id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map;
- (void)_evaluateScrollingForListViewsIfNecessary;
- (void)_layoutSubviews;
- (id)_newPageControl;
- (float)_offsetToCenterPageControlInSpaceForPageControl;
- (void)_scrollButtonPressed:(id)pressed;
- (void)_updateIconListFrames;
- (void)_updatePageControlToIndex:(int)index;
- (void)_updateScrollButtonStatesForIndex:(int)index;
- (void)dealloc;
- (void)resetIconListViews;
- (void)setInteractionAffordances:(unsigned)affordances;
- (void)updateIconListViews;
@end

