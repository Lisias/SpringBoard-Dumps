/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkStatusBarViewController : XXUnknownSuperclass <UIStatusBarStyleDelegate> {
	id<SBStarkSessionConfiguring> _configuration;
	SBStarkStatusBarStateProvider *_statusBarStateProvider;
	UIStatusBar *_statusBarView;
	id<UIStatusBarStyleDelegate> _statusBarStyleDelegate;
	NSMutableSet *_statusBarHideReasons;
	int _requestedStyle;
	BOOL _styleHasBeenRequested;
	float _statusBarWidth;
	UIView *_separatorView;
	BOOL _separatorHidden;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property(assign, nonatomic) id<UIStatusBarStyleDelegate> statusBarStyleDelegate;
@property(readonly, assign) Class superclass;
- (id)initWithCoder:(id)coder;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (BOOL)_isStatusBarHidden;
- (void)_layoutStatusBar:(id)bar;
- (void)dealloc;
- (void)loadView;
- (id)newFakeStatusBar;
- (id)newFakeStatusBarWithStyle:(int)style;
- (void)setStatusBarHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory;
- (void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;
- (void)statusBar:(id)bar didTriggerButtonType:(int)type withAction:(int)action;
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
- (void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;
- (void)updateStatusBarWithRequestedStyle:(int)requestedStyle animationFactory:(id)factory;
- (void)viewDidLayoutSubviews;
@end

