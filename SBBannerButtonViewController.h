/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSArray;
@protocol SBBannerButtonViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBBannerButtonViewController : XXUnknownSuperclass {
	NSArray *_buttons;
	id<SBBannerButtonViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBBannerButtonViewControllerDelegate> delegate;
- (id)_buttonForActionTitle:(id)actionTitle;
- (void)_buttonPressed:(id)pressed;
- (id)_buttonView;
- (void)dealloc;
- (void)loadView;
- (CGSize)preferredContentSize;
- (void)setButtonTitles:(id)titles;
@end

