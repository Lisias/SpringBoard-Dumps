/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBDeviceLockViewWithKeyboard;

@interface SBDeviceLockKeyboard : XXUnknownSuperclass {
	SBDeviceLockViewWithKeyboard *_deviceLockView;
}
- (id)initWithFrame:(CGRect)frame deviceLockView:(id)view;
- (BOOL)canDismiss;
- (BOOL)isMinimized;
- (void)maximize;
- (void)minimize;
- (void)setMinimized:(BOOL)minimized;
@end

