/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol UICoordinateSpace <NSObject>
@property(readonly, assign, nonatomic) CGRect bounds;
- (CGPoint)convertPoint:(CGPoint)point fromCoordinateSpace:(id)coordinateSpace;
- (CGPoint)convertPoint:(CGPoint)point toCoordinateSpace:(id)coordinateSpace;
- (CGRect)convertRect:(CGRect)rect fromCoordinateSpace:(id)coordinateSpace;
- (CGRect)convertRect:(CGRect)rect toCoordinateSpace:(id)coordinateSpace;
@end
