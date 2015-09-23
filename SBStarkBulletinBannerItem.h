/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkBulletinBannerItem : SBStarkBannerItem {
	BBBulletin *_bulletin;
	SBUISound *_sound;
	unsigned _feed;
}
- (id)initWithBulletin:(id)bulletin feed:(unsigned)feed configuration:(id)configuration;
- (id)initWithConfiguration:(id)configuration;
- (id)_bbDismissAction;
- (id)_bbDismissAppearance;
- (BOOL)_supportsSubActions;
- (id)_uiBannerActionForBBAction:(id)bbaction context:(id)context;
- (id)action;
- (id)bbAllActions;
- (id)bbSupplementaryActions;
- (id)categoryImage;
- (void)dealloc;
- (int)defaultActionType;
- (BOOL)matchesContext:(id)context;
- (id)message;
- (BOOL)shouldShowModalSubActions;
- (id)sound;
- (id)sourceDate;
- (id)subActionLabels;
- (id)subActions;
- (id)subTitle;
- (id)title;
- (void)updateBulletinToInstance:(id)instance;
@end

