/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"


@interface SBCFBundle : NSObject {
	CFBundleRef _cfBundle;
}
- (id)initWithCFBundle:(CFBundleRef)cfbundle;
- (id)initWithPath:(id)path;
- (id)bundleIdentifier;
- (CFBundleRef)cfBundle;
- (void)dealloc;
- (id)executablePath;
- (id)infoDictionary;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)key value:(id)value table:(id)table;
- (id)pathForResource:(id)resource ofType:(id)type;
@end

