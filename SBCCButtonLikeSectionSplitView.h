/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBCCButtonLikeSectionSplitView : SBControlCenterSectionView {
	float _separatorWidth;
	BOOL _leftHidden;
	BOOL _rightHidden;
	SBCCButtonLikeSectionView *_leftSection;
	SBCCButtonLikeSectionView *_rightSection;
}
@property(retain, nonatomic) SBCCButtonLikeSectionView *leftSection;
@property(retain, nonatomic) SBCCButtonLikeSectionView *rightSection;
- (id)initWithFrame:(CGRect)frame;
- (CGRect)_frameForSectionSlot:(int)sectionSlot;
- (UIEdgeInsets)_landscapeInsetsForSection;
- (void)_relayoutAnimated:(BOOL)animated;
- (void)_updateButtonsCorners;
- (void)_updateLabelParameters;
- (BOOL)_useLandscapeBehavior;
- (id)_viewForSectionSlot:(int)sectionSlot;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setLeftSectionHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)setRightSectionHidden:(BOOL)hidden animated:(BOOL)animated;
@end

