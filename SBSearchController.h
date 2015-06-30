/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UISearchBarDelegate.h"
#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"


@interface SBSearchController : NSObject <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
	SBSearchView *_searchView;
	NSDateFormatter *_dayDateFormatter;
	NSDateFormatter *_timeDateFormatter;
	BOOL _reloadingTableContent;
	BOOL _resultsUpdated;
	NSCalendar *_autoUpdatingCurrentCalendar;
	NSDate *_midnightThisMorning;
}
@property(retain, nonatomic) SBSearchView *searchView;
- (id)init;
- (id)_autoUpdatingCurrentCalendar;
- (void)_clearResultsString:(id)string;
- (id)_dayAndTimeStringForDate:(id)date;
- (id)_dayStringForDate:(id)date;
- (void)_deselect;
- (BOOL)_hasSearchResults;
- (id)_midnightThisMorning;
- (void)_populateCell:(id)cell withSearchResult:(id)searchResult;
- (void)_significantTimeChange:(id)change;
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
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)tableView:(id)view viewForHeaderInSection:(int)section;
- (BOOL)tableView:(id)view wantsHeaderForSection:(int)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)updateResultsIfNecessary;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

