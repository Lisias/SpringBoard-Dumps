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
	BOOL _field4;
	float _field5;
	int _field6;
} XXStruct_3uUjXA;

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

typedef struct __IOHIDEvent *IOHIDEventRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

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

typedef struct CATransform3D {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
	float _field7;
	float _field8;
	float _field9;
	float _field10;
	float _field11;
	float _field12;
	float _field13;
	float _field14;
	float _field15;
	float _field16;
} CATransform3D;

typedef struct __CTCall *CTCallRef;

typedef struct __CFString *CFStringRef;

typedef struct __WiFiManagerClient WiFiManagerClient;

typedef struct __WiFiDeviceClient WiFiDeviceClient;

typedef struct __WiFiNetwork WiFiNetwork;

typedef struct __SCDynamicStore *SCDynamicStoreRef;

typedef struct dispatch_source_s dispatch_source_s;

typedef struct __CFBoolean *CFBooleanRef;

typedef struct CGImage *CGImageRef;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct __CFBundle *CFBundleRef;

typedef struct __CFMachPort *CFMachPortRef;

typedef struct CGPath *CGPathRef;

typedef struct __CFCharacterSet *CFCharacterSetRef;

typedef struct dispatch_group_s dispatch_group_s;

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

typedef struct UIEdgeInsets {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
} UIEdgeInsets;

typedef struct {
	int type;
	unsigned pathIndex;
	CGPoint location;
	CGPoint previousLocation;
	float totalDistanceTraveled;
	int interfaceOrientation;
	int previousInterfaceOrientation;
} XXStruct_DSYOgA;

typedef struct __SBGestureContext *SBGestureContextRef;

typedef struct CGContext *CGContextRef;


