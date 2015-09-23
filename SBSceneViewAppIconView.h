/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSceneViewAppIconView : XXUnknownSuperclass {
	BOOL _showsAppIconBorder;
	SBIconImageView *_imageView;
	UILabel *_label;
	UIView *_iconBorderView;
}
@property(retain, nonatomic) UIView *iconBorderView;
@property(readonly, assign, nonatomic) SBIconImageView *imageView;
@property(readonly, assign, nonatomic) UILabel *label;
@property(assign, nonatomic) BOOL showsAppIconBorder;
- (id)initWithIcon:(id)icon;
- (void)dealloc;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)fits;
@end

