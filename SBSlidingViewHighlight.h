/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

__attribute__((visibility("hidden")))
@interface SBSlidingViewHighlight : XXUnknownSuperclass {
	UIImageView *_leftHighlight;
	UIImageView *_rightHighlight;
	CGRect _notchRect;
}
+ (float)defaultHeight;
+ (id)highlightImage;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame notchRect:(CGRect)rect;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setNotchRect:(CGRect)rect;
@end

