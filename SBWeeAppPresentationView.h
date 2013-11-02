/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinFadeOverlayOwner.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBWeeApp, UIViewController;
@protocol BBWeeAppPresentationController;

__attribute__((visibility("hidden")))
@interface SBWeeAppPresentationView : XXUnknownSuperclass <SBBulletinFadeOverlayOwner> {
	BOOL _isDismissing;
	UIViewController<BBWeeAppPresentationController> *_viewController;
	SBWeeApp *_weeApp;
}
@property(retain, nonatomic) UIViewController<BBWeeAppPresentationController> *viewController;
@property(retain, nonatomic) SBWeeApp *weeApp;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithWeeApp:(id)weeApp;
- (void)dealloc;
- (void)dismissWithCompletion:(id)completion;
- (void)setLinenGradientAlpha:(float)alpha;
- (void)setRasterizesFadeOverlay:(BOOL)overlay;
- (void)willMoveToWindow:(id)window;
@end

