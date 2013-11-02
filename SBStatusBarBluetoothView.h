/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarContentView.h"

@class UIImageView, UIImage;

@interface SBStatusBarBluetoothView : SBStatusBarContentView {
	UIImage *_icon;
	BOOL _animating;
	UIImageView *_activeView;
	UIImageView *_baseLayer;
	BOOL _isStarted;
	BOOL _showBluetoothView;
}
+ (void)initialize;
- (id)init;
- (void)_btConnectionStatusChanged:(id)changed;
- (void)_btDeviceConnected;
- (void)_btDeviceDisconnected:(id)disconnected;
- (void)_btPowerPrefChanged:(id)changed;
- (void)_btStatusChanged:(id)changed;
- (int)_effectiveMode;
- (void)_setupActiveView;
- (void)_start;
- (void)animationDidStop:(id)animation;
- (int)btStatus;
- (void)dealloc;
- (id)icon;
- (BOOL)isVisible;
- (float)padding;
- (int)priority;
- (void)setVisible:(BOOL)visible;
- (void)start;
- (void)stop;
@end
