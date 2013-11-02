/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBulletinAttachmentFactory : XXUnknownSuperclass {
}
+ (id)_genericImageForAttachmentType:(int)attachmentType;
+ (id)_imageByCroppingOrPaddingImage:(id)image toSize:(CGSize)size;
+ (id)_imageFromPNGData:(id)pngdata;
+ (id)_listImageForAttachmentType:(int)attachmentType thumbnailData:(id)data forFloatingAlert:(BOOL)floatingAlert;
+ (id)_nAttachments:(unsigned)attachments;
+ (id)_nMoreAttachments:(unsigned)attachments;
+ (id)bannerImageForAttachmentType:(int)attachmentType thumbnailData:(id)data;
+ (CGSize)bannerImageSizeForAttachmentType:(int)attachmentType thumbnailWidth:(float)width height:(float)height;
+ (id)bannerTextForAdditionalAttachments:(unsigned)additionalAttachments showingImage:(BOOL)image;
+ (id)bannerThumbnailConstraintsForAttachmentType:(int)attachmentType;
+ (id)listImageForAttachmentType:(int)attachmentType thumbnailData:(id)data;
+ (CGSize)listImageSizeForAttachmentType:(int)attachmentType thumbnailWidth:(float)width height:(float)height;
+ (id)listTextForAdditionalAttachmentCount:(unsigned)additionalAttachmentCount;
+ (id)listThumbnailConstraintsForAttachmentType:(int)attachmentType;
+ (id)lockScreenFloatingImageForAttachmentType:(int)attachmentType thumbnailData:(id)data;
+ (id)lockScreenFloatingThumbnailContraintsForAttachmentType:(int)attachmentType;
@end

