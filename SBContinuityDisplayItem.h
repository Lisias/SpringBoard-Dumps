/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBContinuityDisplayItem : SBDisplayItem {
	SBBestAppSuggestion *_appSuggestion;
}
@property(readonly, retain, nonatomic) SBBestAppSuggestion *appSuggestion;
- (id)initWithType:(id)type displayIdentifier:(id)identifier;
- (id)initWithType:(NSString *)type displayIdentifier:(id)identifier appSuggestion:(id)suggestion;
- (void)dealloc;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
@end

