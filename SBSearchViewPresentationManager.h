/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSearchViewPresentationManager : XXUnknownSuperclass {
	int _searchViewPresentationState;
	float _searchViewPreviousProgress;
	SBSearchViewController *_searchViewController;
}
- (id)initWithSearchViewController:(id)searchViewController;
- (void)_setState:(int)state;
- (void)updateStateWithProgress:(float)progress fromBreadcrumb:(BOOL)breadcrumb animated:(BOOL)animated;
- (void)updateToState:(int)state animated:(BOOL)animated;
@end

