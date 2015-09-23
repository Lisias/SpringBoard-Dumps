/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkNotificationViewController : XXUnknownSuperclass <UICollectionViewDataSource, UICollectionViewDelegate, SBCollectionViewCellDelegate, SBStarkBannerTargetObserver, UIGestureRecognizerDelegate> {
	id<SBStarkNotificationViewControllerDelegate> _delegate;
	id<SBStarkSessionConfiguring> _configuration;
	SBStarkSystemGestureManager *_systemGestureManager;
	BOOL _touchCapable;
	BOOL _dismissingForSystemGesture;
	UITapGestureRecognizer *_backGestureRecognizer;
	UITapGestureRecognizer *_selectGestureRecognizer;
	SBStarkBannerTarget *_bannerTarget;
	SBStarkAlertItemBannerSource *_alertItemBannerSource;
	SBStarkBulletinBannerSource *_bulletinBannerSource;
	SBUIBannerContext *_currentContext;
	NSArray *_currentSubActionLabels;
	SBStarkBannerCell *_currentCell;
	int _state;
	SBStarkNotificationLayout *_notificationsLayout;
	SBCarBannerNotificationView *_notificationsView;
	UITapGestureRecognizer *_cancelNotificationTapGestureRecognizer;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBStarkNotificationViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int state;
@property(readonly, assign) Class superclass;
- (id)initWithConfiguration:(id)configuration systemGestureManager:(id)manager;
- (void)_performBackGesture:(id)gesture;
- (void)_performCancelNotificationTapGesture:(id)gesture;
- (void)_performSelectGesture:(id)gesture;
- (void)_setState:(int)state;
- (void)_showTestNotificationWithTitle:(id)title;
- (void)_wheelChangedWithEvent:(id)event;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
- (int)collectionView:(id)view numberOfItemsInSection:(int)section;
- (BOOL)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)indexPath;
- (BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)indexPath;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)indexPath;
- (void)dealloc;
- (void)dismissCurrent;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)handleMenuEvent;
- (BOOL)isSuspended;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)collectionView;
- (void)setSuspended:(BOOL)suspended cancellingCurrent:(BOOL)current forReason:(id)reason;
- (void)setSuspended:(BOOL)suspended forReason:(id)reason;
- (void)starkBannerTarget:(id)target didChangeContextWithDismissReason:(int)dismissReason;
@end

