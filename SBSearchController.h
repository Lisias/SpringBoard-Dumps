/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSearchController : XXUnknownSuperclass <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, SPSearchAgentDelegate> {
	SBSearchView *_searchView;
	BOOL _reloadingTableContent;
	BOOL _resultsUpdated;
	void *_addressBook;
}
@property(retain, nonatomic) SBSearchView *searchView;
- (id)init;
- (id)_auxiliaryTitleForABRecordID:(int)abrecordID;
- (void)_deselect;
- (void)_populateCell:(id)cell withSearchResultAtIndex:(int)index inSection:(id)section;
- (void)_tableViewDidFadeOut:(id)_tableView finished:(id)finished context:(void *)context;
- (void)_updateTableContents;
- (void)controllerWasActivated;
- (void)controllerWasDeactivated;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (int)numberOfSectionsInTableView:(id)tableView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewIsScrollingHorizontallyInSearchView;
- (void)searchAgentClearedResults:(id)results;
- (void)searchAgentUpdatedResults:(id)results;
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
- (void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
- (void)updateResultsIfNecessary;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

