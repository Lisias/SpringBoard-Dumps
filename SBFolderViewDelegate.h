/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBFolderViewDelegate <NSObject>
- (void)folderView:(id)view currentPageIndexDidChange:(int)currentPageIndex;
- (void)folderViewDidEndScrolling:(id)folderView;
@optional
- (void)folderViewDidReceiveCancelReachabilityAction:(id)folderView;
@required
- (void)folderViewShouldBeginEditing:(id)folderView;
- (void)folderViewShouldClose:(id)folderView;
- (void)folderViewWillBeginScrolling:(id)folderView;
- (Class)iconListViewClassForFolderView:(id)folderView;
@end

