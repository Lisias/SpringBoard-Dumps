/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class UIColor;
@protocol SBSearchResultDetailsViewControllerDelegate;

@protocol SBSearchResultDetailsViewController <NSObject>
@property(assign) id<SBSearchResultDetailsViewControllerDelegate> actionDelegate;
@optional
@property(retain) UIColor *contentBackgroundColor;
@required
@property(readonly, assign) BOOL wantsInset;
+ (id)viewControllerForResult:(id)result inSection:(id)section;
- (void)loadWithCompletionBlock:(id)completionBlock;
@end

