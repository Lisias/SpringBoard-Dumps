/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UITextFieldDelegate.h"
#import <UIKit/UIView.h>


@interface SBFolderView : UIView <UITextFieldDelegate> {
	SBFolder *_folder;
	SBFolderTitleLabel *_label;
	SBFolderTextField *_textField;
	SBFolderIconListView *_iconListView;
	BOOL _isEditing;
	UIImageView *_shadows[10];
	unsigned _rows;
	XXStruct_9ihRqB _notchInfo;
	int _orientation;
}
+ (CGSize)boundsSizeForRows:(unsigned)rows orientation:(int)orientation;
+ (CGRect)linenNotchRectForRows:(unsigned)rows orientation:(int)orientation notchInfo:(XXStruct_9ihRqB)info;
+ (CGRect)linenRectForRows:(unsigned)rows orientation:(int)orientation;
- (id)initWithRows:(unsigned)rows notchInfo:(XXStruct_9ihRqB)info orientation:(int)orientation;
- (void)_placeShadow:(int)shadow;
- (void)_placeShadows;
- (id)_shadowForPosition:(int)position;
- (void)dealloc;
- (id)editTitleField;
- (void)enableShiftForFolderTextFieldAfterBeginEditing;
- (id)iconListView;
- (CGRect)rectForNotchLinen;
- (unsigned)rows;
- (void)setBackgroundAlpha:(float)alpha;
- (void)setFolder:(id)folder;
- (void)setFolderName:(id)name;
- (void)setIconListView:(id)view;
- (void)setIsEditing:(BOOL)editing animated:(BOOL)animated;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
- (NSRange)textField:(id)field willChangeSelectionFromCharacterRange:(NSRange)characterRange toCharacterRange:(NSRange)characterRange3;
- (void)textFieldDidBeginEditing:(id)textField;
- (void)textFieldDidEndEditing:(id)textField;
- (BOOL)textFieldShouldClear:(id)textField;
- (BOOL)textFieldShouldReturn:(id)textField;
@end

