/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBMedusaSettings : XXUnknownSuperclass {
	BOOL _enableSideApps;
	BOOL _enableBreadcrumbs;
	BOOL _enablePinningSideApps;
	BOOL _debugSceneColors;
	BOOL _debugRotationCenter;
	BOOL _debugColorRotationRegions;
	BOOL _clipRotationRegions;
	BOOL _fencesRotation;
	NSString *_desiredBundleIdentifier;
	float _zoomOutRotationFactor;
	float _rotationSlowdownFactor;
	float _spaceAroundSideGrabberToAllowPullIn;
	float _slideOffResizeThreshold;
	float _gapSwipeBuffer;
	unsigned long long _millisecondsBetweenResizeSteps;
}
@property(assign, nonatomic) BOOL clipRotationRegions;
@property(assign, nonatomic) BOOL debugColorRotationRegions;
@property(assign, nonatomic) BOOL debugRotationCenter;
@property(assign, nonatomic) BOOL debugSceneColors;
@property(copy, nonatomic) NSString *desiredBundleIdentifier;
@property(assign, nonatomic) BOOL enableBreadcrumbs;
@property(assign, nonatomic) BOOL enablePinningSideApps;
@property(assign, nonatomic) BOOL enableSideApps;
@property(assign, nonatomic) BOOL fencesRotation;
@property(assign, nonatomic) float gapSwipeBuffer;
@property(assign, nonatomic) unsigned long long millisecondsBetweenResizeSteps;
@property(assign, nonatomic) float rotationSlowdownFactor;
@property(assign, nonatomic) float slideOffResizeThreshold;
@property(assign, nonatomic) float spaceAroundSideGrabberToAllowPullIn;
@property(assign, nonatomic) float zoomOutRotationFactor;
+ (id)settingsControllerModule;
- (BOOL)anyRotationDebuggingEnabled;
- (void)setDefaultValues;
@end

