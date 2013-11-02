/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SBIconBadge : UIView {
	UIImageView *_backgroundImageView;
	UIImageView *_darkeningOverlay;
	UILabel *_badgeLabel;
	BOOL _highlighted;
	float _brightness;
}
+ (id)iconBadgeWithBadgeString:(id)badgeString;
- (id)initWithBadgeString:(id)badgeString;
- (id)initWithFrame:(CGRect)frame;
- (void)_darken:(float)darken;
- (void)darken:(float)darken;
- (void)dealloc;
- (void)setHightlighted:(BOOL)hightlighted;
@end

