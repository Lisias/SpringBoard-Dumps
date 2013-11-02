/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"


@interface SBCallAlert : SBAlert {
	BOOL _causedSuspension;
}
+ (void)registerForAlerts;
- (id)initWithCall:(CTCallRef)call;
- (void)_handleCallEvent:(CTCallRef)event;
- (void)_handleCallerIDEvent:(CTCallRef)event;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (BOOL)allowsDoubleHeightStatusBar:(BOOL)bar;
- (void)dealloc;
@end
