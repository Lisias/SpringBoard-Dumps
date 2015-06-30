/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBDownloadingProgressBar : XXUnknownSuperclass {
	UIView *_clipView;
	UIImageView *_fillView;
	float _progress;
}
+ (float)defaultHeight;
- (id)initWithFrame:(CGRect)frame;
- (void)dealloc;
- (id)fillImage;
- (float)progress;
- (void)setProgress:(float)progress;
- (id)trackImage;
- (void)updateFill;
@end

