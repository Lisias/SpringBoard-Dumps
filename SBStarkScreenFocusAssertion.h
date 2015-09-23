/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkScreenFocusAssertion : XXUnknownSuperclass {
	NSString *_name;
	int _type;
	float _priority;
	UIWindow *_window;
	NSString *_bundleID;
	int _pid;
}
@property(readonly, copy, nonatomic) NSString *bundleID;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, assign, nonatomic) int pid;
@property(readonly, assign, nonatomic) float priority;
@property(readonly, assign, nonatomic) int type;
@property(readonly, assign, nonatomic) UIWindow *window;
- (id)initWithName:(id)name type:(int)type priority:(float)priority window:(id)window application:(id)application pid:(int)pid;
- (void)dealloc;
- (id)description;
@end

