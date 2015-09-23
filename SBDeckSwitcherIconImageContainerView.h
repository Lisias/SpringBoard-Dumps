/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBDeckSwitcherIconImageContainerView : XXUnknownSuperclass {
	SBDisplayItem *_displayItem;
	SBIcon *_icon;
	UIImageView *_imageView;
}
@property(readonly, retain, nonatomic) SBDisplayItem *displayItem;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) SBIcon *icon;
@property(retain, nonatomic) UIImageView *imageView;
- (id)initWithDisplayItem:(id)displayItem;
- (void)_configureIconImageView:(id)view;
- (void)_crossfadeToIconImage:(id)iconImage;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateIcon;
@end

