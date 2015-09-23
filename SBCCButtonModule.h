/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBCCButtonModule : XXUnknownSuperclass {
	BOOL _enabled;
	BOOL _inoperative;
	id<SBCCButtonModuleDelegate> _delegate;
}
@property(assign, nonatomic) id<SBCCButtonModuleDelegate> delegate;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(assign, nonatomic, getter=isInoperative) BOOL inoperative;
+ (id)displayName;
+ (BOOL)enabledByDefault;
+ (id)identifier;
+ (BOOL)isSupported:(int)supported;
- (void)_noteButtonStateDidChange;
- (void)_noteDisplayPropertiesDidChange;
- (BOOL)_toggleState;
- (void)_updateState;
- (void)activate;
- (id)aggdKey;
- (void)cooldown;
- (void)deactivate;
- (id)description;
- (id)displayName;
- (id)glyphImageForState:(int)state;
- (id)glyphImageForState:(int)state section:(int)section;
- (id)identifier;
- (BOOL)isRestricted;
- (int)state;
- (id)statusUpdate;
- (void)toggleState;
- (id)unavailableText;
- (void)warmup;
@end

