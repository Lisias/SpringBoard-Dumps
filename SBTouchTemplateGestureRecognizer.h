/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBTouchTemplateGestureRecognizer : XXUnknownSuperclass {
	NSArray *_templates;
	float _animationDistance;
	int _requiredDirectionality;
	UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
	NSMutableArray *_possibleTemplates;
	NSMapTable *_initialTouchPointMap;
	SBTouchTemplate *_matchedTemplate;
	SBPolygon *_matchedPolygon;
	unsigned _failedRecognitionAttempts;
	unsigned _trackingTouchCount;
	float _cumulativeMotion;
	float _cumulativeMotionEnvelope;
	float _smoothedIncrementalMotion;
}
@property(assign, nonatomic) float animationDistance;
@property(assign, nonatomic, getter=_cumulativeMotion, setter=_setCumulativeMotion:) float cumulativeMotion;
@property(assign, nonatomic, getter=_cumulativeMotionEnvelope, setter=_setCumulativeMotionEnvelope:) float cumulativeMotionEnvelope;
@property(readonly, assign, nonatomic) float cumulativePercentage;
@property(assign, nonatomic) id<SBTouchTemplateGestureRecognizerDelegate> delegate;
@property(assign, nonatomic, getter=_failedRecognitionAttempts, setter=_setFailedRecognitionAttempts:) unsigned failedRecognitionAttempts;
@property(readonly, retain, nonatomic, getter=_initialTouchPointMap) NSMapTable *initialTouchPointMap;
@property(retain, nonatomic, getter=_matchedPolygon, setter=_setMatchedPolygon:) SBPolygon *matchedPolygon;
@property(retain, nonatomic, getter=_matchedTemplate, setter=_setMatchedTemplate:) SBTouchTemplate *matchedTemplate;
@property(readonly, retain, nonatomic, getter=_possibleTemplates) NSMutableArray *possibleTemplates;
@property(assign, nonatomic) int requiredDirectionality;
@property(assign, nonatomic, getter=_smoothedIncrementalMotion, setter=_setSmoothedIncrementalMotion:) float smoothedIncrementalMotion;
@property(retain, nonatomic) NSArray *templates;
@property(assign, nonatomic, getter=_trackingTouchCount, setter=_setTrackingTouchCount:) unsigned trackingTouchCount;
@property(readonly, retain, nonatomic) UIGestureRecognizerTransformAnalyzer *transformAnalyzer;
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)_attemptTemplateMatchWithTouches:(id)touches polygon:(id)polygon;
- (void)_computeGestureMotionWithTouches:(id)touches polygon:(id)polygon;
- (BOOL)_directionallyAcceptMotion:(float)motion;
- (void)_failMeForReason:(id)reason;
- (void)_log:(id)log;
- (id)_polygonForTouches:(id)touches;
- (float)_projectedMotionForInterval:(double)interval;
- (void)_reset;
- (void)_updateForTouchesBeganOrMoved:(id)touchesBeganOrMoved;
- (void)_updateForTouchesCancelledOrEnded:(id)touchesCancelledOrEnded;
- (void)dealloc;
- (BOOL)hasSignificantMotionToBegin;
- (float)incrementalGestureMotionForCandidate:(id)candidate withTransformAnalyzerInfo:(id)transformAnalyzerInfo;
- (void)log:(id)log;
- (int)projectedCompletionTypeForInterval:(double)interval;
- (void)reset;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
@end

