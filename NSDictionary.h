/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSDictionary.h>
#import "SpringBoard-Structs.h"


@interface NSDictionary (CTHelpers)
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

@interface NSDictionary (SBWiFiAdditions)
- (int)compareNetworkDictionaryAscending:(id)ascending;
@end

@interface NSDictionary (SBOptimizedCombination)
- (id)dictionaryByAddingEntriesFromDictionary:(id)dictionary;
@end

@interface NSDictionary (SBTypeSafety)
- (id)objectForKey:(id)key ofClass:(Class)aClass;
@end

