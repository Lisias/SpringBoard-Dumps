/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBDeviceLockKeyboard : UIKeyboard {
	SBDeviceLockViewWithKeyboard *_deviceLockView;
}
- (id)initWithFrame:(CGRect)frame deviceLockView:(id)view;
- (BOOL)canDismiss;
- (void)maximize;
- (void)minimize;
@end
