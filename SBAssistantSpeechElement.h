/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAssistantSpeechElement : XXUnknownSuperclass {
	NSString *_string;
	NSString *_refIdentifier;
	BOOL _autoStartListeningWhenComplete;
}
@property(assign, nonatomic) BOOL autoStartListeningWhenComplete;
@property(copy, nonatomic) NSString *refIdentifier;
@property(copy, nonatomic) NSString *string;
+ (id)speechElementForString:(id)string listenFollowingSpeech:(BOOL)speech;
- (void)dealloc;
- (id)description;
@end
