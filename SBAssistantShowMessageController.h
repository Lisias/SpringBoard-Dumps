/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAssistantShowMessageController : XXUnknownSuperclass {
	NSString *_text;
	AFUIUtteranceView *_view;
}
@property(retain, nonatomic) NSString *text;
+ (id)utteranceWithText:(id)text;
- (id)initWithAceObject:(id)aceObject delegate:(id)delegate;
- (void)dealloc;
- (id)speakableTextForLanguageCode:(id)languageCode;
- (id)view;
@end

