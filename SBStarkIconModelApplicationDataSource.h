/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBStarkSessionConfiguring;

__attribute__((visibility("hidden")))
@interface SBStarkIconModelApplicationDataSource : XXUnknownSuperclass <SBIconModelApplicationDataSource> {
	id<SBStarkSessionConfiguring> _configuration;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithConfiguration:(id)configuration;
- (id)allApplications;
- (int)appVisibilityOverrideForBundleIdentifier:(id)bundleIdentifier;
- (void)dealloc;
- (id)defaultIconState;
- (id)firstPageLeafIdentifiers;
- (BOOL)isNewsstandEnabled;
- (BOOL)isNewsstandSupported;
- (BOOL)updateAppIconVisibilityOverridesShowing:(id *)showing hiding:(id *)hiding;
@end
