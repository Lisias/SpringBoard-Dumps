/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFWallpaperViewLegibilityObserver.h"
#import "SBFWallpaperViewInternalObserver.h"
#import "SpringBoard-Structs.h"
#import "SBUIActiveOrientationObserver.h"
#import "UIWindowDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBWallpaperController : XXUnknownSuperclass <SBFWallpaperViewLegibilityObserver, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, UIWindowDelegate> {
	UIWindow *_wallpaperWindow;
	UIView *_wallpaperContainerView;
	int _orientation;
	SBFWallpaperView *_lockscreenWallpaperView;
	SBFWallpaperView *_homescreenWallpaperView;
	SBFWallpaperView *_sharedWallpaperView;
	NSHashTable *_lockscreenObservers;
	NSHashTable *_homescreenObservers;
	XXStruct_Dov64B _lockscreenPriorityInfo[3];
	XXStruct_Dov64B _homescreenPriorityInfo[7];
	XXStruct_S5WqmA _lockscreenStyleTransitionState;
	XXStruct_S5WqmA _homescreenStyleTransitionState;
	SBWallpaperEffectView *_lockscreenEffectView;
	SBWallpaperEffectView *_homescreenEffectView;
	NSMutableSet *_suspendColorSamplingReasons;
	NSMutableSet *_suspendWallpaperAnimationReasons;
	NSMutableSet *_requireWallpaperReasons;
	NSMutableSet *_hideHomescreenWallpaperReasons;
	NSMutableSet *_hideLockscreenWallpaperReasons;
	int _displayedVariant;
	float _lockscreenOnlyWallpaperAlpha;
	NSHashTable *_lockscreenBlurViews;
	NSHashTable *_homescreenBlurViews;
	int _disallowRasterizationBlockCount;
	NSMutableSet *_disallowRasterizationReasonsHomeVariant;
	NSMutableSet *_disallowRasterizationReasonsLockVariant;
	CGColorRef _homescreenLightForegroundBlurColor;
	CGRect _homescreenLightForegroundBlurColorRect;
	BOOL _creatingHomescreenLightForegroundBlurColor;
	BOOL _isSuspendingMotionEffectsForBlur;
	SBWallpaperPreviewSnapshotCache *_previewCache;
	int _activeOrientationSource;
	BOOL _coalescingGeometryChanges;
	int _locationsWithCoalescedGeometryChanges;
	float _homescreenWallpaperScale;
	float _lockscreenWallpaperScale;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float homescreenWallpaperScale;
