/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBNCColumnViewController : XXUnknownSuperclass <SBModeViewControllerContentProviding, SBNCTableViewControllerDelegate, SBUISizeObservingViewDelegate> {
	SBNCTableViewController *_ncTableViewController;
	_UIContentUnavailableView *_contentUnavailableView;
	struct {
		unsigned scrollsToTop : 1;
		unsigned isLayoutValid : 1;
	} _columnViewControllerFlags;
	UIView *_contentProvidingView;
	BOOL _requestHandlingEnabled;
	id<SBBulletinActionHandler> _bulletinActionHandler;
}
@property(assign, nonatomic) id<SBBulletinActionHandler> bulletinActionHandler;
@property(readonly, assign, nonatomic) CGSize contentSize;
@property(readonly, assign, nonatomic) NSString *contentUnavailableText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int layoutMode;
@property(readonly, retain, nonatomic) SBNCTableViewController *ncTableViewController;
@property(assign, nonatomic, getter=isRequestHandlingEnabled) BOOL requestHandlingEnabled;
@property(assign, nonatomic) BOOL scrollsToTop;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) Class tableViewControllerClass;
+ (unsigned)_contentUnavailableVibrantOptionsForCurrentState;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)_insertContentUnavailableView;
- (id)_lazyContentUnavailableView;
- (void)_removeBulletinViewControllerView;
- (void)_transitionToBulletinViewControllerView:(BOOL)bulletinViewControllerView animated:(BOOL)animated;
- (BOOL)canRemoveViewOnDismissal:(id)dismissal;
- (void)dealloc;
- (void)insertAppropriateViewWithContent;
- (void)insertTableView;
- (void)invalidateContentLayout;
- (int)layoutModeForNotificationCenterTableViewController:(id)notificationCenterTableViewController;
- (void)loadView;
- (int)notificationCenterTableViewController:(id)controller insertionAnimationForRow:(id)row inSection:(id)section;
- (int)notificationCenterTableViewController:(id)controller removalAnimationForRow:(id)row inSection:(id)section;
- (int)notificationCenterTableViewController:(id)controller replacementAnimationForRow:(id)row inSection:(id)section;
- (void)reloadSortOrder;
- (void)sizeObservingView:(id)view didChangeSize:(CGSize)size;
- (void)transitionToBulletinViewControllerViewIfNecessary;
- (void)transitionToContentUnavailableViewIfNecessary;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
@end

