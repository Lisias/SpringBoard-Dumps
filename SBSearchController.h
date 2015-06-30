/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "UISearchBarDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SpringBoard-Structs.h"


@interface SBSearchController : NSObject <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
	SBSearchView *_searchView;
	NSTimeZone *_calTimeZone;
	NSDateFormatter *_calDayDateFormatter;
	NSDateFormatter *_dayDateFormatter;
	NSDateFormatter *_timeDateFormatter;
	BOOL _reloadingTableContent;
	BOOL _resultsUpdated;
	NSCalendar *_autoUpdatingCurrentCalendar;
	NSDate *_midnightThisMorning;
	void *_addressBook;
}
@property(retain, nonatomic) SBSearchView *searchView;
- (id)init;
- (id)_autoUpdatingCurrentCalendar;
- (id)_auxiliaryTitleForABRecordID:(int)abrecordID;
- (id)_calDayDateFormatter;
- (id)_calTimeZone;
- (void)_clearResultsString:(id)string;
- (id)_dayAndTimeStringForDate:(id)date;
- (id)_dayDateFormatter;
- (id)_dayStringForDate:(id)date useCalendarTimeZone:(BOOL)zone;
- (void)_deselect;
- (BOOL)_hasSearchResults;
- (id)_midnightThisMorning;
- (void)_populateCell:(id)cell withSearchResult:(id)searchResult;
- (void)_resetCalTimeZone;
- (void)_significantTimeChange:(id)change;
- (void)_tableViewDidFadeOut:(id)_tableView finished:(id)finished context:(void *)context;
- (id)_timeDateFormatter;
- (id)_timeStringForDate:(id)date;
- (void)_updateResults:(id)results;
- (void)_updateTableContents;
- (void)controllerWasDeactivated;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (int)numberOfSectionsInTableView:(id)tableView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewIsScrollingHorizontallyInSearchView;
- (void)searchBar:(id)bar textDidChange:(id)text;
- (void)searchBarSearchButtonClicked:(id)clicked;
- (void)searchBarTextDidBeginEditing:(id)searchBarText;
- (void)searchBarTextDidEndEditing:(id)searchBarText;
- (BOOL)shouldShowKeyboardOnScroll;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)tableView:(id)view viewForHeaderInSection:(int)section;
- (BOOL)tableView:(id)view wantsHeaderForSection:(int)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)updateResultsIfNecessary;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