@property(assign, nonatomic) float lockscreenWallpaperScale;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) int variant;
@property(assign, nonatomic) float windowLevel;
+ (id)_homescreenLightForegroundBlurMappedImageCache;
+ (id)sharedInstance;
- (id)initWithOrientation:(int)orientation variant:(int)variant;
- (void)_accessibilityEnhanceBackgroundContrastChanged:(id)changed;
- (void)_beginDisallowRasterizationBlock;
- (void)_beginSuspendingMotionEffectsForBlurIfNeeded;
- (id)_blurViewsForVariant:(int)variant;
- (void)_clearHomescreenLightForegroundBlurColor;
- (void)_clearWallpaperEffectView:(id *)view;
- (void)_clearWallpaperView:(id *)view;
- (void)_createHomescreenLightForegroundBlurColorIfNecessary;
- (void)_endDisallowRasterizationBlock;
- (void)_endSuspendingMotionEffectsForBlurIfNeeded;
- (id)_getImageInRect:(CGRect)rect withZoomFactor:(float)zoomFactor forVariant:(int)variant style:(inout int *)style;
- (void)_handleWallpaperChangedForVariant:(int)variant;
- (void)_handleWallpaperGeometryChangedForVariant:(int)variant;
- (void)_handleWallpaperLegibilitySettingsChanged:(id)changed forVariant:(int)variant;
- (BOOL)_isAcceptingOrientationChangesFromSource:(int)source;
- (BOOL)_isRasterizationDisallowedForCurrentVariant;
- (BOOL)_isWallpaperHiddenForVariant:(int)variant;
- (BOOL)_isWallpaperView:(id)view displayingWallpaper:(id)wallpaper forVariant:(int)variant;
- (void)_motionEffectsChanged;
- (id)_newFakeBlurViewForVariant:(int)variant;
- (id)_newWallpaperEffectViewForVariant:(int)variant transitionState:(XXStruct_S5WqmA)state;
- (id)_newWallpaperViewForProcedural:(id)procedural orImage:(id)image forVariant:(int)variant;
- (id)_observersForVariant:(int)variant;
- (void)_reconfigureBlurViewsForVariant:(int)variant;
- (void)_registerFakeBlurView:(id)view;
- (BOOL)_setDisallowRasterization:(BOOL)rasterization withReason:(id)reason reasons:(id)reasons;
- (void)_setWallpaperHidden:(BOOL)hidden variant:(int)variant reason:(id)reason;
- (BOOL)_shouldSuspendMotionEffectsForState:(XXStruct_S5WqmA)state;
- (id)_sourceForFakeBlurView:(id)fakeBlurView;
- (void)_suspendOrResumeColorSampling;
- (void)_suspendOrResumeWallpaperAnimation;
- (void)_unregisterFakeBlurView:(id)view;
- (void)_updateBlurGeneration;
- (void)_updateBlurImagesForVariant:(int)variant;
- (BOOL)_updateEffectViewForVariant:(int)variant oldState:(XXStruct_S5WqmA *)state newState:(XXStruct_S5WqmA *)state3 oldEffectView:(id *)view newEffectView:(id *)view5;
- (BOOL)_updateEffectViewForVariant:(int)variant withFactory:(id)factory;
- (id)_updateEffectViewViaAnimationStepperForVariant:(int)variant homescreenPriority:(int)priority;
- (void)_updateMotionEffectsForState:(XXStruct_S5WqmA)state;
- (void)_updateRasterizationState;
- (void)_updateScreenBlanked;
- (void)_updateSeparateWallpaper;
- (void)_updateSharedWallpaper;
- (void)_updateWallpaperForLocations:(int)locations withCompletion:(id)completion;
- (void)_updateWallpaperHidden;
- (void)_updateWallpaperParallax;
- (id)_wallpaperViewForVariant:(int)variant;
- (id)_window;
- (void)activeInterfaceOrientationDidChangeToOrientation:(int)activeInterfaceOrientation willAnimateWithDuration:(double)duration fromOrientation:(int)orientation;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)activeInterfaceOrientation;
- (void)addObserver:(id)observer forVariant:(int)variant;
- (id)averageColorForVariant:(int)variant;
- (id)averageColorInRect:(CGRect)rect forVariant:(int)variant;
- (id)averageColorInRect:(CGRect)rect forVariant:(int)variant withSmudgeRadius:(float)smudgeRadius;
- (void)beginRequiringWithReason:(id)reason;
- (float)contrastInRect:(CGRect)rect contrastWithinBoxes:(float *)boxes contrastBetweenBoxes:(float *)boxes3 forVariant:(int)variant;
- (XXStruct_S5WqmA)currentHomescreenStyleTransitionState;
- (void)dealloc;
- (id)debuggingDescription;
- (void)didFinishWallpaperStepAnimation:(id)animation;
- (void)endRequiringWithReason:(id)reason;
- (CGColorRef)homescreenLightForegroundBlurColor;
- (CGSize)homescreenLightForegroundBlurColorPhaseForRect:(CGRect)rect;
- (id)legibilitySettingsForVariant:(int)variant;
- (void)orientationSource:(int)source didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)orientationSource:(int)source willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (void)orientationSource:(int)source willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
- (id)previewCache;
- (void)removeHomescreenStyleForGuidedAccessPriorityWithAnimationFactory:(id)animationFactory;
- (BOOL)removeHomescreenStyleForPriority:(int)priority withAnimationFactory:(id)animationFactory;
- (id)removeHomescreenStyleViaAnimationStepperForPriority:(int)priority;
- (BOOL)removeLockscreenStyleForPriority:(int)priority withAnimationFactory:(id)animationFactory;
- (void)removeObserver:(id)observer forVariant:(int)variant;
- (void)resumeColorSamplingForReason:(id)reason;
- (void)resumeWallpaperAnimationForReason:(id)reason;
- (void)setActiveOrientationSource:(int)source andUpdateToOrientation:(int)orientation usingCrossfadeToBlack:(BOOL)black;
- (void)setDisallowsRasterization:(BOOL)rasterization forVariant:(int)variant withReason:(id)reason;
- (BOOL)setHomescreenStyle:(int)style forPriority:(int)priority withAnimationFactory:(id)animationFactory;
- (id)setHomescreenStyle:(int)style viaAnimationStepperForPriority:(int)priority;
- (void)setHomescreenStyleForGuidedAccessPriorityWithAnimationFactory:(id)animationFactory;
- (BOOL)setHomescreenStyleTransitionState:(XXStruct_S5WqmA)state forPriority:(int)priority withAnimationFactory:(id)animationFactory;
- (id)setHomescreenStyleTransitionState:(XXStruct_S5WqmA)state viaAnimationStepperForPriority:(int)priority;
- (void)setLockscreenOnlyWallpaperAlpha:(float)alpha;
- (BOOL)setLockscreenStyle:(int)style forPriority:(int)priority withAnimationFactory:(id)animationFactory;
- (BOOL)setLockscreenStyleTransitionState:(XXStruct_S5WqmA)state forPriority:(int)priority withAnimationFactory:(id)animationFactory;
- (void)setLockscreenWallpaperContentsRect:(CGRect)rect;
- (BOOL)setStyleTransitionState:(XXStruct_S5WqmA)state forVariant:(int)variant priority:(int)priority withAnimationFactory:(id)animationFactory;
- (void)setVariant:(int)variant withOutAnimationFactory:(id)outAnimationFactory inAnimationFactory:(id)animationFactory completion:(id)completion;
- (void)suspendColorSamplingForReason:(id)reason;
- (void)suspendWallpaperAnimationForReason:(id)reason;
- (BOOL)variantsShareWallpaper;
- (void)wallpaperView:(id)view didChangeZoomFactor:(float)factor;
- (void)wallpaperView:(id)view legibilitySettingsDidChange:(id)legibilitySettings;
- (void)wallpaperViewDidChangeWantsRasterization:(id)wallpaperView;
- (void)wallpaperViewDidInvalidateBlurs:(id)wallpaperView;
- (void)wallpaperViewDidInvalidateGeometry:(id)wallpaperView;
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

