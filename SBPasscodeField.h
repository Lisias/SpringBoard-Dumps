/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIPasscodeField.h>


@interface SBPasscodeField : UIPasscodeField {
	float _width;
	BOOL _isAlphanumericField;
}
- (void)_updateFields;
- (void)adjustOKButtonFrame;
- (id)entryField;
- (id)okButton;
- (void)setButtonWidth:(float)width;
- (void)setIsAlphanumericField:(BOOL)field;
- (void)textFieldDidResignFirstResponder:(id)textField;
@end

