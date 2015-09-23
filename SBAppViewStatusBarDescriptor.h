/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBAppViewStatusBarDescriptor : XXUnknownSuperclass {
	BOOL _forceHidden;
	NSString *_breadcrumbTitle;
	NSString *_breadcrumbSecondaryTitle;
}
@property(copy, nonatomic) NSString *breadcrumbSecondaryTitle;
@property(copy, nonatomic) NSString *breadcrumbTitle;
@property(assign, nonatomic, getter=isForcedHidden) BOOL forceHidden;
+ (id)statusBarDescriptorWithForceHidden:(BOOL)forceHidden;
- (id)initWithForceHidden:(BOOL)forceHidden;
- (void)dealloc;
- (id)debugDescription;
@end

