/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBGestureViewVendor : XXUnknownSuperclass {
	NSCache *m_cache;
}
+ (id)sharedInstance;
- (id)init;
- (void)clearCacheForApp:(id)app reason:(id)reason;
- (void)clearCacheForReason:(id)reason;
- (void)dealloc;
- (void)maskViewIfNeeded:(id)needed gestureType:(int)type viewType:(int)type3 contextHostViewRequester:(id)requester app:(id)app;
- (id)viewForApp:(id)app gestureType:(int)type includeStatusBar:(BOOL)bar;
@end

