/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (SBApplicationAdditions)
- (void)addObjectsFromDictionary:(id)dictionary forKeys:(id)keys;
@end

@interface XXUnknownSuperclass (SBArrayStackAdditions)
- (id)pop;
- (id)popObject:(id)object;
- (void)push:(id)push;
- (id)top;
@end

@interface XXUnknownSuperclass (Centerable)
- (void)centerToContentView;
@end

@interface XXUnknownSuperclass (PrefsNotifications)
- (id)_alertStringForPref:(id)pref;
- (id)_callBarringString:(id)string;
- (id)_callForwardingString:(id)string;
- (id)_callWaitingString:(id)string;
- (id)_callingLineIDRestrictionString:(id)string;
- (id)_callingLinePresentationString:(id)string;
- (id)_callingNamePresentationString:(id)string;
- (id)_connectedLineIDRestrictionString:(id)string;
- (id)_connectedLinePresentationString:(id)string;
- (id)_fixedDialingString:(id)string;
- (id)_serviceCenterAddressString:(id)string;
- (id)_simLockString:(id)string;
- (id)_ssPasswordString:(id)string;
- (void)addPrefNotification:(id)notification withUserInfo:(id)userInfo;
- (id)prefsNotificationsAlertString;
@end

@interface XXUnknownSuperclass (CTHelpers)
- (id)callBarringFacility;
- (id)callClass;
- (id)callForwardingReason;
- (id)callingLineIDRestrictionValue;
- (id)callingLinePresentationValue;
- (id)callingNamePresentationValue;
- (id)connectedLineIDRestrictionValue;
- (id)connectedLinePresentationValue;
- (id)enabledString;
- (id)mmiProcedure;
- (id)serviceCenterAddress;
- (CFStringRef)settingType;
- (id)ssServiceType;
@end

@interface XXUnknownSuperclass (AlertItemsAdditions)
- (void)addObjectsOfClass:(Class)aClass toArray:(id)array;
- (id)objectOfClass:(Class)aClass;
@end

@interface XXUnknownSuperclass (Formatting)
- (id)ICCID;
- (id)IMEI;
@end

@interface XXUnknownSuperclass (SBIconListNumberOffset)
- (void)setCurrentPageWithIconListNumber:(int)iconListNumber;
- (void)setNumberOfPagesWithIconListCount:(int)iconListCount;
@end

@interface XXUnknownSuperclass (SpringBoardMetadata)
- (id)cachedApplicationIdentifier;
- (BOOL)cachedArtworkIsPrerendered;
- (id)cachedBundleIdentifier;
- (id)cachedSoftwareType;
- (id)cachedTitle;
@end

@interface XXUnknownSuperclass (SBOptimizedCombination)
- (id)dictionaryByAddingEntriesFromDictionary:(id)dictionary;
@end

@interface XXUnknownSuperclass (SBDeviceLockEntryFieldExtras)
- (BOOL)isNewline;
- (BOOL)isSingleCharacterAndMemberOfSet:(CFCharacterSetRef)set;
@end

@interface XXUnknownSuperclass (LastIndex)
- (unsigned)lastIndex;
@end

@interface XXUnknownSuperclass (SBTypeSafety)
- (id)objectForKey:(id)key ofClass:(Class)aClass;
@end

@interface XXUnknownSuperclass (SBAssistantUtilities)
- (BOOL)isAssistantTelephonyURL;
@end

