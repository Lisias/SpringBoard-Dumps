/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TPLCDTextView, UILabel, NSString, SBAwayMediaControlsView, NSTimer;
@protocol SBAwayDateViewDelegate;

__attribute__((visibility("hidden")))
@interface SBAwayDateView : XXUnknownSuperclass {
	NSTimer *_dateTimer;
	TPLCDTextView *_timeLabel;
	TPLCDTextView *_dateAndTetheringLabel;
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
- (void)_createFormattersIfNecessary;
- (void)_tearDownMediaControlsView;
- (id)controlsView;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;
- (BOOL)isMediaControlsShowingOverlays;
- (BOOL)isShowingControls;
- (id)labelWithFontSize:(float)fontSize origin:(CGPoint)origin;
- (id)labelWithFontSize:(float)fontSize origin:(CGPoint)origin fontName:(const char *)name;
- (id)newNowPlayingLabelWithFont:(id)font color:(id)color;
- (void)removeFromSuperview;
- (void)resizeAndPositionNowPlayingLabels;
- (void)setAlbum:(id)album;
- (void)setArtist:(id)artist;
- (void)setIsShowingControls:(BOOL)controls;
- (void)setVisible:(BOOL)visible;
- (void)update;
- (void)updateClock;
- (void)updateClockFormat;
@end

