/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBOperation : XXUnknownSuperclass {
	id _block;
	NSString *_name;
	BOOL _hasRun;
}
@property(readonly, assign, nonatomic) NSString *name;
+ (id)operationWithBlock:(id)block name:(id)name;
- (id)initWithBlock:(id)block name:(id)name;
- (void)dealloc;
- (id)description;
- (void)execute;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
@end
