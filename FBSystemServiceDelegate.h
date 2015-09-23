/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol FBSystemServiceDelegate <NSObject>
- (void)systemService:(id)service canActivateApplication:(id)application withResult:(id)result;
@optional
- (void)systemService:(id)service handleActions:(id)actions origin:(id)origin withResult:(id)result;
@required
- (void)systemService:(id)service handleOpenApplicationRequest:(id)request options:(id)options origin:(id)origin withResult:(id)result;
- (void)systemService:(id)service handleOpenURLRequest:(id)request application:(id)application options:(id)options origin:(id)origin withResult:(id)result;
@optional
- (void)systemService:(id)service isPasscodeLockedOrBlockedWithResult:(id)result;
- (void)systemServicePrepareForExit:(id)exit andRelaunch:(BOOL)relaunch;
- (void)systemServicePrepareForShutdown:(id)shutdown andReboot:(BOOL)reboot;
- (void)systemServicePrepareForShutdown:(id)shutdown withOptions:(unsigned)options;
@end

