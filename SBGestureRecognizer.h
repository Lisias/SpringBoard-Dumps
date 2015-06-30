/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBGestureRecognizer : XXUnknownSuperclass {
	int m_state;
	id m_handler;
	unsigned m_activeTouchesCount;
	XXStruct_YrWplC m_activeTouches[30];
	unsigned m_strikes;
	unsigned m_templateMatches;
	NSMutableArray *m_touchTemplates;
	NSMutableArray *m_mutuallyExclusiveGestures;
	BOOL m_sentTouchesCancelledToApplication;
	BOOL m_includedInGestureRecognitionIsPossibleTest;
}
@property(copy, nonatomic) id handler;
@property(assign, nonatomic) BOOL includedInGestureRecognitionIsPossibleTest;
@property(readonly, assign, nonatomic) BOOL shouldReceiveTouches;
@property(assign, nonatomic) int state;
- (id)init;
- (void)addMutuallyExclusiveGesture:(id)gesture;
- (void)addTouchTemplate:(id)aTemplate;
- (void)cancelMutuallyExclusiveGestures;
- (void)dealloc;
- (void)reset;
- (void)sendTouchesCancelledToApplicationIfNeeded;
- (int)templateMatch;
- (void)touchesBegan:(SBGestureContextRef)began;
- (void)touchesCancelled:(SBGestureContextRef)cancelled;
- (void)touchesEnded:(SBGestureContextRef)ended;
- (void)touchesMoved:(SBGestureContextRef)moved;
@end

