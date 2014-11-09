/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWidgetViewController.h"

@class NSObject, UIView, NSTimer, NSDate, NSMapTable, _SBWidgetRemoteViewController, _SBBrokenWidgetView;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, NSCopying;

__attribute__((visibility("hidden")))
@interface _SBWidgetViewControllerOutOfProcess : SBWidgetViewController {
	BOOL _snapshottingEnabled;
	BOOL _requestingRemoteViewController;
	BOOL _disconnectingRemoteViewController;
	BOOL _encodingLayerTree;
	BOOL _didRequestViewInset;
	BOOL _didUpdate;
	BOOL _blacklisted;
	NSObject<OS_dispatch_queue> *_proxyConnectionQueue;
	NSObject<OS_dispatch_queue> *_proxyDisconnectionQueue;
	NSObject<OS_dispatch_queue> *_proxyRequestQueue;
	NSObject<OS_dispatch_queue> *_diskWriteQueue;
	_SBWidgetRemoteViewController *_remoteViewController;
	id<NSCopying> _extensionRequest;
	UIView *_contentProvidingView;
	UIView *_snapshotView;
	NSTimer *_disconnectionTimer;
	NSObject<OS_dispatch_semaphore> *_viewWillAppearSemaphore;
	NSObject<OS_dispatch_semaphore> *_viewWillDisappearSemaphore;
	id _remoteViewControllerDisconnectionHandler;
	NSDate *_lastUnanticipatedDisconnectionDate;
	NSMapTable *_openAppearanceTransactions;
	_SBBrokenWidgetView *_brokenView;
}
@property(assign, nonatomic, getter=_isBlacklisted, setter=_setBlacklisted:) BOOL blacklisted;
@property(retain, nonatomic, getter=_brokenView, setter=_setBrokenView:) _SBBrokenWidgetView *brokenView;
@property(retain, nonatomic, getter=_contentProvidingView, setter=_setContentProvidingView:) UIView *contentProvidingView;
@property(assign, nonatomic, getter=_didRequestViewInset, setter=_setDidRequestViewInset:) BOOL didRequestViewInset;
@property(assign, nonatomic, getter=_didUpdate, setter=_setDidUpdate:) BOOL didUpdate;
@property(assign, nonatomic, getter=_isDisconnectingRemoteViewController, setter=_setDisconnectingRemoteViewController:) BOOL disconnectingRemoteViewController;
@property(assign, nonatomic, getter=_disconnectionTimer, setter=_setDisconnectionTimer:) NSTimer *disconnectionTimer;
@property(readonly, assign, nonatomic, getter=_diskWriteQueue) NSObject<OS_dispatch_queue> *diskWriteQueue;
@property(assign, nonatomic, getter=_isEncodingLayerTree, setter=_setEncodingLayerTree:) BOOL encodingLayerTree;
@property(copy, nonatomic, getter=_extensionRequest, setter=_setExtensionRequest:) id<NSCopying> extensionRequest;
@property(assign, nonatomic, setter=_setImplementsPerformUpdate:) BOOL implementsPerformUpdate;
@property(retain, nonatomic, getter=_lastUnanticipatedDisconnectionDate, setter=_setLastUnanticipatedDisconnectionDate:) NSDate *lastUnanticipatedDisconnectionDate;
@property(readonly, assign, nonatomic, getter=_openAppearanceTransactions) NSMapTable *openAppearanceTransactions;
@property(readonly, assign, nonatomic, getter=_proxyConnectionQueue) NSObject<OS_dispatch_queue> *proxyConnectionQueue;
@property(readonly, assign, nonatomic, getter=_proxyDisconnectionQueue) NSObject<OS_dispatch_queue> *proxyDisconnectionQueue;
@property(readonly, assign, nonatomic, getter=_proxyRequestQueue) NSObject<OS_dispatch_queue> *proxyRequestQueue;
@property(retain, nonatomic, getter=_remoteViewController, setter=_setRemoteViewController:) _SBWidgetRemoteViewController *remoteViewController;
@property(copy, nonatomic, getter=_remoteViewControllerDisconnectionHandler, setter=_setRemoteViewControllerDisconnectionHandler:) id remoteViewControllerDisconnectionHandler;
@property(assign, nonatomic, getter=_isRequestingRemoteViewController, setter=_setRequestingRemoteViewController:) BOOL requestingRemoteViewController;
@property(retain, nonatomic, getter=_snapshotView, setter=_setSnapshotView:) UIView *snapshotView;
@property(assign, nonatomic, getter=_isSnapshottingEnabled, setter=_setSnapshottingEnabled:) BOOL snapshottingEnabled;
@property(retain, nonatomic, getter=_viewWillAppearSemaphore, setter=_setViewWillAppearSemaphore:) NSObject<OS_dispatch_semaphore> *viewWillAppearSemaphore;
@property(retain, nonatomic, getter=_viewWillDisappearSemaphore, setter=_setViewWillDisappearSemaphore:) NSObject<OS_dispatch_semaphore> *viewWillDisappearSemaphore;
+ (void)initialize;
- (id)initWithWidgetIdentifier:(id)widgetIdentifier bundlePath:(id)path;
- (BOOL)_attemptReconnectionAfterUnanticipatedDisconnection;
- (void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(BOOL)necessary animated:(BOOL)animated completion:(id)completion;
- (id)_cachedStateURLEnsuringDirectoryExists:(BOOL)exists;
- (BOOL)_canDisconnectRemoteViewController:(id *)controller;
- (BOOL)_canInsertRemoteView;
- (BOOL)_canRequestRemoteViewController:(id *)controller;
- (id)_cancelTouches;
- (void)_captureLayerTree:(id)tree;
- (float)_contentWidth;
- (void)_disconnectRemoteViewController:(id)controller;
- (void)_disconnectRemoteViewControllerAndCoalesce:(id)coalesce;
- (void)_disconnectionTimerDidFire:(id)_disconnectionTimer;
- (BOOL)_effectiveHasContent;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
- (void)_endRequestState:(int)state;
- (void)_enqueueRemoteServiceRequest:(id)request withDescription:(id)description;
- (void)_enqueueRequest:(id)request inQueue:(id)queue trampolinedToMainQueue:(BOOL)mainQueue withDescription:(id)description;
- (void)_finishDisconnectingRemoteViewControllerWithError:(id)error completion:(id)completion;
- (void)_handleRequestedViewHeight:(float)height usingAutolayout:(BOOL)autolayout requestIdentifier:(id)identifier;
- (void)_insertAppropriateViewWithContent;
- (void)_insertContentProvidingSubview:(id)subview completion:(id)completion;
- (void)_insertRemoteViewAfterViewWillAppearWithCompletion:(id)_insertRemoteViewAfterView;
- (void)_invalidateDisconnectionTimer;
- (void)_invalidateSnapshotWithForce:(BOOL)force completionHandler:(id)handler;
- (BOOL)_isRemoteViewVisible;
- (void)_loadSnapshotViewFromDiskIfNecessary:(id)diskIfNecessary;
- (UIEdgeInsets)_marginInset;
- (void)_packageViewFromURL:(id)url reply:(id)reply;
- (void)_packageViewWithBlock:(id)block reply:(id)reply;
- (void)_packageViewWithData:(id)data reply:(id)reply;
- (void)_removeAllSnapshots;
- (void)_removeSnapshotAtURL:(id)url;
- (id)_request:(id)request withDescription:(id)description forQueue:(id)queue trampolinedToMainQueue:(BOOL)mainQueue;
- (void)_requestRemoteViewController:(id)controller;
- (void)_setSemaphoreInstanceVariable:(id *)variable toSemaphore:(id)semaphore;
- (void)_setSnapshotView:(id)view forLayoutMode:(int)layoutMode;
- (void)_setupRequestQueue;
- (id)_snapshotIdentifierForLayoutMode:(int)layoutMode;
- (void)_synchronizeCachedState;
- (CGSize)_todayContentMaxSize;
- (float)_updatePreferredContentSizeWithHeight:(float)height;
- (id)_valueForCachedStateKey:(id)cachedStateKey;
- (id)_widgetSnapshotURLForLayoutMode:(int)layoutMode ensuringDirectoryExists:(BOOL)exists;
- (void)_writeSnapshotData:(id)data toURLForLayoutMode:(int)layoutMode;
- (id)auditToken;
- (void)captureSnapshotWithCompletionHandler:(id)completionHandler;
- (void)connectRemoteViewControllerWithCompletionHandler:(id)completionHandler;
- (void)dealloc;
- (id)description;
- (void)disconnectRemoteViewControllerWithCompletionHandler:(id)completionHandler;
- (void)handleReconnectionRequest:(id)request;
- (void)insertSnapshotWithCompletionHandler:(id)completionHandler;
- (void)invalidateCachedSnapshotWithCompletionHandler:(id)completionHandler;
- (void)performUpdateWithCompletionHandler:(id)completionHandler;
- (void)requestInsertionOfRemoteViewWithCompletionHandler:(id)completionHandler;
- (void)setHasContent:(BOOL)content;
- (void)setRequestState:(int)state;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)validateSnapshotViewForActiveLayoutMode;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)widgetDidTerminateWithError:(id)widget;
@end
