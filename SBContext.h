/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class CALayerHost;

@interface SBContext : NSObject {
	unsigned _contextId;
	float _windowLevel;
	CALayerHost *_layerHost;
}
@property(assign, nonatomic) unsigned contextId;
@property(retain, nonatomic) CALayerHost *layerHost;
@property(assign, nonatomic) float windowLevel;
- (void)dealloc;
- (id)description;
@end
