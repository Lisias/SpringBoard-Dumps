/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertDisplay.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBAlertDisplay : XXUnknownSuperclass {
	SBAlert *_alert;
	unsigned _displaysAboveStatusBar : 1;
	unsigned _shouldAnimateIn : 1;
}
- (id)initWithFrame:(CGRect)frame;
- (id)alert;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)dismiss;
- (BOOL)displaysAboveStatusBar;
- (BOOL)isReadyToBeRemovedFromView;
- (void)launchURL:(id)url;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
- (void)setAlert:(id)alert;
- (void)setDisplaysAboveStatusBar:(BOOL)bar;
- (void)setHandlerAlreadyActive:(BOOL)active;
- (void)setShouldAnimateIn:(BOOL)animateIn;
- (BOOL)shouldAddClippingViewDuringRotation;
- (BOOL)shouldAnimateIn;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

@interface SBAlertDisplay (PhoneNumberResolution)
+ (id)imageForPerson:(void *)person display:(id)display isFullscreen:(BOOL *)fullscreen;
@end

@interface SBAlertDisplay (SIMToolkitExtensions)
+ (id)alertBackgroundColor;
@end

