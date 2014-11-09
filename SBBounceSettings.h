/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBounceSettings : XXUnknownSuperclass {
	float _gravity;
	float _velocity;
	float _elasticity;
	float _friction;
	float _resistance;
	float _multiplier;
	float _minVelocityToAssist;
	float _maxVelocityToAssist;
	float _maxVelocityAssistance;
}
@property(assign) float elasticity;
@property(assign) float friction;
@property(assign) float gravity;
@property(assign) float maxVelocityAssistance;
@property(assign) float maxVelocityToAssist;
@property(assign) float minVelocityToAssist;
@property(assign) float multiplier;
@property(assign) float resistance;
@property(assign) float velocity;
- (void)setDefaultValues;
@end

