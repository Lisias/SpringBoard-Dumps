/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSearchTableViewCell : XXUnknownSuperclass {
	UIFont *_titleFont;
	UIFont *_subtitleFont;
	UIFont *_auxiliaryTitleFont;
	UIFont *_topHitFont;
	NSString *_title;
	NSString *_subtitle;
	NSString *_summary;
	NSString *_auxiliaryTitle;
	NSString *_auxiliarySubtitle;
	BOOL _badged;
	BOOL _starred;
	BOOL _usesAlternateBackgroundColor;
	BOOL _isTopHit;
	BOOL _isBelowTopHit;
	BOOL _isFirstInTableView;
	BOOL _isLastInTableView;
	BOOL _isFirstInSection;
	float _sectionHeaderWidth;
	float _edgeInset;
}
@property(retain, nonatomic) NSString *auxiliarySubtitle;
@property(retain, nonatomic) NSString *auxiliaryTitle;
@property(assign, nonatomic, getter=isBadged) BOOL badged;
@property(assign, nonatomic, getter=isBelowTopHit) BOOL belowTopHit;
@property(assign, nonatomic) float edgeInset;
@property(assign, nonatomic, getter=isFirstInSection) BOOL firstInSection;
@property(assign, nonatomic, getter=isFirstInTableView) BOOL firstInTableView;
@property(assign, nonatomic, getter=isLastInTableView) BOOL lastInTableView;
@property(assign, nonatomic) float sectionHeaderWidth;
@property(assign, nonatomic, getter=isStarred) BOOL starred;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *summary;
@property(retain, nonatomic) NSString *title;
@property(assign, nonatomic, getter=isTopHit) BOOL topHit;
@property(assign, nonatomic) BOOL usesAlternateBackgroundColor;
+ (id)alternateBackgroundColor;
+ (id)alternateLineColor;
+ (id)backgroundColor;
+ (void)initialize;
+ (id)inner2xAlternateLineColor;
+ (id)inner2xAlternateShadowColor;
+ (id)inner2xLineColor;
+ (id)inner2xShadowColor;
+ (id)lineColor;
+ (id)outer2xAlternateLineColor;
+ (id)outer2xAlternateShadowColor;
+ (id)outer2xLineColor;
+ (id)outer2xShadowColor;
+ (id)topLineShadowColor;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
- (void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;
- (BOOL)_drawsContent;
- (id)_scriptingInfo;
- (void)_updateOpacity;
- (void)clearContents;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
@end

