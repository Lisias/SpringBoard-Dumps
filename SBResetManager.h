/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface SBResetManager : NSObject {
	BOOL _threadRunning;
	NSLock *_lock;
	int _mode;
	NSLock *_progressLock;
	float _progress;
}
+ (id)sharedInstance;
- (id)init;
- (void)_beginReset:(id)reset;
- (void)_postResetEnded;
- (void)_resetFinished;
- (void)_resetThread;
- (void)beginReset;
- (void)dealloc;
- (float)progress;
- (void)setMode:(int)mode;
- (void)setProgress:(float)progress;
@end

