/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWindow : XXUnknownSuperclass {
	SBRecycledViewsContainer *_recycledViewsContainerView;
	id<SBWindowLayoutStrategy> _layoutStrategy;
}
@property(readonly, retain, nonatomic) id<SBWindowLayoutStrategy> layoutStrategy;
+ (id)defaultLayoutStrategy;
+ (BOOL)sb_autorotates;
+ (BOOL)sb_disableStatusBarHeightChanges;
- (id)initWithFrame:(CGRect)frame;
- (id)initWithScreen:(id)screen debugName:(id)name;
- (id)initWithScreen:(id)screen debugName:(id)name rootViewController:(id)controller;
- (id)initWithScreen:(id)screen layoutStrategy:(id)strategy debugName:(id)name;
- (id)initWithScreen:(id)screen layoutStrategy:(id)strategy debugName:(id)name scene:(id)scene;
- (id)_initWithScreen:(id)screen layoutStrategy:(id)strategy debugName:(id)name rootViewController:(id)controller scene:(id)scene;
- (void)dealloc;
- (id)description;
- (void)handleStatusBarChangeFromHeight:(float)height toHeight:(float)height2;
- (id)recycledViewsContainer;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(float)manager;
- (void)setAutorotates:(BOOL)autorotates forceUpdateInterfaceOrientation:(BOOL)orientation;
@end

