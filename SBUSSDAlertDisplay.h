/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UITextFieldDelegate.h"
#import "SBAlertDisplay.h"

@class UIScrollView, UIActivityIndicatorView, SBTextDisplayView, UITextField, TPBottomButtonBar, UITransitionView;

@interface SBUSSDAlertDisplay : SBAlertDisplay <UITextFieldDelegate> {
	TPBottomButtonBar *_responseBar;
	UIView *_notifyView;
	UIView *_replyView;
	UITransitionView *_transitionView;
	UIScrollView *_scroller;
	SBTextDisplayView *_contentView;
	SBTextDisplayView *_charsRemainingView;
	UIActivityIndicatorView *_progressIndicator;
	UITextField *_responseField;
	BOOL _allowsResponse;
}
- (id)initWithFrame:(CGRect)frame;
- (void)_cancelClicked;
- (id)_notifyView;
- (void)_okayClicked;
- (void)_replyClicked;
- (id)_replyView;
- (void)_setupResponseBar;
- (void)_textChanged:(id)changed;
- (void)_updateCharsRemaining;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)alertStringAvailable:(id)available;
- (BOOL)allowsResponse;
- (void)dealloc;
- (void)displayString:(id)string centerVertically:(BOOL)vertically;
- (void)setAllowsResponse:(BOOL)response;
- (BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
@end

