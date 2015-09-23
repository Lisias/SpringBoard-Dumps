/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkAlertWindow : SBAlertWindow {
	BSZeroingWeakReference *_starkWindowDelegate;
}
@property(assign, nonatomic) __weak id<SBStarkWindowDelegate> starkWindowDelegate;
+ (float)windowLevel;
- (void)dealloc;
- (void)pressesBegan:(id)began withEvent:(id)event;
- (void)pressesCancelled:(id)cancelled withEvent:(id)event;
- (void)pressesChanged:(id)changed withEvent:(id)event;
- (void)pressesEnded:(id)ended withEvent:(id)event;
@end

