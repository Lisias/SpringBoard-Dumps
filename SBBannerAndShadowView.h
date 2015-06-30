/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBUIBannerItemView;

__attribute__((visibility("hidden")))
@interface SBBannerAndShadowView : XXUnknownSuperclass {
	UIView<SBUIBannerItemView> *_banner;
	UIImageView *_shadow[5];
	CGRect _shadowFrame[5];
	CGSize _bannerSize;
	CGPoint _bannerOrigin;
	float _sideWidth;
	float _bottomHeight;
	BOOL _shadowsInPortraitWindow;
	UIView *_rollerContainer;
	UIImageView *_roller;
}
- (id)initWithBanner:(id)banner;
- (CGRect)_frameForBannerFrame:(CGRect)bannerFrame;
- (void)_layoutSubviews;
- (BOOL)_showsSideShadows;
- (id)banner;
- (void)clearRoller;
- (void)dealloc;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (void)moveShadowsToPortraitWindow:(id)portraitWindow fromOrientation:(int)orientation;
- (void)prepareRoller;
- (void)pullShadowsBack;
- (void)replaceBannerWithBanner:(id)banner;
- (void)setBannerFrame:(CGRect)frame;
- (void)setRollerProgress:(float)progress;
- (void)setShadowAlpha:(float)alpha;
- (CGSize)sizeThatFits:(CGSize)fits;
@end

