/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <TelephonyUI/TPPhonePad.h>
#import "SpringBoard-Structs.h"

@class UIPushButton;

@interface SBDeviceLockKeypad : TPPhonePad {
	UIPushButton *_deleteButton;
	UIPushButton *_cancelButton;
	BOOL _deleteEnabled;
	BOOL _playKeyboardClicks;
}
@property(readonly, assign, nonatomic) BOOL cancelKeyChar;
@property(assign, nonatomic, getter=isDeleteEnabled) BOOL deleteEnabled;
@property(readonly, assign, nonatomic) BOOL deleteKeyChar;
@property(readonly, assign, nonatomic) BOOL emergencyKeyChar;
@property(assign, nonatomic) BOOL playsKeyboardClicks;
@property(assign, nonatomic) BOOL showsEmergencyCallButton;
+ (CGSize)defaultSize;
+ (void)flushPressedImage;
+ (id)keypadImage;
+ (id)pressedImage;
- (id)initWithDefaultSize;
- (id)initWithFrame:(CGRect)frame;
- (id)_keypadImage;
- (id)_pressedImage;
- (void)dealloc;
- (void)hiddenFromView;
- (void)willBecomeVisible;
@end

