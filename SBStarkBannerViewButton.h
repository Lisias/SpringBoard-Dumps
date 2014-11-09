/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIView, UIColor, UILabel, UIImageView, UIImage;

__attribute__((visibility("hidden")))
@interface SBStarkBannerViewButton : XXUnknownSuperclass {
	UILabel *_textLabel;
	UIColor *_unselectedTextColor;
	UIColor *_selectedTextColor;
	UIImage *_unselectedImage;
	UIImage *_selectedImage;
	UIView *_highlightView;
	UIImageView *_imageView;
	UIColor *_highlightColor;
}
@property(retain, nonatomic) UIColor *highlightColor;
@property(retain, nonatomic) UIImage *selectedImage;
@property(retain, nonatomic) UIColor *selectedTextColor;
@property(retain, nonatomic) UILabel *textLabel;
@property(retain, nonatomic) UIImage *unselectedImage;
@property(retain, nonatomic) UIColor *unselectedTextColor;
- (id)initWithFrame:(CGRect)frame;
- (void)dealloc;
- (void)layoutSubviews;
@end

