/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"

@class SBPowerDownView;

@interface SBPowerDownController : SBAlert {
	int _count;
	id _delegate;
	SBPowerDownView *_powerDownView;
	BOOL _isFront;
}
+ (id)sharedInstance;
- (void)_restoreIconListIfNecessary;
- (void)activate;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (void)alertDisplayWillBecomeVisible;
- (double)autoLockTime;
- (void)cancel;
- (void)deactivate;
- (void)dealloc;
- (BOOL)isOrderedFront;
- (void)orderFront;
- (void)orderOut;
- (void)powerDown;
- (id)powerDownViewWithSize:(CGSize)size;
- (void)setDelegate:(id)delegate;
@end

