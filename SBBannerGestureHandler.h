/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@protocol SBBannerGestureHandlerDelegate;

__attribute__((visibility("hidden")))
@interface SBBannerGestureHandler : XXUnknownSuperclass {
	id<SBBannerGestureHandlerDelegate> _delegate;
	SBBannerContainerViewController *_bannerViewController;
	SBBannerController *_bannerController;
}
@property(readonly, assign, nonatomic) SBBannerController *bannerController;
@property(readonly, retain, nonatomic) SBBannerContextView *bannerView;
@property(readonly, retain, nonatomic) SBBannerContainerViewController *bannerViewController;
@property(assign, nonatomic) id<SBBannerGestureHandlerDelegate> delegate;
+ (id)notificationCenterHandlerWithBannerController:(id)bannerController bannerViewController:(id)controller;
+ (id)pullDownHandlerWithBannerController:(id)bannerController bannerViewController:(id)controller;
- (id)initWithBannerController:(id)bannerController bannerViewController:(id)controller;
- (void)dealloc;
- (BOOL)handleGestureType:(int)type state:(int)state location:(CGPoint)location displacement:(float)displacement velocity:(float)velocity;
- (void)invalidate;
@end
