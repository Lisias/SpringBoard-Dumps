/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import "UIKeyInput.h"

@class NSString, UIPasscodeField, UITextInputTraits;

@interface SBDeviceLockEntryField : UIView <UIKeyInput> {
	int _style;
	int _interfaceOrientation;
	UIPasscodeField *_passcodeField;
	UITextInputTraits *_textInputTraits;
	CFCharacterSetRef _numericTrimmingSet;
	id _delegate;
}
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int interfaceOrientation;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy, nonatomic) NSString *stringValue;
- (id)initWithStyle:(int)style interfaceOrientation:(int)orientation;
- (CGSize)_fieldSizeForCurrentDevice;
- (void)_layoutForCurrentDevice;
- (void)appendString:(id)string;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)deleteBackward;
- (void)deleteLastCharacter;
- (void)forwardInvocation:(id)invocation;
- (BOOL)hasText;
- (void)insertText:(id)text;
- (BOOL)isFirstResponder;
- (id)methodSignatureForSelector:(SEL)selector;
- (id)passcodeField;
- (BOOL)passcodeField:(id)field shouldInsertText:(id)text;
- (void)passcodeFieldDidAcceptEntry:(id)passcodeField;
- (void)passcodeFieldTextDidChange:(id)passcodeFieldText;
- (BOOL)respondsToSelector:(SEL)selector;
- (void)setText:(id)text;
- (id)text;
- (id)textInputTraits;
@end

