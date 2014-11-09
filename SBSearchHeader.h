/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBSearchGestureObserver.h"

@class UIButton, UIView, UITextField, SBWallpaperEffectView;
@protocol SBSearchHeaderDelegate;

__attribute__((visibility("hidden")))
@interface SBSearchHeader : XXUnknownSuperclass <SBSearchGestureObserver> {
	SBWallpaperEffectView *_blurView;
	UIView *_container;
	UIButton *_cancelButton;
	UITextField *_searchField;
	id<SBSearchHeaderDelegate> _delegate;
}
@property(assign, nonatomic) id<SBSearchHeaderDelegate> delegate;
@property(readonly, assign, nonatomic) UITextField *searchField;
- (id)initWithFrame:(CGRect)frame;
- (void)_cancelButtonPressed;
- (void)dealloc;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (void)layoutSubviews;
- (void)searchGesture:(id)gesture changedPercentComplete:(float)complete;
@end

