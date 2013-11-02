/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBIconLabel : XXUnknownSuperclass {
	NSString *_label;
	unsigned _drawMoreLegibly : 1;
	unsigned _inDock : 1;
	unsigned _ellipsizesText : 1;
	unsigned _kerningAllowed : 1;
	unsigned _onWallpaper : 1;
}
- (void)dealloc;
- (id)description;
- (void)drawRect:(CGRect)rect;
- (void)setDisplaysOnWallpaper:(BOOL)wallpaper;
- (void)setEllipsizesText:(BOOL)text;
- (void)setInDock:(BOOL)dock;
- (void)setKerningAllowed:(BOOL)allowed;
- (void)setText:(id)text;
@end

