/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDeviceLockKeypad.h"
#import "SpringBoard-Structs.h"


@interface SBDeviceLockKeypadWildcat : SBDeviceLockKeypad {
	UIView *_glowView;
}
+ (id)keypadImage;
+ (id)pressedImage;
- (id)initWithFrame:(CGRect)frame;
- (CGRect)_rectForKey:(int)key;
- (float)_yFudge;
- (BOOL)cancelKeyChar;
- (void)dealloc;
- (BOOL)deleteKeyChar;
- (void)setHighlighted:(BOOL)highlighted;
@end

