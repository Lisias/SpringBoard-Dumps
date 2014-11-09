/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBFolderControllerDelegate <NSObject>
- (Class)controllerClassForFolder:(id)folder;
- (BOOL)folderController:(id)controller draggedIconDidMoveFromListView:(id)draggedIcon toListView:(id)listView;
- (BOOL)folderController:(id)controller draggedIconDidPauseAtLocation:(CGPoint)draggedIcon inListView:(id)listView;
- (BOOL)folderController:(id)controller draggedIconMightDropFromListView:(id)listView;
- (void)folderController:(id)controller draggedIconShouldDropFromListView:(id)draggedIcon;
- (void)folderControllerDidEndScrolling:(id)folderController;
@optional
- (void)folderControllerDidReceiveCancelReachabilityAction:(id)folderController;
@required
- (void)folderControllerShouldBeginEditing:(id)folderController;
- (void)folderControllerShouldClose:(id)folderController;
@end

