/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBDeviceLockTitleWildcatKeyboard : SBDeviceLockTitle {
	BOOL _highlighted;
	UILabel *_titleLabel;
	UILabel *_subtitleLabel;
}
- (id)_backgroundImage;
- (id)_protectedInitWithStyle:(int)style interfaceOrientation:(int)orientation;
- (void)blinkSubtitle;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSubtitle:(id)subtitle;
- (void)setTitle:(id)title;
- (id)subtitle;
- (id)title;
@end
