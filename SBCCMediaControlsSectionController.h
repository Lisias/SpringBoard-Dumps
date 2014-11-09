/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBControlCenterSectionViewController.h"
#import "MPUSystemMediaControlsDelegate.h"

@class MPUSystemMediaControlsViewController;

__attribute__((visibility("hidden")))
@interface SBCCMediaControlsSectionController : SBControlCenterSectionViewController <MPUSystemMediaControlsDelegate> {
	MPUSystemMediaControlsViewController *_systemMediaViewController;
}
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (CGSize)contentSizeForOrientation:(int)orientation;
- (void)dealloc;
- (id)sectionIdentifier;
- (void)systemMediaControlsViewController:(id)controller didReceiveTapOnControlType:(int)type;
- (void)viewDidLoad;
@end

