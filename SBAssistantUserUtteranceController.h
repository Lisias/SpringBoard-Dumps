/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AFUIUtteranceViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSString, AFUIUserUtteranceView, SBAssistantUserUtterance;

@interface SBAssistantUserUtteranceController : XXUnknownSuperclass <AFUIUtteranceViewDelegate> {
	SBAssistantUserUtterance *_utterance;
	NSString *_preCorrectionText;
	CGSize _currentTextSize;
	BOOL _textChanged;
	BOOL _correctable;
	AFUIUserUtteranceView *_view;
}
+ (id)controllerWithUtterance:(id)utterance isCorrectable:(BOOL)correctable delegate:(id)delegate;
- (id)initWithUtterance:(id)utterance isCorrectable:(BOOL)correctable delegate:(id)delegate;
- (void)_checkUpdatedSizingForUtteranceView:(id)utteranceView;
- (BOOL)_isServerResponse;
- (void)_updateViewWithCurrentUtterance;
- (id)correctionIdentifier;
- (void)dealloc;
- (id)description;
- (BOOL)isCorrectable;
- (void)setIsCorrectable:(BOOL)correctable;
- (id)text;
- (void)updateWithUtterance:(id)utterance;
- (void)utteranceViewTextDidChange:(id)utteranceViewText;
- (void)utteranceViewTextDidFinishCorrecting:(id)utteranceViewText;
- (BOOL)utteranceViewTextShouldPreventCorrection:(id)utteranceViewText;
- (void)utteranceViewTextWillBeginCorrecting:(id)utteranceViewText;
- (id)view;
@end

