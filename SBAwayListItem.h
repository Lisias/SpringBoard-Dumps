/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAwayListCellButtonHandler.h"
#import "SBUIQuietModePlayability.h"

@class NSString, NSDate, SBUnlockActionContext;

__attribute__((visibility("hidden")))
@interface SBAwayListItem : XXUnknownSuperclass <SBAwayListCellButtonHandler, SBUIQuietModePlayability, NSCopying> {
	NSDate *_timestamp;
	BOOL _isNewItem;
	SBUnlockActionContext *_unlockActionContext;
	NSString *_buttonLabel;
}
@property(copy, nonatomic) NSString *buttonLabel;
@property(assign, nonatomic) BOOL isNewItem;
@property(retain, nonatomic) NSDate *timestamp;
- (void)buttonPressed;
- (BOOL)canBeClearedByNotificationCenter;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (BOOL)inertWhenLocked;
- (BOOL)isCritical;
- (BOOL)overridesQuietMode;
- (BOOL)wantsHighlightOnInsert;
@end

