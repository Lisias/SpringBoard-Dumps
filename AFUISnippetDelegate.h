/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "SpringBoard-Structs.h"


@protocol AFUISnippetDelegate <NSObject>
- (void)snippetController:(id)controller changeSizeTo:(CGSize)to;
- (id)snippetController:(id)controller domainObjectForIdentifier:(id)identifier;
- (void)snippetController:(id)controller sendGenericAceCommand:(id)command;
- (id)snippetControllerEffectiveBundleForCoreLocation:(id)coreLocation;
- (BOOL)snippetControllerIsDevicePasscodeLocked:(id)locked;
- (void)snippetControllerRemoveView:(id)view;
- (id)snippetControllerViewController:(id)controller;
@end

