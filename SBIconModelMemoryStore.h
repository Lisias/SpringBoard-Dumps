/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconModelStore.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SBIconModelMemoryStore : XXUnknownSuperclass <SBIconModelStore> {
	NSDictionary *_currentState;
	NSDictionary *_desiredState;
}
@property(retain, nonatomic) NSDictionary *currentState;
@property(retain, nonatomic) NSDictionary *desiredState;
- (id)initWithCurrentState:(id)currentState desiredState:(id)state;
- (void)dealloc;
- (BOOL)deleteCurrentIconState:(id *)state;
- (BOOL)deleteDesiredIconState:(id *)state;
- (id)loadCurrentIconState:(id *)state;
- (id)loadDesiredIconState:(id *)state;
- (BOOL)saveCurrentIconState:(id)state error:(id *)error;
- (BOOL)saveDesiredIconState:(id)state error:(id *)error;
@end

