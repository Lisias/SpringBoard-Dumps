/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWidgetViewControllerHost.h"

@class NSMutableArray, _SBWidgetViewControllerHost_Proxy;

__attribute__((visibility("hidden")))
@interface _SBWidgetViewControllerHostOutOfProcess : SBWidgetViewControllerHost {
	_SBWidgetViewControllerHost_Proxy *_proxy;
	NSMutableArray *_requestQueue;
}
@property(retain, nonatomic, setter=_setProxy:) _SBWidgetViewControllerHost_Proxy *_proxy;
+ (id)requestViewController:(id)controller context:(id)context handler:(id)handler;
- (id)initWithWidgetIdentifier:(id)widgetIdentifier forWidgetIdiom:(int)widgetIdiom bundlePath:(id)path;
- (void)_performOrEnqueueRequest:(id)request;
- (void)_performPendingRequestsIfPossible;
- (void)dealloc;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (void)loadView;
- (void)requestPreferredViewSizeWithHandler:(id)handler;
- (void)viewDidLoad;
@end

