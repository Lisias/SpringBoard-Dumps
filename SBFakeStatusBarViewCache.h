/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBFakeStatusBarViewCache : XXUnknownSuperclass {
	NSMutableDictionary *_cachedStatusBarQueues;
}
- (id)init;
- (id)barForKey:(id)key withGenerationBlockIfNecessary:(id)generationBlockIfNecessary;
- (void)dealloc;
- (void)recycleBar:(id)bar forKey:(id)key;
@end
