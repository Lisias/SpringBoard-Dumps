/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBModalLayoutCaching.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UILabel, UIImageView, NSString;

__attribute__((visibility("hidden")))
@interface SBTodayBulletinCell : XXUnknownSuperclass <SBModalLayoutCaching> {
	UILabel *_label;
	UIImageView *_iconImageView;
	int _layoutMode;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString *labelText;
@property(assign, nonatomic) int layoutMode;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) CGRect textRect;
+ (id)defaultFont;
+ (id)defaultFontColor;
+ (id)defaultTextAttributes;
+ (float)interCellSpacingInLayoutMode:(int)layoutMode;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setIcon:(id)icon;
@end

