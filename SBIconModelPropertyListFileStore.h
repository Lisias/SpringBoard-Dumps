/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBIconModelPropertyListFileStore : XXUnknownSuperclass <SBIconModelStore> {
	NSURL *_currentIconStateURL;
	NSURL *_desiredIconStateURL;
}
@property(retain, nonatomic) NSURL *currentIconStateURL;
@property(retain, nonatomic) NSURL *desiredIconStateURL;
- (BOOL)_delete:(id)aDelete error:(id *)error;
- (id)_load:(id)load error:(id *)error;
- (BOOL)_save:(id)save url:(id)url error:(id *)error;
- (void)dealloc;
- (BOOL)deleteCurrentIconState:(id *)state;
- (BOOL)deleteDesiredIconState:(id *)state;
- (id)loadCurrentIconState:(id *)state;
- (id)loadDesiredIconState:(id *)state;
- (BOOL)saveCurrentIconState:(id)state error:(id *)error;
- (BOOL)saveDesiredIconState:(id)state error:(id *)error;
@end

