/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBDefaultBannerTextView : XXUnknownSuperclass <SBDateLabelDelegate> {
	NSAttributedString *_primaryTextAttributedString;
	NSAttributedString *_primaryTextAttributedStringComponent;
	UIImage *_primaryTextAccessoryImageComponent;
	NSAttributedString *_subtitleTextAttributedString;
	NSAttributedString *_secondaryTextAttributedString;
	NSAttributedString *_alternateSecondaryTextAttributedString;
	UILabel<SBBulletinDateLabel> *_relevanceDateLabel;
	float _secondaryTextAlpha;
	float _alternateSecondaryTextAlpha;
}
@property(copy, nonatomic) NSString *alternateSecondaryText;
@property(copy, nonatomic) NSString *primaryText;
@property(retain, nonatomic) UIImage *primaryTextAccessoryImage;
@property(readonly, assign, nonatomic) UILabel *relevanceDateLabel;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *subtitleText;
+ (id)_defaultRelevanceDateFont;
+ (id)_primaryTextFont;
+ (id)_secondaryItalicTextFont;
+ (id)_secondaryTextFont;
- (id)initWithFrame:(CGRect)frame;
- (BOOL)_hasSecondaryText;
- (void)_invalidatePrimaryTextAttributedString;
- (BOOL)_isItalicizedAttributedString:(id)string;
- (CGRect)_maximumSecondaryTextRectForBounds:(CGRect)bounds;
- (id)_newAttributedStringForSecondaryText:(id)secondaryText italicized:(BOOL)italicized;
- (id)_primaryTextAttributedString;
- (float)_primaryTextBaselineForBounds:(CGRect)bounds;
- (CGRect)_primaryTextRectForBounds:(CGRect)bounds;
- (CGSize)_primaryTextSizeForBounds:(CGRect)bounds;
- (float)_secondaryTextOriginYForBounds:(CGRect)bounds;
- (CGRect)_secondaryTextRectForBounds:(CGRect)bounds attributedString:(id)string;
- (void)_setSecondaryText:(id)text italicized:(BOOL)italicized forAttributedStringPtr:(id *)attributedStringPtr;
- (float)_subtitleTextOriginYForBounds:(CGRect)bounds;
- (CGRect)_subtitleTextRectForBounds:(CGRect)bounds attributedString:(id)string;
- (void)dateLabelDidChange:(id)dateLabel;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)layoutSubviews;
- (void)setAlternateSecondaryText:(id)text italicized:(BOOL)italicized;
- (void)setAlternateSecondaryTextAlpha:(float)alpha;
- (void)setRelevanceDate:(id)date;
- (void)setSecondaryText:(id)text italicized:(BOOL)italicized;
- (void)setSecondaryTextAlpha:(float)alpha;
- (CGSize)sizeThatFits:(CGSize)fits;
- (BOOL)textWillWrapForWidth:(float)text;
@end

