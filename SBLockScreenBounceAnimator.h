/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIDynamicAnimatorDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "_UISettingsKeyObserver.h"

@class NSSet, UIGestureRecognizer, SBBouncingItem, NSMutableSet, UIView, SBBounceSettings, SBBounceBehavior, SBBouncingSystem, UIDynamicAnimator;
@protocol SBPresentingDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenBounceAnimator : XXUnknownSuperclass <UIDynamicAnimatorDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate> {
	NSMutableSet *_tapExcludedViews;
	BOOL _isAnimating;
	BOOL _bounceEnabled;
	UIView *_view;
	SBBouncingSystem *_system;
	UIDynamicAnimator *_animator;
	SBBouncingItem *_item;
	SBBounceBehavior *_behavior;
	UIGestureRecognizer *_tapRecognizer;
	NSSet *_gestures;
	id _shouldBeginBlock;
	id _prepareBlock;
	id _translateBlock;
	id _canceledBlock;
	id _completedBlock;
	SBBounceSettings *_settings;
	id<SBPresentingDelegate> _presentingDelegate;
}
@property(copy) id canceledBlock;
@property(copy) id completedBlock;
@property(readonly, assign, nonatomic) NSSet *gestures;
@property(copy) id prepareBlock;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(retain, nonatomic) SBBounceSettings *settings;
@property(copy) id shouldBeginBlock;
@property(readonly, assign, nonatomic) NSSet *tapExcludedViews;
@property(copy) id translateBlock;
- (id)initWithView:(id)view;
- (void)_addTapRecognizer;
- (void)_beginAnimating:(id)animating;
- (void)_createAnimator;
- (void)_handleTapGesture:(id)gesture;
- (void)_removeAnimator;
- (void)_removeTapRecognizer;
- (void)_resetAnimator;
- (void)_updateSettings;
- (void)addTapExcludedView:(id)view;
- (void)cancelAnimation;
- (void)cancelGestureRecognizer:(id)recognizer;
- (void)dealloc;
- (void)dynamicAnimatorDidPause:(id)dynamicAnimator;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (BOOL)isAnimating;
- (void)reenableGestureRecognizer:(id)recognizer;
- (void)removeTapExcludedView:(id)view;
- (void)setBounceEnabled:(BOOL)enabled;
- (void)settings:(id)settings changedValueForKey:(id)key;
@end
