/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBBulletinDateLabel;

__attribute__((visibility("hidden")))
@interface SBBulletinCellContentViewBase : XXUnknownSuperclass <SBDateLabelDelegate> {
	UILabel *_titleLabel;
	UILabel *_subtitleLabel;
	UILabel *_messageLabel;
	SBStringMetrics *_messageMetrics;
	UILabel<SBBulletinDateLabel> *_dateLabel;
	UILabel<SBBulletinDateLabel> *_endDateLabel;
	UIImageView *_attachmentImageView;
	UILabel *_attachmentLabel;
	BOOL _isVIP;
	UIImageView *_vipImageView;
	unsigned _maxMessageLines;
	unsigned _maxTitleLines;
	CGSize _imageSize;
	UIColor *_shadowColor;
	int _layoutStyle;
	float _titleLineHeight;
	float _subtitleLineHeight;
	float _messageLineHeight;
	float _attachmentLineHeight;
	BOOL _highlighted;
	int _dateFormatStyle;
}
@property(retain, nonatomic) UIImageView *attachmentImageView;
@property(retain, nonatomic) UILabel *attachmentLabel;
@property(assign, nonatomic) int dateFormatStyle;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel> *dateLabel;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel> *endDateLabel;
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(assign, nonatomic) int layoutStyle;
@property(retain, nonatomic) UILabel *messageLabel;
@property(retain, nonatomic) UILabel *subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel;
- (id)initForBulletinStyle;
- (id)initForSystemAlertStyle;
- (id)_attachmentFont;
- (void)_configureLabel:(id)label withFont:(id)font color:(id)color alignment:(int)alignment;
- (id)_dateFont;
- (float)_heightForLabel:(id)label forWidth:(float)width maxHeight:(float)height;
- (float)_heightForLabel:(id)label forWidth:(float)width minLines:(unsigned)lines maxLines:(unsigned)lines4 lineHeight:(float)height;
- (id)_initForLayoutStyle:(int)layoutStyle;
- (id)_messageFont;
- (id)_modifiedLabel:(id)label withText:(id)text font:(id)font;
- (id)_modifiedLabel:(id)label withText:(id)text font:(id)font alignment:(int)alignment;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)_updateLabelFontsAndLineHeights;
- (id)_vipAccessoryImage;
- (void)dateLabelDidChange:(id)dateLabel;
- (void)dealloc;
- (void)setAttachmentImage:(id)image;
- (void)setAttachmentImageSize:(CGSize)size;
- (void)setAttachmentText:(id)text;
- (void)setMessage:(id)message;
- (void)setMessageMaxLines:(unsigned)lines;
- (void)setShadowColor:(id)color;
- (void)setStartDate:(id)date endDate:(id)date2 timeZone:(id)zone allDay:(BOOL)day formatStyle:(int)style;
- (void)setSubtitle:(id)subtitle;
- (void)setTitle:(id)title;
- (void)setTitleMaxLines:(unsigned)lines;
- (void)setVIP:(BOOL)vip;
@end

