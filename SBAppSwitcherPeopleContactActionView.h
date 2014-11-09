/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAppSwitcherPeopleButtonAndLabelView.h"
#import "SpringBoard-Structs.h"

@class SBAppSwitcherPeopleContactAction;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleContactActionView : SBAppSwitcherPeopleButtonAndLabelView {
	SBAppSwitcherPeopleContactAction *_action;
}
@property(retain, nonatomic) SBAppSwitcherPeopleContactAction *action;
+ (BOOL)_centerImageVerticallyForLayout;
+ (float)_layoutLabelFontSizeCompact:(BOOL)compact;
+ (float)_layoutLabelVerticalPaddingCompact:(BOOL)compact;
+ (CGSize)preferredLayoutSizeForMonogramSize:(float)monogramSize compact:(BOOL)compact;
+ (CGSize)preferredLayoutSizeForMonogramSize:(float)monogramSize compact:(BOOL)compact forAction:(id)action;
+ (void)warmContactActionImages;
- (id)_legibilityImageForImageNamed:(id)imageNamed;
- (id)_mappedImageNamed:(id)named renderingMode:(int)mode;
- (CGSize)_maxLabelLayoutSize;
- (float)_strengthForLegibilityStyle:(int)legibilityStyle;
@end

