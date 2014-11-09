/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SBDisplayLayout : XXUnknownSuperclass <NSCopying> {
	int _layoutSize;
	NSMutableArray *_displayItems;
	NSString *_uniqueStringRepresentation;
}
@property(readonly, assign, nonatomic) NSArray *displayItems;
@property(readonly, assign, nonatomic) int layoutSize;
+ (id)displayLayoutWithLayoutSize:(int)layoutSize displayItems:(id)items;
+ (id)displayLayoutWithPlistRepresentation:(id)plistRepresentation;
+ (id)fullScreenDisplayLayoutForApplication:(id)application;
+ (id)homeScreenDisplayLayout;
- (id)initWithLayoutSize:(int)layoutSize displayItems:(id)items;
- (id)_calculateUniqueStringRepresentation;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (id)description;
- (id)displayLayoutByAddingDisplayItem:(id)item side:(int)side withLayout:(int)layout;
- (id)displayLayoutByRemovingDisplayItem:(id)item;
- (id)displayLayoutByRemovingDisplayItems:(id)items;
- (id)displayLayoutByReplacingDisplayItemOnSide:(int)side withDisplayItem:(id)displayItem;
- (id)displayLayoutBySettingSize:(int)size;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (id)plistRepresentation;
- (id)uniqueStringRepresentation;
@end

