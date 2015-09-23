/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBModeControlManager : XXUnknownSuperclass {
	NSMutableArray *_views;
}
@property(readonly, assign, nonatomic) unsigned numberOfSegments;
@property(assign, nonatomic) int selectedSegmentIndex;
@property(readonly, retain, nonatomic) NSArray *views;
+ (void)_configureSegmentedControl:(id)control withColorSettings:(id)colorSettings;
+ (id)_segmentedControlForUse:(int)use colorSettings:(id)settings;
- (id)initWithGraphicsQuality:(int)graphicsQuality;
- (id)_segmentedControlForUse:(int)use;
- (void)addTarget:(id)target action:(SEL)action;
- (void)dealloc;
- (void)insertSegmentWithTitle:(id)title atIndex:(unsigned)index animated:(BOOL)animated;
- (void)removeAllSegments;
- (void)setFrame:(CGRect)frame;
- (void)setTintColor:(id)color forUse:(int)use;
@end

