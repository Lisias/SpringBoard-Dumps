/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray, UITextLabel;

@interface SBIconList : UIView {
	NSMutableArray *_iconMatrix;
	NSMutableArray *_removedIcons;
	unsigned _scattered : 1;
	unsigned _needsLayout : 1;
	unsigned _stateIsDirty : 1;
	unsigned _allowJitter : 1;
	unsigned _showsInfoText : 1;
	unsigned _isJittering : 1;
	UITextLabel *_infoTextView;
}
+ (float)defaultHeight;
+ (id)sharedInstance;
- (id)initWithDefaultSize;
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;
- (id)initWithFrame:(CGRect)frame;
- (BOOL)canShowInfoText;
- (void)cleanseRemovedIcons;
- (void)compactIconsInIconList:(BOOL)iconList;
- (BOOL)containsIcon:(id)icon;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)firstFreeSlotX:(int *)x Y:(int *)y;
- (BOOL)getX:(int *)x Y:(int *)y forIcon:(id)icon;
- (id)iconAtPoint:(CGPoint)point X:(int *)x Y:(int *)y;
- (id)iconAtPoint:(CGPoint)point X:(int *)x Y:(int *)y proposedOrder:(int *)order;
- (id)iconAtX:(int)x Y:(int)y;
- (id)icons;
- (id)insertIcon:(id)icon atX:(int)x Y:(int)y moveNow:(BOOL)now;
- (BOOL)isDock;
- (BOOL)isEmpty;
- (BOOL)isScattered;
- (float)layoutIconsIfNeeded:(float)needed domino:(BOOL)domino;
- (void)layoutIconsNow;
- (float)leftMarginForIconRowArray:(id)iconRowArray;
- (int)maxIconColumns;
- (int)maxIconRows;
- (BOOL)needsCompacting;
- (void)noteEditingStateChanged;
- (CGPoint)originForIcon:(id)icon;
- (CGPoint)originForIconAtX:(int)x Y:(int)y;
- (id)placeIcon:(id)icon atX:(int)x Y:(int)y animate:(BOOL)animate moveNow:(BOOL)now;
- (void)removeAllIconAnimations;
- (void)removeAllIcons;
- (void)removeIcon:(id)icon compactEmptyLists:(BOOL)lists animate:(BOOL)animate;
- (void)removeIconAtX:(int)x Y:(int)y compactEmptyLists:(BOOL)lists animate:(BOOL)animate;
- (void)removeInfoAnimation:(id)animation didFinish:(id)finish view:(id)view;
- (void)resetWithDictionaryRepresentation:(id)dictionaryRepresentation;
- (void)scatter:(BOOL)scatter;
- (void)setIconAlphaForRow:(int)row column:(int)column alpha:(float)alpha;
- (void)setIconsNeedLayout;
- (void)setShowsInfoText:(BOOL)text;
- (void)setStateIsDirty:(BOOL)dirty;
- (void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
- (void)startJittering;
- (BOOL)stateIsDirty;
- (void)stopJittering;
- (float)topIconPadding;
- (void)unscatter:(BOOL)unscatter startTime:(double)time;
- (float)verticalIconPadding;
- (int)visibleIconsInRow:(id)row;
@end

