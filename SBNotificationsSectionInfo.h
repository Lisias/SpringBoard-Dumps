/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBNotificationsSectionInfo : SBBBSectionInfo {
	id _clearPossibleAction;
	id _clearAction;
}
@property(copy, nonatomic) id clearAction;
@property(copy, nonatomic) id clearPossibleAction;
@property(readonly, assign, nonatomic) SBBulletinListSection *representedListSection;
- (void)dealloc;
- (float)heightForReusableViewInTableView:(id)tableView;
- (id)identifier;
- (void)populateReusableView:(id)view;
- (Class)reusableViewClass;
- (BOOL)shouldSuppressBulletinMessageForPrivacy:(id)privacy;
@end
