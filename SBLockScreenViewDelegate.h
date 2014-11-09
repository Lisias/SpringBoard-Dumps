/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBLockScreenViewDelegate <NSObject>
- (void)addCoordinatedPresentingController:(id)controller;
- (id)effectiveCustomSlideToUnlockText;
- (void)lockScreenView:(id)view didEndScrollingOnPage:(int)page;
- (void)lockScreenView:(id)view didScrollToPage:(int)page;
- (void)lockScreenViewDidBeginScrolling:(id)lockScreenView;
- (void)lockScreenViewDidScrollWithNewScrollPercentage:(float)lockScreenView tracking:(BOOL)tracking;
- (BOOL)lockScreenViewPhonePluginIsActive;
- (void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)lockScreenView percentScrolledVelocity:(float)velocity targetScrollPercentage:(float)percentage;
- (void)removeCoordinatedPresentingController:(id)controller;
- (BOOL)wantsToShowStatusBarTime;
@end

