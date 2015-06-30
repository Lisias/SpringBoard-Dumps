/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UITextFieldDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBFolderView : XXUnknownSuperclass <UITextFieldDelegate> {
	SBFolder *_folder;
	UILabel *_label;
	SBFolderTextField *_textField;
	SBFolderIconListView *_iconListView;
	UIView *_backgroundView;
	BOOL _isEditing;
	UIImageView *_shadows[12];
	unsigned _rows;
	XXStruct_9ihRqB _notchInfo;
	int _orientation;
}
- (id)initWithFrame:(CGRect)frame;
- (void)_createInitialIconViews;
- (float)_labelHorizontalInset;
- (float)_labelVerticalInset;
- (void)_placeBackgroundView;
- (void)_placeBars;
- (void)_placeIconListView;
- (void)_placeLabelAndTextField;
- (void)_placeShadow:(int)shadow;
- (void)_placeShadows;
- (void)_setupBackgroundView;
- (void)_setupFolderTitleLabel;
- (void)_setupNavigationBar;
- (id)_shadowForPosition:(int)position;
- (CGSize)_sizeForCurrentConfiguration;
- (BOOL)canEditTitle;
- (void)cleanUpAfterOrientationChange;
- (void)dealloc;
- (void)didDropIconView;
- (id)editTitleField;
- (void)enableShiftForFolderTextFieldAfterBeginEditing;
- (id)iconListView;
- (BOOL)isScrolling;
- (Class)notchViewClass;
- (void)noteGrabbedIconLocation:(CGPoint)location;
- (void)noteHasGrabbedIcon:(id)icon;
- (void)prepareToDropIconView:(id)dropIconView targetFolderBounds:(CGRect *)bounds;
- (void)prepareToSetOrientation:(int)setOrientation;
- (CGRect)rectForNotchLinen;
- (unsigned)rows;
- (id)scrollOffset;
- (void)setBackgroundAlpha:(float)alpha;
- (void)setFolder:(id)folder;
- (void)setFolderName:(id)name;
- (void)setIconListView:(id)view;
- (void)setIsEditing:(BOOL)editing animated:(BOOL)animated;
- (void)setRows:(unsigned)rows notchInfo:(XXStruct_9ihRqB)info orientation:(int)orientation;
- (void)setScrollOffset:(id)offset;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
- (NSRange)textField:(id)field willChangeSelectionFromCharacterRange:(NSRange)characterRange toCharacterRange:(NSRange)characterRange3;
- (void)textFieldDidBeginEditing:(id)textField;
- (void)textFieldDidEndEditing:(id)textField;
- (BOOL)textFieldShouldClear:(id)textField;
- (BOOL)textFieldShouldReturn:(id)textField;
@end

