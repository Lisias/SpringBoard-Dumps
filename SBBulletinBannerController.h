/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBBulletinBannerController : XXUnknownSuperclass <BBObserverDelegate, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate> {
	BBObserver *_observer;
	NSMutableArray *_incomingBulletinQueue;
	SBBannerAndShadowView *_bannerAndShadowView;
	UIView *_snapshotView;
	BOOL _dismissalOverdue;
	BOOL _replaceDelayIsActive;
	BOOL _soundIsPlaying;
	BOOL _assistantIsVisible;
	BOOL _inhospitableDisplayIsFrontmost;
	BOOL _deviceIsLocked;
	NSMutableSet *_sectionIDsToPend;
	float _showcaseHeight;
}
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (id)init;
- (void)_adjustShadowAlphasForProgress:(float)progress;
- (void)_bulletinSoundCompleted:(id)completed;
- (CGRect)_calculateFlipRectAndCreateSnapshotViewForBannerFrame:(CGRect)bannerFrame orientation:(int)orientation;
- (CGRect)_currentBannerFrameForOrientation:(int)orientation;
- (void)_dequeueBulletinIfPossible;
- (id)_dequeueNextBulletinItem;
- (void)_dismissIntervalElapsed;
- (void)_enqueueBulletin:(id)bulletin;
- (void)_flipToBanner:(id)banner animation:(int)animation;
- (void)_handleBannerPanGesture:(id)gesture;
- (void)_handleBannerTapGesture:(id)gesture;
- (unsigned)_indexOfIncomingBulletinID:(id)incomingBulletinID;
- (id)_meshTransformForDegreesOfRotation:(float)rotation flipInsets:(UIEdgeInsets)insets orientation:(int)orientation topIsLive:(BOOL)live;
- (CGRect)_normalBannerFrameForOrientation:(int)orientation;
- (void)_presentBannerForItem:(id)item;
- (float)_progressForBannerTranslation:(float)bannerTranslation maxTranslation:(float)translation;
- (void)_removeEnqueuedBulletin:(id)bulletin;
- (void)_removePerspective;
- (BOOL)_replaceEnqueuedBulletin:(id)bulletin;
- (void)_replaceIntervalElapsed;
- (void)_setBannerTranslation:(float)translation progress:(float)progress;
- (void)_setUpPerspectiveForNormalFlipRect:(CGRect)normalFlipRect;
- (void)_stopCurrentSound;
- (void)_tearDownView;
- (void)_tryToDismissBannerWithAnimation:(int)animation;
- (void)adjustLayoutForShowcaseHeight:(float)showcaseHeight;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation;
- (void)bulletinWindowStoppedBeingBusy;
- (void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow;
- (void)dealloc;
- (void)dismissBanner;
- (void)dismissBannerWithAnimation:(int)animation;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (BOOL)isShowingBanner;
- (id)newBannerSnapshotViewRotatedForOrientation:(int)orientation;
- (void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
- (id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
- (void)observer:(id)observer modifyBulletin:(id)bulletin;
- (void)observer:(id)observer removeBulletin:(id)bulletin;
- (id)observer:(id)observer thumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
- (void)observer:(id)observer updateSectionInfo:(id)info;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
- (void)setBannerAlpha:(float)alpha;
- (void)showTestBanner;
@end

