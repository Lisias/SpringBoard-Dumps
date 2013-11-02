/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBIconListPageControlDelegate;

__attribute__((visibility("hidden")))
@interface SBIconListPageControl : XXUnknownSuperclass {
	id _delegate;
}
@property(assign, nonatomic) id<SBIconListPageControlDelegate> delegate;
- (id)_pageIndicatorCurrentImageForPage:(int)page;
- (id)_pageIndicatorImageForPage:(int)page;
- (void)setFrame:(CGRect)frame;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
@end

