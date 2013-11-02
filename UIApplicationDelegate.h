/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "SpringBoard-Structs.h"


@protocol UIApplicationDelegate <NSObject>
@optional
- (void)application:(id)application didChangeStatusBarFrame:(CGRect)frame;
- (void)application:(id)application didChangeStatusBarOrientation:(int)orientation;
- (void)application:(id)application didFailToRegisterForRemoteNotificationsWithError:(id)error;
- (BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
- (void)application:(id)application didReceiveLocalNotification:(id)notification;
- (void)application:(id)application didReceiveRemoteNotification:(id)notification;
- (void)application:(id)application didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
- (BOOL)application:(id)application handleOpenURL:(id)url;
- (BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
- (void)application:(id)application willChangeStatusBarFrame:(CGRect)frame;
- (void)application:(id)application willChangeStatusBarOrientation:(int)orientation duration:(double)duration;
- (void)applicationDidBecomeActive:(id)application;
- (void)applicationDidEnterBackground:(id)application;
- (void)applicationDidFinishLaunching:(id)application;
- (void)applicationDidReceiveMemoryWarning:(id)application;
- (void)applicationProtectedDataDidBecomeAvailable:(id)applicationProtectedData;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)applicationProtectedData;
- (void)applicationSignificantTimeChange:(id)change;
- (void)applicationWillEnterForeground:(id)application;
- (void)applicationWillResignActive:(id)application;
- (void)applicationWillTerminate:(id)application;
@end

