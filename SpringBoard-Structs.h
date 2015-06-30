/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone NSZone;

typedef struct {
	BOOL _field1;
	BOOL _field2;
	BOOL _field3;
	float _field4;
	int _field5;
	float _field6;
} XXStruct_3B_lsC;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct __GSEvent *GSEventRef;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct __darwin_pthread_handler_rec darwin_pthread_handler_rec;

typedef struct _opaque_pthread_t {
	long _field1;
	darwin_pthread_handler_rec *_field2;
	BOOL _field3[596];
} opaque_pthread_t;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct __CTCall *CTCallRef;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct _MISProfile *MISProfileRef;

typedef struct {
	unsigned _field1[8];
} XXStruct_kUSYWB;

typedef struct {
	int _field1;
	int _field2;
} XXStruct_K5nmsA;

typedef struct __CTServerConnection *CTServerConnectionRef;

typedef struct CGImage *CGImageRef;

typedef struct CGContext *CGContextRef;

typedef struct __CFString *CFStringRef;

typedef struct __WiFiManagerClient WiFiManagerClient;

typedef struct __WiFiDeviceClient WiFiDeviceClient;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct __WiFiNetwork WiFiNetwork;

typedef struct __SCDynamicStore *SCDynamicStoreRef;

typedef struct dispatch_source_s dispatch_source_s;

typedef struct __CFArray *CFArrayRef;

typedef struct {
	unsigned char voicemailAvailable;
	int voicemailCount;
	long long voicemailID;
} XXStruct_EX3dgA;

typedef struct __CFBoolean *CFBooleanRef;

typedef struct UIEdgeInsets {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
} UIEdgeInsets;

typedef struct __CFDateFormatter *CFDateFormatterRef;

typedef struct {
	int _field1;
	BOOL _field2;
	BOOL _field3;
	BOOL _field4;
	BOOL _field5;
	double _field6;
} XXStruct_fhKmAA;

typedef struct __CFTimeZone *CFTimeZoneRef;

typedef struct CalEventExpirationMonitor CalEventExpirationMonitor;

typedef struct CalAlarmEngine CalAlarmEngine;

typedef struct CalDatabase CalDatabase;

typedef struct __CFBundle *CFBundleRef;

typedef struct __CFMachPort *CFMachPortRef;

typedef struct UIPeripheralAnimationGeometry {
	CGPoint _field1;
	CGPoint _field2;
	CGRect _field3;
	CGAffineTransform _field4;
	float _field5;
} UIPeripheralAnimationGeometry;

typedef struct CGPath *CGPathRef;

typedef struct __CFCharacterSet *CFCharacterSetRef;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct SBProcessTimes {
	double execTime;
	double beginUserCPUElapsedTime;
	double beginSystemCPUElapsedTime;
	double beginIdleCPUElapsedTime;
	double beginApplicationCPUElapsedTime;
} SBProcessTimes;

typedef struct {
	int direction;
	CGRect rect;
} XXStruct_9ihRqB;

typedef struct {
	int type;
	unsigned char pathIndex;
	unsigned char pindex;
	unsigned char pcount;
	struct {
		double timestamp;
		CGPoint point;
	} points[15];
} XXStruct_YrWplC;

typedef struct __SBGestureContext *SBGestureContextRef;


