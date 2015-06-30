/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDeviceLockKeypad.h"
#import "SpringBoard-Structs.h"


@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad {
	UIButton *_emergencyCallButton;
	UIButton *_poundButton;
	UIImage *_deleteIcon;
}
+ (id)keypadImage;
+ (id)pressedImage;
- (id)initWithFrame:(CGRect)frame;
- (void)_updateCancelAndDeleteButtons;
- (float)_yFudge;
- (BOOL)cancelKeyChar;
- (void)dealloc;
- (BOOL)deleteKeyChar;
- (BOOL)emergencyKeyChar;
- (void)setDeleteEnabled:(BOOL)enabled;
- (void)setShowsEmergencyCallButton:(BOOL)button;
- (BOOL)showsEmergencyCallButton;
@end

