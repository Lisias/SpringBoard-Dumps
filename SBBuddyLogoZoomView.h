/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CALayer;

__attribute__((visibility("hidden")))
@interface SBBuddyLogoZoomView : XXUnknownSuperclass {
	CALayer *_contentLayer;
	id _animationCompleteBlock;
}
- (id)initWithFrame:(CGRect)frame;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)startAnimationWithCompletionBlock:(id)completionBlock;
@end

