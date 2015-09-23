/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAppResizingPlaceholderView : XXUnknownSuperclass {
	BOOL _creatingBlur;
	SBSceneViewAppIconView *_appIconView;
	SBAppResizingBlurContainerView *_blurContainerView;
	UIView *_blurredAppSnapshotView;
}
@property(retain, nonatomic) SBSceneViewAppIconView *appIconView;
@property(retain, nonatomic) SBAppResizingBlurContainerView *blurContainerView;
@property(retain, nonatomic) UIView *blurredAppSnapshotView;
@property(assign, nonatomic, getter=isCreatingBlur) BOOL creatingBlur;
- (id)initWithAppView:(id)appView;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(CGRect)frame;
- (void)dealloc;
- (void)generateBlurredAppSnapshotWithCompletionHandler:(id)completionHandler;
- (void)layoutSubviews;
@end

