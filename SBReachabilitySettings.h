/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBReachabilitySettings : XXUnknownSuperclass {
	BOOL _allowOnAllDevices;
	unsigned _triggerMethod;
	unsigned _numberOfTapsForTapTrigger;
	float _yOffsetFactor;
	float _mass;
	float _stiffness;
	float _damping;
	float _epsilon;
	double _fingerOnMesaRequiredDuration;
	double _tapToTapMaxInterval;
	double _reachabilityDefaultKeepAlive;
	double _reachabilityInteractiveKeepAlive;
	double _reducedMotionSlideDuration;
}
@property(assign, nonatomic) BOOL allowOnAllDevices;
@property(assign, nonatomic) float damping;
@property(assign, nonatomic) float epsilon;
@property(assign, nonatomic) double fingerOnMesaRequiredDuration;
@property(assign, nonatomic) float mass;
@property(assign, nonatomic) unsigned numberOfTapsForTapTrigger;
@property(assign, nonatomic) double reachabilityDefaultKeepAlive;
@property(assign, nonatomic) double reachabilityInteractiveKeepAlive;
@property(assign, nonatomic) double reducedMotionSlideDuration;
@property(assign, nonatomic) float stiffness;
@property(assign, nonatomic) double tapToTapMaxInterval;
@property(assign, nonatomic) unsigned triggerMethod;
@property(assign, nonatomic) float yOffsetFactor;
+ (id)settingsControllerModule;
- (id)animationFactory;
- (void)setDefaultValues;
@end

