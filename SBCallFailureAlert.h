/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBCallFailureAlert : SBAlert {
	long _causeCode;
	NSString *_address;
	int _uid;
	CTCallRef _call;
}
+ (void)activateForCall:(CTCallRef)call causeCode:(long)code;
+ (BOOL)shouldDisplayForCauseCode:(long)causeCode modemCauseCode:(long)code;
+ (void)test;
- (id)initWithCauseCode:(long)causeCode call:(CTCallRef)call;
- (void)activateWhenPossible;
- (int)addressBookUID;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (CTCallRef)call;
- (id)callAddress;
- (long)causeCode;
- (void)dealloc;
- (void)setCallAddress:(id)address;
@end

