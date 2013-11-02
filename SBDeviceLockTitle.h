/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>

@class NSString;

@interface SBDeviceLockTitle : UIView {
	int _style;
	int _interfaceOrientation;
}
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(assign, nonatomic) int interfaceOrientation;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (id)initWithStyle:(int)style interfaceOrientation:(int)orientation;
- (id)_protectedInitWithStyle:(int)style interfaceOrientation:(int)orientation;
- (void)blinkSubtitle;
@end
