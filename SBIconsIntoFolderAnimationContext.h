/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBIconsIntoFolderAnimationContext : NSObject {
	SBFolderIcon *_folderIcon;
	NSArray *_iconSnapshots;
	NSArray *_miniSnapshots;
	NSArray *_addedIcons;
	BOOL _openFolderOnFinish;
}
@property(retain, nonatomic) NSArray *addedIcons;
@property(retain, nonatomic) SBFolderIcon *folderIcon;
@property(retain, nonatomic) NSArray *iconSnapshots;
@property(retain, nonatomic) NSArray *miniSnapshots;
@property(assign, nonatomic) BOOL openFolderOnFinish;
- (void)dealloc;
@end

