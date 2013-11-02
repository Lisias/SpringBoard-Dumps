/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconAccessoryImage.h"


__attribute__((visibility("hidden")))
@interface SBIconSashImage : SBIconAccessoryImage {
}
+ (id)_baseImage;
+ (float)_labelMaxFontSize;
+ (float)_labelMinFontSize;
+ (CGPoint)_sashCenterPoint;
+ (UIEdgeInsets)_sashImageInsets;
+ (float)_sashWidth;
+ (BOOL)_showsLabel;
+ (id)creationBlockForText:(id)text;
+ (id)sashWithText:(id)text;
- (id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation text:(id)text;
- (CGRect)accessoryFrameForIconBounds:(CGRect)iconBounds;
- (id)countedMapKey;
- (void)dealloc;
@end
