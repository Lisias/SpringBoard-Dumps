/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSlideUpAppGrabberView : XXUnknownSuperclass <_SBFVibrantView> {
	UIEdgeInsets _hitTestEdgeInsets;
	UIView *_tintView;
	UIView *_backgroundView;
	SBLegibilityView *_legibilityView;
	SBSaturatedIconView *_saturatedIconView;
	UIImage *_grabberImage;
	BOOL _vibrancyAllowed;
	_SBFVibrantSettings *_vibrantSettings;
	id<SBResponderTouchDelegate> _delegate;
}
@property(readonly, copy) NSString *debugDescription;
@property(assign, nonatomic) id<SBResponderTouchDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) UIEdgeInsets hitTestEdgeInsets;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic, getter=isVibrancyAllowed) BOOL vibrancyAllowed;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings;
- (id)initWithAdditionalTopPadding:(BOOL)additionalTopPadding invertVerticalInsets:(BOOL)insets;
- (id)_lazyLegibilityView;
- (BOOL)_shouldUseVibrancy;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
- (void)setAppStyleGrabberImage:(id)image;
- (void)setBackgroundColor:(id)color;
- (void)setBackgroundView:(id)view;
- (void)setGrabberImage:(id)image;
- (void)setGrabberImageFromApp:(id)app;
- (void)setGrabberImageFromApp:(id)app withIconFormat:(int)iconFormat;
- (void)setStrength:(float)strength;
- (CGSize)sizeThatFits:(CGSize)fits;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)updateForChangedSettings:(id)changedSettings;
@end

