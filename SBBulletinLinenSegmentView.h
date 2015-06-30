/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinImageView.h"


@interface SBBulletinLinenSegmentView : SBBulletinImageView {
	UIView *_linenView;
	CGSize _linenSize;
	SBBulletinImageView *_gradientView;
}
- (id)initWithFrame:(CGRect)frame linenView:(id)view;
- (void)adjustContents;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setFrame:(CGRect)frame;
- (void)setGradientAlpha:(float)alpha;
@end

