/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"
#import "SBFolderView.h"

@class SBFolderBackgroundView, UIView, UITapGestureRecognizer, SBFolderSettings, UIPinchGestureRecognizer, UILongPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, _UISettingsKeyObserver> {
	UIView *_scrollClipView;
	SBFolderBackgroundView *_backgroundView;
	UITapGestureRecognizer *_tapGesture;
	UIPinchGestureRecognizer *_pinchGesture;
	UILongPressGestureRecognizer *_longPressGesture;
	SBFolderSettings *_folderSettings;
}
- (id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map;
- (void)_configureGestures;
- (CGRect)_frameForScalingView;
- (void)_handleLongPressGesture:(id)gesture;
- (void)_handleOutsideTap:(id)tap;
- (void)_handlePinchGesture:(id)gesture;
- (void)_layoutSubviews;
- (BOOL)_showsTitle;
- (BOOL)_tapToCloseGestureRecognizer:(id)closeGestureRecognizer shouldReceiveTouch:(id)touch;
- (float)_titleFontSize;
- (void)dealloc;
- (void)didAnimate;
- (void)fadeContentForMagnificationFraction:(float)magnificationFraction;
- (void)fadeContentForMinificationFraction:(float)minificationFraction;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
- (BOOL)locationCountsAsInsideFolder:(CGPoint)folder;
- (void)setBackgroundAlpha:(float)alpha;
- (void)setLegibilitySettings:(id)settings;
- (void)settings:(id)settings changedValueForKey:(id)key;
- (CGPoint)visibleFolderRelativeImageCenterForIcon:(id)icon;
- (void)willAnimate;
@end

