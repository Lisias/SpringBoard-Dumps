/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertDisplay.h"


@interface SBAssistantAlertDisplay : SBAlertDisplay {
	UIView *_assistantView;
}
@property(retain, nonatomic) UIView *assistantView;
- (id)initWithFrame:(CGRect)frame;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)dealloc;
- (void)layoutSubviews;
@end

