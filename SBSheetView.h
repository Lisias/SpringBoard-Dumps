/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>

@class SBApplication, SBProxyRemoteView;

@interface SBSheetView : UIView {
	SBProxyRemoteView *_remoteProxyView;
	SBApplication *_app;
	BOOL _wasPresentedAnimated;
}
- (id)initWithRemoteViewIdentifier:(id)remoteViewIdentifier application:(id)application wasPresentedAnimated:(BOOL)animated;
- (id)application;
- (void)dealloc;
- (void)noteSheetDidEnd;
- (id)remoteViewIdentifier;
- (BOOL)wasPresentedAnimated;
@end
