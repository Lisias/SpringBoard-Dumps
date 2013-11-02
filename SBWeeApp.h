/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "BBWeeAppControllerHost.h"
#import "BBWeeAppController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, NSString;
@protocol BBWeeAppPresentationController, SBWeeAppDelegate;

__attribute__((visibility("hidden")))
@interface SBWeeApp : XXUnknownSuperclass <BBWeeAppController, BBWeeAppControllerHost> {
	id<BBWeeAppController> _weeAppController;
	NSString *_sectionID;
	id<SBWeeAppDelegate> _delegate;
	int _presentationMode;
	UIViewController<BBWeeAppPresentationController> *_presentationController;
	BOOL _sentWillAppear;
	struct {
		unsigned viewHeight : 1;
		unsigned viewWillAppear : 1;
		unsigned viewDidAppear : 1;
		unsigned viewWillDisappear : 1;
		unsigned viewDidDisappear : 1;
		unsigned willRotate : 1;
		unsigned willAnimateRotation : 1;
		unsigned didRotate : 1;
		unsigned loadPlaceholderView : 1;
		unsigned loadFullView : 1;
		unsigned unloadView : 1;
		unsigned launchURL : 1;
		unsigned launchURLForTapLocation : 1;
		unsigned clearSnapshotImage : 1;
		unsigned host : 1;
	} _weeAppFlags;
}
@property(assign, nonatomic) id<SBWeeAppDelegate> delegate;
@property(assign, nonatomic) id<BBWeeAppControllerHost> host;
@property(assign, nonatomic) int presentationMode;
@property(readonly, assign, nonatomic) NSString *sectionID;
- (id)initWithWeeAppController:(id)weeAppController sectionID:(id)anId;
- (void)clearShapshotImage;
- (id)currentPresentationController;
- (void)dealloc;
- (id)description;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (id)launchURLForTapLocation:(CGPoint)tapLocation;
- (void)loadFullView;
- (void)loadPlaceholderView;
- (id)presentationControllerForMode:(int)mode;
- (float)presentationHeight;
- (void)setPresentationView:(id)view;
- (void)unloadPresentationController;
- (void)unloadView;
- (id)view;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (float)viewHeight;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (BOOL)wantsTaps;
- (BOOL)weeApp:(id)app updatePresentationMode:(int)mode duration:(float)duration delay:(float)delay;
- (int)weeAppPresentationMode:(id)mode;
- (BOOL)weeAppWantsNotificationCenterDismissal:(id)dismissal;
- (void)weeAppWantsSizeUpdate:(id)update;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
@end

