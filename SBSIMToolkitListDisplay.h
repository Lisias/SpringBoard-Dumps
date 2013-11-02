/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SBSlidingAlertDisplay.h"

@class UITableView, NSArray;

@interface SBSIMToolkitListDisplay : SBSlidingAlertDisplay <UITableViewDelegate, UITableViewDataSource> {
	UITableView *_table;
	NSArray *_items;
}
+ (id)newTopBarForInstance:(id)instance;
- (id)initWithFrame:(CGRect)frame;
- (void)_selectListItem:(unsigned long)item;
- (id)_simToolkitListItems;
- (void)alertDisplayWillBecomeVisible;
- (void)dealloc;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
- (void)leftNavigationButtonPressed;
- (void)rightNavigationButtonPressed;
- (void)setMiddleContentAlpha:(float)alpha;
- (BOOL)showsDesktopImage;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
@end

