/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSearchResultsModalViewControllerAction.h"

@class MKMapItem;

__attribute__((visibility("hidden")))
@interface SBSearchResultsMapsAction : SBSearchResultsModalViewControllerAction {
	MKMapItem *_mapItem;
}
@property(retain, nonatomic) MKMapItem *mapItem;
- (id)buttonActionTitle;
- (void)dealloc;
- (void)loadModalViewControllerWithCompletionBlock:(id)completionBlock;
- (void)performButtonAction;
@end

