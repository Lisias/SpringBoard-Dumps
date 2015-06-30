/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBNotificationsClearButton : XXUnknownSuperclass {
	NSString *_title;
	UIImageView *_circleImageView;
	UIImageView *_xImageView;
	UIImageView *_compositeCircleXImageView;
	NSMutableArray *_glyphImageViews;
	unsigned _animatingTransitionCount;
	int _graphicsQuality;
	int _clearButtonState;
}
@property(readonly, assign, nonatomic) int clearButtonState;
@property(readonly, assign, nonatomic) int graphicsQuality;
+ (id)_circleImageWithGraphicsQuality:(int)graphicsQuality;
+ (id)_xImageWithGraphicsQuality:(int)graphicsQuality;
+ (id)compositeCircleXImageWithGraphicsQuality:(int)graphicsQuality;
- (id)initWithTitle:(id)title graphicsQuality:(int)quality;
- (CGRect)_circleBoundsForState:(int)state;
- (CGRect)_circleFrameForState:(int)state;
- (id)_circleImage;
- (id)_glyphFramesWithCircleFrame:(CGRect)circleFrame forState:(int)state;
- (id)_glyphImagesFromAttributedString:(id)attributedString;
- (void)_layoutSubviewsForState:(int)state;
- (CGRect)_unrolledCircleBounds;
- (CGRect)_xFrameWithCircleFrame:(CGRect)circleFrame forState:(int)state;
- (id)_xImage;
- (id)compositeCircleXImage;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
- (id)hitTest:(CGPoint)test withEvent:(id)event;
- (void)layoutSubviews;
- (void)setState:(int)state animated:(BOOL)animated;
- (CGSize)sizeThatFits:(CGSize)fits;
@end
