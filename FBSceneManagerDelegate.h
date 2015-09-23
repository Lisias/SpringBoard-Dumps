/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol FBSceneManagerDelegate <FBSceneManagerObserver>
@optional
- (id)sceneManager:(id)manager createDefaultTransitionContextForScene:(id)scene;
- (int)sceneManager:(id)manager hostingPolicyForScene:(id)scene;
@required
- (void)sceneManager:(id)manager scene:(id)scene didReceiveActions:(id)actions;
- (void)sceneManager:(id)manager scene:(id)scene didUpdateClientSettingsWithDiff:(id)diff oldClientSettings:(id)settings transitionContext:(id)context;
@end

