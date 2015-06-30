/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWorkspaceEvent : XXUnknownSuperclass {
	NSString *_label;
	id _handler;
	NSArray *_callStackSymbols;
}
@property(copy, nonatomic) NSArray *callStackSymbols;
@property(copy, nonatomic) id handler;
@property(copy, nonatomic) NSString *label;
+ (id)eventWithLabel:(id)label handler:(id)handler;
- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)execute;
- (BOOL)isEqualToEvent:(id)event;
@end
