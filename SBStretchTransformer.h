/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStretchTransformer : XXUnknownSuperclass {
	UIView *m_view;
	int m_anchorEdge;
	int m_orientation;
	CAMutableMeshTransform *m_mesh;
	float m_stretchFactor;
	id m_animationCompletionHandler;
}
@property(assign, nonatomic) int anchorEdge;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic) float stretchFactor;
@property(retain, nonatomic) UIView *view;
- (id)initWithView:(id)view anchorEdge:(int)edge orientation:(int)orientation;
- (void)animateToZeroStretchFactor;
- (void)animateToZeroStretchFactorWithCompletionHandler:(id)completionHandler;
- (void)animationDidStop:(id)animation finished:(BOOL)finished;
- (void)dealloc;
- (id)meshTransform;
- (void)updateMeshTransform:(id)transform stretchFactor:(float)factor;
@end

