/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"
#import "UITextFieldDelegate.h"


@interface SBAlertInputView : SBSlidingAlertDisplay <UITextFieldDelegate> {
	UITextField *_inputTextField;
	UIKeyboard *_keyboard;
	SBTextDisplayView *_textDisplay;
	UIScrollView *_scroller;
	UINavigationBar *_bar;
	UIView *_sendingFieldView;
	UIPushButton *_button;
	UIView *_buttonBorderView;
	UIView *_textBorderView;
	BOOL _digitsOnly;
	id _delegate;
	int _minLength;
	int _maxLength;
}
@property(retain) UIPushButton *button;
@property(retain) UIView *buttonBorderView;
@property(retain) UITextField *inputTextField;
@property(retain) UIKeyboard *keyboard;
@property(retain) UIView *sendingFieldView;
@property(retain) UIView *textBorderView;
+ (id)newBottomBarForInstance:(id)instance;
+ (id)newTopBarForInstance:(id)instance;
- (id)initWithFrame:(CGRect)frame;
- (void)_adjustScrollerFrame;
- (CGRect)_calcButtonFrame;
- (CGRect)_calcInputTextFieldFrame;
- (CGRect)_calcKeyboardFrame;
- (CGRect)_calcSendingFieldFrame;
- (CGRect)_calcTextBorderViewFrame;
- (CGRect)_calcbottomBarFrame;
- (void)_sendClicked:(id)clicked;
- (void)_setNavigationBar:(id)bar;
- (void)alertDisplayWillBecomeVisible;
- (void)dealloc;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
- (void)sbAlertInputViewCancelClicked:(id)clicked;
- (void)sbAlertInputViewSendClicked:(id)clicked;
- (void)setDelegate:(id)delegate;
- (void)setDigitsOnly:(BOOL)only;
- (void)setMaxLength:(int)length;
- (void)setMiddleContentAlpha:(float)alpha;
- (void)setMinLength:(int)length;
- (void)setText:(id)text;
- (BOOL)showsDesktopImage;
- (id)textField;
- (BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
@end

