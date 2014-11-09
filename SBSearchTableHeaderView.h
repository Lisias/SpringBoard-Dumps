/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSDictionary, SBObservingLabel, NSString;

__attribute__((visibility("hidden")))
@interface SBSearchTableHeaderView : XXUnknownSuperclass {
	NSString *_reuseIdentifier;
	SBObservingLabel *_titleLabel;
	UIView *_separatorView;
	NSDictionary *_titleTextAttributes;
}
@property(readonly, copy, nonatomic) NSString *reuseIdentifier;
@property(retain, nonatomic) UIView *separatorView;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) SBObservingLabel *titleLabel;
@property(retain, nonatomic) NSDictionary *titleTextAttributes;
+ (id)lineColor;
+ (BOOL)requiresConstraintBasedLayout;
- (id)initWithReuseIdentifier:(id)reuseIdentifier;
- (void)_contentSizeCategoryDidChange:(id)_contentSizeCategory;
- (void)dealloc;
- (BOOL)isUserInteractionEnabled;
- (void)prepareForReuse;
- (void)updateFonts;
@end

