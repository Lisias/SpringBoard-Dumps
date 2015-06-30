/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>


@interface SBBrightnessController : NSObject {
	BOOL _debounce;
}
+ (id)sharedBrightnessController;
- (float)_calcButtonRepeatDelay;
- (void)adjustBacklightLevel:(BOOL)level;
- (void)cancelBrightnessEvent;
- (void)decreaseBrightnessAndRepeat;
- (void)handleBrightnessEvent:(GSEventRef)event;
- (void)increaseBrightnessAndRepeat;
@end

