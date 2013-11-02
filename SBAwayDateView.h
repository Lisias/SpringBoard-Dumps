/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"

@class SBAwayMediaControlsView, TPLCDTextView, UILabel, NSString, NSTimer;
@protocol SBAwayDateViewDelegate;

@interface SBAwayDateView : UIView {
	NSTimer *_dateTimer;
	TPLCDTextView *_timeLabel;
	TPLCDTextView *_titleLabel;
	NSString *_title;
	NSString *_artist;
	NSString *_album;
	UILabel *_nowPlayingTitleLabel;
	UILabel *_nowPlayingArtistLabel;
	UILabel *_nowPlayingAlbumLabel;
	SBAwayMediaControlsView *_controlsView;
	id<SBAwayDateViewDelegate> _delegate;
	int _orientation;
	unsigned _isPlaying : 1;
}
@property(assign, nonatomic) id<SBAwayDateViewDelegate> delegate;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic, getter=isPlaying) BOOL playing;
@property(retain, nonatomic) NSString *title;
- (id)initWithFrame:(CGRect)frame;
- (id)controlsView;
- (void)dealloc;
- (BOOL)isShowingControls;
- (id)labelWithFontSize:(float)fontSize origin:(CGPoint)origin;
- (id)labelWithFontSize:(float)fontSize origin:(CGPoint)origin fontName:(const char *)name;
- (void)movedToSuperview:(id)superview;
- (id)newNowPlayingLabelWithFont:(id)font color:(id)color origin:(CGPoint)origin;
- (void)removeFromSuperview;
- (void)resizeNowPlayingLabels;
- (void)setAlbum:(id)album;
- (void)setAlpha:(float)alpha;
- (void)setArtist:(id)artist;
- (void)setIsShowingControls:(BOOL)controls;
- (void)updateClock;
- (void)updateClockFormat;
- (void)updateLabels;
@end
