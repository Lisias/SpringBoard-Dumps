/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBMainScreenApplicationSceneTransactionObserver.h"
#import "FBSynchronizedTransactionDelegate.h"
#import "SBStarkWorkspaceTransaction.h"


__attribute__((visibility("hidden")))
@interface SBStarkToAppWorkspaceTransaction : SBStarkWorkspaceTransaction <FBSynchronizedTransactionDelegate, SBMainScreenApplicationSceneTransactionObserver> {
	SBSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;
	SBSceneManager *_sceneManager;
	SBApplication *_toApp;
	NSString *_reasonToPendClearingActivationSettings;
	NSSet *_scenesToBackground;
	BOOL _fromAssistant;
	FBSDisplay *_starkDisplay;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(readonly, assign, nonatomic) SBApplication *toApp;
- (id)initWithMainScreenAlertManager:(id)mainScreenAlertManager starkScreenController:(id)controller to:(id)to;
- (void)_begin;
- (void)_didComplete;
- (void)_fixupSettingsAndCommit;
- (BOOL)_shouldDisallowSuspension;
- (void)dealloc;
- (void)mainScreenApplicationSceneDidCommit:(id)mainScreenApplicationScene;
- (void)mainScreenApplicationSceneWillCommit:(id)mainScreenApplicationScene;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)completed;
- (void)mainScreenApplicationsDidCommitSceneUpdates:(id)mainScreenApplications;
- (void)synchronizedTransaction:(id)transaction didCommitSynchronizedTransactions:(id)transactions;
- (void)synchronizedTransaction:(id)transaction willCommitSynchronizedTransactions:(id)transactions;
- (void)synchronizedTransactionReadyToCommit:(id)commit;
@end
