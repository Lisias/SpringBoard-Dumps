/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSearchResultsAction.h"

@class UIViewController;

__attribute__((visibility("hidden")))
@interface SBSearchResultsViewControllerAction : SBSearchResultsAction {
	id _completionBlock;
	UIViewController *_viewController;
}
@property(copy, nonatomic) id completionBlock;
@property(retain, nonatomic) UIViewController *viewController;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(id)completion;
@end
