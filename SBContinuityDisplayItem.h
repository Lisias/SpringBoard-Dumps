/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDisplayItem.h"

@class LSBestAppSuggestion;

__attribute__((visibility("hidden")))
@interface SBContinuityDisplayItem : SBDisplayItem {
	LSBestAppSuggestion *_appSuggestion;
}
@property(readonly, assign, nonatomic) LSBestAppSuggestion *appSuggestion;
- (id)initWithType:(id)type displayIdentifier:(id)identifier;
- (id)initWithType:(NSString *)type displayIdentifier:(id)identifier appSuggestion:(id)suggestion;
- (void)dealloc;
@end

