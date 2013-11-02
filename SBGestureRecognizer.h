/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface SBGestureRecognizer : XXUnknownSuperclass {
	int m_types;
	int m_state;
	id m_handler;
	unsigned m_activeTouchesCount;
	XXStruct_DSYOgA m_activeTouches[30];
	unsigned m_strikes;
	unsigned m_templateMatches;
	NSMutableArray *m_touchTemplates;
	BOOL m_includedInGestureRecognitionIsPossibleTest;
	BOOL m_sendsTouchesCancelledToApplication;
	id m_canBeginCondition;
}
@property(copy, nonatomic) id canBeginCondition;
@property(copy, nonatomic) id handler;
@property(assign, nonatomic) BOOL includedInGestureRecognitionIsPossibleTest;
@property(assign, nonatomic) BOOL sendsTouchesCancelledToApplication;
@property(assign, nonatomic) int state;
@property(assign, nonatomic) int types;
- (id)init;
- (void)addTouchTemplate:(id)aTemplate;
- (void)dealloc;
- (void)reset;
- (void)sendTouchesCancelledToApplicationIfNeeded;
- (BOOL)shouldReceiveTouches;
- (int)templateMatch;
- (void)touchesBegan:(SBGestureContextRef)began;
- (void)touchesCancelled:(SBGestureContextRef)cancelled;
- (void)touchesEnded:(SBGestureContextRef)ended;
- (void)touchesMoved:(SBGestureContextRef)moved;
@end

