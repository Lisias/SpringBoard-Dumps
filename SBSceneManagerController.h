/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSceneManagerController : XXUnknownSuperclass <FBSceneManagerDelegate, FBSceneManagerObserver, FBProcessManagerObserver, FBWorkspaceDelegate, FBDisplayManagerObserver, SBSceneManagerDelegate> {
	FBSceneManager *_sceneManager;
	NSMutableDictionary *_displayToSceneManagers;
	UIApplicationSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)mainDisplaySceneManager;
+ (id)sharedInstance;
- (id)init;
- (id)_clientSettingsDiffInspector;
- (void)_destroySceneManagerIfNecessary:(id)necessary;
- (void)_handleUnhandledBackButtonForScene:(id)scene;
- (id)_sceneManagerForDisplay:(id)display creatingIfNecessary:(BOOL)necessary;
- (void)_updateExternalDisplayScenesIfNecessaryForMainDisplayScene:(id)mainDisplayScene forTransitionToState:(unsigned)state;
- (void)dealloc;
- (void)displayManager:(id)manager didConnectDisplay:(id)display;
- (void)displayManager:(id)manager didDisconnectDisplay:(id)display;
- (void)displayManager:(id)manager willConnectDisplay:(id)display;
- (void)processManager:(id)manager didAddProcess:(id)process;
- (void)processManager:(id)manager didRemoveProcess:(id)process;
- (void)sceneManager:(id)manager deviceOrientationChangedTo:(int)to;
- (void)sceneManager:(id)manager didCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager didCreateScene:(id)scene withClient:(id)client;
- (void)sceneManager:(id)manager didDestroyScene:(id)scene;
- (void)sceneManager:(id)manager scene:(id)scene didReceiveActions:(id)actions;
- (void)sceneManager:(id)manager scene:(id)scene didUpdateClientSettingsWithDiff:(id)diff oldClientSettings:(id)settings transitionContext:(id)context;
- (void)sceneManager:(id)manager scene:(id)scene willTransitionToState:(unsigned)state;
- (void)sceneManager:(id)manager willCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
- (void)sceneManager:(id)manager willDestroyScene:(id)scene;
- (void)sceneManager:(id)manager willUpdateScene:(id)scene withSettings:(id)settings transitionContext:(id)context;
- (id)sceneManagerForDisplay:(id)display;
- (void)workspace:(id)workspace didReceiveCreateSceneRequestWithInitialClientSettings:(id)initialClientSettings withCompletion:(id)completion;
- (void)workspace:(id)workspace didReceiveDestroySceneRequestForIdentifier:(id)identifier withCompletion:(id)completion;
@end

