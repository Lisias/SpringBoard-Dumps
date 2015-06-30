/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBDeviceLockEntryField : XXUnknownSuperclass {
	int _style;
	int _interfaceOrientation;
	UIPasscodeField *_passcodeField;
	UITextInputTraits *_textInputTraits;
	CFCharacterSetRef _numericTrimmingSet;
	BOOL _highlighted;
	id _delegate;
}
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(assign, nonatomic) int interfaceOrientation;
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;
@property(copy, nonatomic) NSString *stringValue;
- (id)initWithStyle:(int)style interfaceOrientation:(int)orientation;
- (id)_backgroundImage;
- (CGSize)_fieldSizeForCurrentDevice;
- (void)_handleKeyEvent:(GSEventRef)event;
- (void)_layoutForCurrentDevice;
- (void)appendString:(id)string;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)deleteLastCharacter;
- (BOOL)isFirstResponder;
- (id)methodSignatureForSelector:(SEL)selector;
- (id)passcodeField;
- (BOOL)passcodeField:(id)field shouldInsertText:(id)text;
- (void)passcodeFieldDidAcceptEntry:(id)passcodeField;
- (void)passcodeFieldTextDidChange:(id)passcodeFieldText;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)textInputTraits;
@end

