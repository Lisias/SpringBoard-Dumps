/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, UIBezierPath;

__attribute__((visibility("hidden")))
@interface SBResetProgressView : XXUnknownSuperclass {
	UIColor *_progressColor;
	UIBezierPath *_path;
	float _resetProgress;
}
- (id)_outlinePath;
- (id)_progressColor;
- (void)dealloc;
- (void)drawRect:(CGRect)rect;
- (void)setResetProgress:(float)progress;
@end

