/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBIconContentView : XXUnknownSuperclass {
	int _orientation;
	NSMutableArray *_folderContentViews;
}
@property(assign, nonatomic) int orientation;
- (id)initWithOrientation:(int)orientation;
- (id)_folderViews;
- (CGRect)_frameForFolderView:(id)folderView;
- (void)clearAllFolderContentViews;
- (void)dealloc;
- (void)didAddSubview:(id)subview;
- (void)layoutSubviews;
- (void)popFolderContentView:(id)view;
- (void)pushFolderContentView:(id)view;
- (void)updateLayoutWithDuration:(double)duration;
@end
