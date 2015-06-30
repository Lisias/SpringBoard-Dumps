/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBAssistantUserUtterance : XXUnknownSuperclass {
	NSMutableArray *_phrases;
	NSArray *_originalPhrases;
	id _correctionIdentifier;
	BOOL _openToInterpretation;
}
+ (id)utteranceWithString:(id)string correctionIdentifier:(id)identifier;
- (id)init;
- (id)initWithPhrases:(id)phrases correctionIdentifier:(id)identifier;
- (id)initWithString:(id)string correctionIdentifier:(id)identifier;
- (id)correctionIdentifier;
- (void)dealloc;
- (id)description;
- (BOOL)openToInterpretation;
- (id)originalPhrases;
- (id)phrases;
- (id)recursiveDescription;
- (id)text;
@end

