/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface NSMutableArray (SBArrayStackAdditions)
- (id)pop;
- (id)popObject:(id)object;
- (void)push:(id)push;
- (id)top;
@end

@interface NSMutableArray (PrefsNotifications)
- (id)_alertStringForPref:(id)pref;
- (id)_callBarringString:(id)string;
- (id)_callForwardingString:(id)string;
- (id)_callWaitingString:(id)string;
- (id)_callingLineIDRestrictionString:(id)string;
- (id)_callingLinePresentationString:(id)string;
- (id)_connectedLineIDRestrictionString:(id)string;
- (id)_connectedLinePresentationString:(id)string;
- (id)_fixedDialingString:(id)string;
- (id)_serviceCenterAddressString:(id)string;
- (id)_simLockString:(id)string;
- (id)_ssPasswordString:(id)string;
- (void)addPrefNotification:(id)notification withUserInfo:(id)userInfo;
- (id)prefsNotificationsAlertString;
@end

