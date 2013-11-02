/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBLaunchdUtilities : NSObject {
}
+ (id)allJobLabels;
+ (BOOL)createJobWithLabel:(id)label path:(id)path arguments:(id)arguments environment:(id)environment standardOutputPath:(id)path5 standardErrorPath:(id)path6 waitForDebugger:(BOOL)debugger seatbeltProfilePath:(id)path8 machServices:(id)services;
+ (void)deleteJobWithLabel:(id)label;
+ (int)lastExitStatusForLabel:(id)label;
+ (int)pidForLabel:(id)label;
+ (BOOL)startJobWithLabel:(id)label;
+ (BOOL)stopJobWithLabel:(id)label;
@end

