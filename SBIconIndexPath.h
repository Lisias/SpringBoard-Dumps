/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBIconIndexPath : XXUnknownSuperclass {
	NSIndexPath *_listIndexes;
	NSIndexPath *_iconIndexes;
}
@property(retain, nonatomic) NSIndexPath *iconIndexes;
@property(retain, nonatomic) NSIndexPath *listIndexes;
+ (id)indexPathWithIconIndex:(unsigned)iconIndex;
+ (id)indexPathWithIconIndex:(unsigned)iconIndex listIndex:(unsigned)index;
- (void)dealloc;
- (id)indexPathByPoppingOutermostListAndIconIndexes;
- (id)indexPathByPushingOutermostListIndex:(unsigned)index iconIndex:(unsigned)index2;
- (BOOL)isEmpty;
- (unsigned)outermostIconIndex;
- (unsigned)outermostListIndex;
- (unsigned)popIconIndex;
- (unsigned)popListIndex;
- (void)pushIconIndex:(unsigned)index;
- (void)pushListIndex:(unsigned)index;
@end

