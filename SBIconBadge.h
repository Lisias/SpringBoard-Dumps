/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"


@interface SBIconBadge : UIView {
	NSString *_badge;
	CGSize _badgeContentSize;
	BOOL _highlighted;
	float _brightness;
}
+ (float)badgeLabelVerticalOffset;
+ (id)iconBadgeWithBadgeString:(id)badgeString;
- (id)initWithBadgeString:(id)badgeString;
- (id)initWithFrame:(CGRect)frame;
- (void)darken:(float)darken;
- (void)dealloc;
- (void)drawBackgroundImage;
- (void)drawRect:(CGRect)rect;
- (void)setHightlighted:(BOOL)hightlighted;
@end

