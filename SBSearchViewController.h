/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SPSearchAgentDelegate.h"
#import "UISearchBarDelegate.h"
#import "SBSearchGestureObserver.h"
#import "SBSearchHeaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBSearchResultsBackdropView, SBSearchHeader, UITableView, UITapGestureRecognizer, UIPanGestureRecognizer, UIImage, UIView, UILabel;

__attribute__((visibility("hidden")))
@interface SBSearchViewController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource, SPSearchAgentDelegate, SBSearchGestureObserver, UISearchBarDelegate, SBSearchHeaderDelegate> {
	SBSearchHeader *_searchHeader;
	SBSearchResultsBackdropView *_tableBackdrop;
	UITableView *_tableView;
	UILabel *_noResultsLabel;
	UIView *_touchStealingView;
	UITapGestureRecognizer *_tapRecognizer;
	UIPanGestureRecognizer *_panRecognizer;
	void *_addressBook;
	UIImage *_placeHolderImages[15];
	float _lastContentOffsetY;
	BOOL _scrollDown;
	BOOL _hasShownBackgroundSinceLastClear;
	id _fadeOutCompletionBlock;
	BOOL _fadingOut;
	BOOL _visible;
}
@property(readonly, assign, nonatomic, getter=isFadingOut) BOOL fadingOut;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
+ (id)sharedInstance;
- (id)init;
- (id)_auxiliaryTitleForABRecordID:(int)abrecordID;
- (void)_deselectTableViewCell;
- (void)_fadeForLaunchWithDuration:(double)duration completion:(id)completion;
- (void)_fadeOutAndHideKeyboardIfNecessary:(id)necessary;
- (void)_handleDismissGesture;
- (void)_handlePanRecognizer:(id)recognizer;
- (void)_handleTapRecognizer:(id)recognizer;
- (BOOL)_hasNoResultsForQuery;
- (BOOL)_hasResults;
- (void)_keyboardWillChangeFrame:(id)_keyboard;
- (id)_placeHolderImageForDomain:(unsigned)domain;
- (void)_populateCell:(id)cell atIndexPath:(id)indexPath inTableView:(id)tableView;
- (void)_resizeTableViewForPreferredContentSizeChange:(id)preferredContentSizeChange;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldReturnPressed;
- (void)_setShowingKeyboard:(BOOL)keyboard;
- (BOOL)_shouldDisplayImagesForDomain:(unsigned)domain;
- (BOOL)_showingKeyboard;
- (void)_startDownloadingAppForStoreIdentifier:(unsigned long long)storeIdentifier bundleIdentifier:(id)identifier;
- (void)_updateTableContents;
- (void)cancelButtonPressed;
- (void)dealloc;
- (void)dismiss;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)tableView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (void)searchAgentClearedResults:(id)results;
- (void)searchAgentUpdatedResults:(id)results;
- (void)searchGesture:(id)gesture changedPercentComplete:(float)complete;
- (void)searchGesture:(id)gesture completedShowing:(BOOL)showing;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didHighlightRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didUnhighlightRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (id)tableView:(id)view viewForHeaderInSection:(int)section;
- (BOOL)tableView:(id)view wantsHeaderForSection:(int)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (void)viewDidLayoutSubviews;
@end

