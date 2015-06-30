/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBIconDelegate <NSObject>
@optional
- (int)closeBoxTypeForIcon:(id)icon;
- (BOOL)icon:(id)icon canReceiveGrabbedIcon:(id)icon2;
- (void)icon:(id)icon closeFolderAnimated:(BOOL)animated;
- (void)icon:(id)icon openFolder:(id)folder animated:(BOOL)animated;
- (void)icon:(id)icon touchEnded:(BOOL)ended;
- (void)icon:(id)icon touchMovedWithEvent:(id)event;
- (BOOL)iconAllowJitter:(id)jitter;
- (void)iconCloseBoxTapped:(id)tapped;
- (void)iconDownloadStateChanged:(id)changed;
- (void)iconHandleLongPress:(id)press;
- (BOOL)iconPositionIsEditable:(id)editable;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (void)iconTouchBegan:(id)began;
- (void)iconUninstall:(id)uninstall;
@end

