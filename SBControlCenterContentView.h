/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBControlCenterObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBControlCenterGrabberView, SBCCQuickLaunchSectionController, NSString, SBControlCenterSectionViewController, SBCCSettingsSectionController, UIViewController;

__attribute__((visibility("hidden")))
@interface SBControlCenterContentView : XXUnknownSuperclass <SBControlCenterObserver> {
	UIViewController *_viewController;
	SBControlCenterGrabberView *_grabberView;
	SBCCSettingsSectionController *_settingsSection;
	SBControlCenterSectionViewController *_brightnessSection;
	SBControlCenterSectionViewController *_mediaControlsSection;
	SBControlCenterSectionViewController *_airplaySection;
	SBCCQuickLaunchSectionController *_quickLaunchSection;
}
@property(retain, nonatomic) SBControlCenterSectionViewController *airplaySection;
@property(retain, nonatomic) SBControlCenterSectionViewController *brightnessSection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBControlCenterGrabberView *grabberView;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBControlCenterSectionViewController *mediaControlsSection;
@property(retain, nonatomic) SBCCQuickLaunchSectionController *quickLaunchSection;
@property(retain, nonatomic) SBCCSettingsSectionController *settingsSection;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) UIViewController *viewController;
+ (float)defaultBreadthForOrientation:(int)orientation;
- (id)initWithFrame:(CGRect)frame;
- (void)_addSectionController:(id)controller;
- (id)_allSections;
- (void)_iPad_layoutSubviewsInBounds:(CGRect)bounds orientation:(int)orientation;
- (void)_iPhone_layoutSubviewsInBounds:(CGRect)bounds orientation:(int)orientation;
- (void)_removeSectionController:(id)controller;
- (float)contentHeightForOrientation:(int)orientation;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateEnabledSections;
- (void)updateSectionVisibility:(id)visibility animated:(BOOL)animated;
@end

