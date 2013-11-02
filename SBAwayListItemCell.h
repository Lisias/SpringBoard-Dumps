/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, SBBulletinCellContentViewBase, SBAwayBulletinListController;

__attribute__((visibility("hidden")))
@interface SBAwayListItemCell : XXUnknownSuperclass {
	UIImageView *_separatorTopHalf;
	UIImageView *_separatorBottomHalf;
	UIImageView *_iconImageView;
	SBBulletinCellContentViewBase *_cellContentView;
	SBAwayBulletinListController *_controller;
	BOOL _shouldBlinkIcon;
}
@property(assign, nonatomic) BOOL shouldBlinkIcon;
+ (float)_cellContentExtraPadding;
+ (float)_cellContentLeftPadding;
+ (float)_cellContentRightPadding;
+ (float)_cellContentTopPadding;
+ (float)_cellIconLeftPadding;
+ (float)_contentWidthForRowWidth:(float)rowWidth;
+ (float)_rowHeightForContentHeight:(float)contentHeight;
- (id)initWithReuseIdentifier:(id)reuseIdentifier;
- (void)_addIconBlinkAnimation;
- (CGRect)_cellContentViewFrame;
- (CGRect)_contentRect;
- (void)_createContentView;
- (BOOL)_drawsSeparator;
- (BOOL)_hasBackgroundColor;
- (void)_removeIconBlinkAnimation;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)color;
- (void)setController:(id)controller;
- (void)setIconImage:(id)image;
- (void)setMessage:(id)message;
- (void)setTitle:(id)title;
@end

