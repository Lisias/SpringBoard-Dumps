/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;
@protocol SBBulletinClearButtonDelegate;

__attribute__((visibility("hidden")))
@interface SBBulletinClearButton : XXUnknownSuperclass {
	BOOL _showingClear;
	UIImageView *_backgroundView;
	UIImageView *_xImageView;
	UIImageView *_clearImageView;
	float _widthWhenShowingX;
	float _widthWhenShowingClear;
	id _clearShownAction;
	id _clearPressedAction;
	id<SBBulletinClearButtonDelegate> _delegate;
}
@property(copy, nonatomic) id clearPressedAction;
@property(copy, nonatomic) id clearShownAction;
@property(assign, nonatomic) id<SBBulletinClearButtonDelegate> delegate;
+ (void)_removeCachedClearImage;
+ (void)initialize;
- (id)init;
- (id)_background;
- (id)_clearImage;
- (CGRect)_clearImageFrame;
- (id)_precompositedXImage;
- (void)_pressAction;
- (void)_setShowsClear:(BOOL)clear animated:(BOOL)animated;
- (void)_switchToUsingSubviews;
- (id)_xImage;
- (CGRect)_xImageFrame;
- (CGRect)_xImageFrameInBounds:(CGRect)bounds;
- (void)dealloc;
- (void)resetAnimated:(BOOL)animated;
- (void)setHighlighted:(BOOL)highlighted;
- (BOOL)showingClear;
@end
