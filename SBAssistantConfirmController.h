/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBAssistantConfirmController : XXUnknownSuperclass {
	SBAssistantConfirmView *_view;
	SAUIConfirmationOptions *_model;
	int _confirmTrigger;
}
- (id)initWithAceObject:(id)aceObject delegate:(id)delegate;
- (void)_cancelButtonHit:(id)hit;
- (void)_confirmButtonHit:(id)hit;
- (void)_sendCommandsAndDismiss:(id)dismiss stampingMostRecentSnippetWithCancel:(BOOL)cancel;
- (BOOL)_wantsStaticPresentation;
- (void)dealloc;
- (id)view;
@end

