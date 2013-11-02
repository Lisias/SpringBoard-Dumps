/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UILabel;

@interface SBPasscodeTextField : XXUnknownSuperclass {
	float _letterSpacing;
	BOOL _usesLargeClearButton;
	UILabel *_hiddenLabel;
}
@property(assign, nonatomic) float letterSpacing;
@property(assign, nonatomic) BOOL usesLargeClearButton;
- (void)_endedEditing;
- (void)_handleKeyEvent:(GSEventRef)event;
- (id)_style;
- (void)attachFieldEditor:(id)editor;
- (BOOL)becomeFirstResponder;
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;
- (id)createTextLabelWithTextColor:(id)textColor;
- (void)dealloc;
- (BOOL)resignFirstResponder;
@end

