/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class SBAppToAppTransitionView, UIWindow;

@interface SBAppToAppTransitionController : NSObject {
	UIWindow *_transitionWindow;
	SBAppToAppTransitionView *_transitionView;
}
@property(readonly, assign, nonatomic) SBAppToAppTransitionView *transitionView;
- (id)init;
- (void)beginTransition;
- (void)dealloc;
- (void)endTransition;
@end
