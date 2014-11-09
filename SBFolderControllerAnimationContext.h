/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBWindow, UIScreen;

__attribute__((visibility("hidden")))
@interface SBFolderControllerAnimationContext : XXUnknownSuperclass {
	UIScreen *_screen;
	SBWindow *_animationWindow;
	UIView *_fallbackIconContainer;
}
@property(readonly, retain, nonatomic) SBWindow *animationWindow;
@property(readonly, retain, nonatomic) UIView *fallbackIconContainer;
@property(readonly, retain, nonatomic) UIScreen *screen;
+ (id)contextWithScreen:(id)screen animationWindow:(id)window fallbackIconContainer:(id)container;
- (id)initWithScreen:(id)screen animationWindow:(id)window fallbackIconContainer:(id)container;
- (void)dealloc;
@end

