/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBSearchController : XXUnknownSuperclass <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
	SBSearchView *_searchView;
	BOOL _reloadingTableContent;
	BOOL _resultsUpdated;
	void *_addressBook;
}
@property(retain, nonatomic) SBSearchView *searchView;
- (id)init;
- (id)_auxiliaryTitleForABRecordID:(int)abrecordID;
- (void)_clearResultsString:(id)string;
- (void)_deselect;
- (BOOL)_hasSearchResults;
- (void)_populateCell:(id)cell withSearchResult:(id)searchResult;
- (void)_tableViewDidFadeOut:(id)_tableView finished:(id)finished context:(void *)context;
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

