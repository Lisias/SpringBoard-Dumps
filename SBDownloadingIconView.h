/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBDownloadingIconView : SBIconView {
	SBDownloadingProgressBar *_progressView;
}
@property(readonly, retain) SBDownloadingIcon *downloadingIcon;
- (id)initWithDefaultSize;
- (void)_updateProgressBar;
- (void)dealloc;
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;
- (void)setDisplayedIconImage:(id)image;
- (void)setDownloadingIcon:(id)icon;
- (void)setGhostly:(BOOL)ghostly requester:(int)requester;
- (void)setIcon:(id)icon;
@end

