/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBLaunchdUtilities : XXUnknownSuperclass {
}
+ (id)allJobLabels;
+ (BOOL)createJobWithLabel:(id)label path:(id)path arguments:(id)arguments environment:(id)environment standardOutputPath:(id)path5 standardErrorPath:(id)path6 machServices:(id)services threadPriority:(long long)priority waitForDebugger:(BOOL)debugger denyCreatingOtherJobs:(BOOL)jobs runAtLoad:(BOOL)load disableASLR:(BOOL)aslr;
+ (void)deleteJobWithLabel:(id)label;
+ (int)lastExitStatusForLabel:(id)label;
+ (int)pidForLabel:(id)label;
+ (void)setJetsamPriority:(long long)priority forJobLabel:(id)jobLabel isFrontmost:(BOOL)frontmost;
@end

