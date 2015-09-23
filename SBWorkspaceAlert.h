/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWorkspaceAlert : SBWorkspaceEntity {
	SBAlert *_alert;
}
@property(retain, nonatomic) SBAlert *alert;
@property(readonly, retain, nonatomic) Class alertClass;
+ (id)entityForAlert:(id)alert;
- (id)initWithAlert:(id)alert;
- (id)_generator;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (BOOL)isAlertEntity;
- (id)representedDisplay;
- (BOOL)representsAlertOfClass:(Class)aClass;
@end

