/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>


@interface SBAccelerometerInterface : NSObject {
	NSLock *_lock;
	double _samplingInterval;
	double _topDisplayLastUpdateTime;
	double _topDisplayInterval;
	NSMutableArray *_clients;
}
+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (void)_clientInvalidated:(id)invalidated;
- (void)accelerometerDataReceived:(double)received x:(float)x y:(float)y z:(float)z type:(unsigned)type;
- (void)clientRequestedAccelerometerEvents:(unsigned)events updateInterval:(double)interval xThreshold:(float)threshold yThreshold:(float)threshold4 zThreshold:(float)threshold5 auditToken:(XXStruct_kUSYWB *)token;
- (void)dealloc;
- (void)updateSettings;
@end

