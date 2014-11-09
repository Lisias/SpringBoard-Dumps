/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable;
@protocol SBReusableViewMapDelegate;

__attribute__((visibility("hidden")))
@interface SBReusableViewMap : XXUnknownSuperclass {
	NSMapTable *_recycledViewsByClass;
	BOOL _invalidated;
	id<SBReusableViewMapDelegate> _delegate;
}
@property(assign, nonatomic) id<SBReusableViewMapDelegate> delegate;
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (void)invalidate;
- (id)newViewOfClass:(Class)aClass;
- (void)purgeAllViews;
- (void)purgeViewsForClass:(Class)aClass;
- (void)recycleView:(id)view;
- (id)viewOfClass:(Class)aClass;
@end

