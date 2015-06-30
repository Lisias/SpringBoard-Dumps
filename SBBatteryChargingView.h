/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


@interface SBBatteryChargingView : XXUnknownSuperclass {
	int _type;
	UIImageView *_topBatteryView;
	UIImageView *_bottomBatteryView;
	UIImage *_lastBatteryImage;
	UILabel *_percentLabel;
	int _lastBatteryIndex;
	int _lastBatteryPercentage;
	unsigned _showReflection : 1;
}
+ (float)batteryHeightForType:(int)type;
+ (CGSize)defaultSizeForType:(int)type;
+ (int)redChargeIndexForType:(int)type;
- (id)initWithFrame:(CGRect)frame type:(int)type;
- (void)_batteryStatusChanged:(id)changed;
- (int)_currentBatteryIndex;
- (id)_imageFormatString;
- (void)dealloc;
- (void)setShowsReflection:(BOOL)reflection;
@end

