/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"

@class NSTimer, SBResetProgressView;

@interface SBResetView : UIView {
	SBResetProgressView *_progressView;
	NSTimer *_progressTimer;
}
- (id)initWithFrame:(CGRect)frame;
- (void)_resetFinished:(id)finished;
- (void)_resetStarted:(id)started;
- (void)_updateProgress;
- (void)dealloc;
@end

