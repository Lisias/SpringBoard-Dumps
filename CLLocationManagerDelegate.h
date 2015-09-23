/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol CLLocationManagerDelegate <NSObject>
@optional
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
- (void)locationManager:(id)manager didDetermineState:(int)state forRegion:(id)region;
- (void)locationManager:(id)manager didEnterRegion:(id)region;
- (void)locationManager:(id)manager didExitRegion:(id)region;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManager:(id)manager didFinishDeferredUpdatesWithError:(id)error;
- (void)locationManager:(id)manager didRangeBeacons:(id)beacons inRegion:(id)region;
- (void)locationManager:(id)manager didStartMonitoringForRegion:(id)region;
- (void)locationManager:(id)manager didUpdateHeading:(id)heading;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
- (void)locationManager:(id)manager didVisit:(id)visit;
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)monitoring withError:(id)error;
- (void)locationManager:(id)manager rangingBeaconsDidFailForRegion:(id)rangingBeacons withError:(id)error;
- (void)locationManagerDidPauseLocationUpdates:(id)locationManager;
- (void)locationManagerDidResumeLocationUpdates:(id)locationManager;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)locationManager;
@end

