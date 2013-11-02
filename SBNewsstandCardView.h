/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIImageView, NSTimer;

__attribute__((visibility("hidden")))
@interface SBNewsstandCardView : XXUnknownSuperclass {
	BOOL _skewed;
	BOOL _highlighted;
	BOOL _touchOnCard;
	UIImageView *_cardView;
	UIImageView *_textView;
	UIImageView *_overlayView;
	NSTimer *_delayedUnhighlightTimer;
}
+ (void)_fetchAndCacheImagesIfNecessary;
+ (void)_fetchAndCacheImagesIfNecessary:(id *)necessary outCardTextImage:(id *)image;
+ (void)_removeCachedLocalizedImages;
+ (void)load;
+ (void)setupCache;
- (id)init;
- (void)_delayedUnhighlight;
- (void)dealloc;
- (id)overlayImage;
- (void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
- (void)setSkewed:(BOOL)skewed;
- (float)shadowPadding;
- (CATransform3D)skewTransform;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
@end
