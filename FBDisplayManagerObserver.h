/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol FBDisplayManagerObserver <NSObject>
@optional
- (void)displayManager:(id)manager didConnectDisplay:(id)display;
- (void)displayManager:(id)manager didDisconnectDisplay:(id)display;
- (void)displayManager:(id)manager willConnectDisplay:(id)display;
@end

