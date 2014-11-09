/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconAccessoryView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBIconAccessoryImage, SBDarkeningImageView;

__attribute__((visibility("hidden")))
@interface SBIconBadgeView : XXUnknownSuperclass <SBIconAccessoryView> {
	NSString *_text;
	SBDarkeningImageView *_incomingTextView;
	BOOL _animating;
	id _queuedAnimation;
	BOOL _displayingAccessory;
	SBIconAccessoryImage *_backgroundImage;
	SBDarkeningImageView *_backgroundView;
	SBIconAccessoryImage *_textImage;
	SBDarkeningImageView *_textView;
}
+ (id)_checkoutBackgroundImage;
+ (id)_checkoutImageForText:(id)text highlighted:(BOOL)highlighted;
+ (id)_createImageForText:(id)text highlighted:(BOOL)highlighted;
+ (float)_maxTextWidth;
+ (CGPoint)_overhang;
+ (id)_textFont;
+ (CGPoint)_textOffset;
+ (float)_textPadding;
+ (id)checkoutAccessoryImagesForIcon:(id)icon location:(int)location;
- (id)init;
- (void)_clearText;
- (void)_configureAnimatedForText:(id)text highlighted:(BOOL)highlighted withPreparation:(id)preparation animation:(id)animation completion:(id)completion;
- (void)_crossfadeToTextImage:(id)textImage withPreparation:(id)preparation animation:(id)animation completion:(id)completion;
- (void)_resizeForTextImage:(id)textImage;
- (void)_zoomInWithTextImage:(id)textImage preparation:(id)preparation animation:(id)animation completion:(id)completion;
- (void)_zoomOutWithPreparation:(id)preparation animation:(id)animation completion:(id)completion;
- (CGPoint)accessoryOriginForIconBounds:(CGRect)iconBounds;
- (void)configureAnimatedForIcon:(id)icon location:(int)location highlighted:(BOOL)highlighted withPreparation:(id)preparation animation:(id)animation completion:(id)completion;
- (void)configureForIcon:(id)icon location:(int)location highlighted:(BOOL)highlighted;
- (void)dealloc;
- (BOOL)displayingAccessory;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessoryBrightness:(float)brightness;
@end

