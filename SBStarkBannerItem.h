/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBStarkBannerItem : XXUnknownSuperclass {
	id<SBStarkSessionConfiguring> _configuration;
	NSHashTable *_observers;
	NSMutableSet *_displayReasons;
}
@property(readonly, retain, nonatomic) UIImage *categoryImage;
@property(readonly, retain, nonatomic) id<SBStarkSessionConfiguring> configuration;
@property(readonly, assign, nonatomic) int defaultActionType;
@property(readonly, assign, nonatomic) int effectiveDefaultActionType;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, retain, nonatomic) NSDate *sourceDate;
@property(readonly, copy, nonatomic) NSArray *subActionLabels;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (void)_callOrFaceTimeStateChanged;
- (BOOL)_inCallOrFaceTime;
- (void)addObserver:(id)observer;
- (void)dealloc;
- (id)ignoreAction;
- (BOOL)isStarkBannerItem;
- (BOOL)matchesContext:(id)context;
- (void)reloadDisplayProperties;
- (void)removeObserver:(id)observer;
- (BOOL)shouldShowModalSubActions;
@end

