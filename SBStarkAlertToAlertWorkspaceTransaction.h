/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction {
	BOOL _activationTriggeredFromStark;
	SBAlert *_activatingAlert;
	SBAlert *_deactivatingAlert;
}
- (id)initWithTransitionRequest:(id)transitionRequest;
- (void)_begin;
- (void)dealloc;
- (id)debugDescription;
@end

