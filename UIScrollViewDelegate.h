/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol UIScrollViewDelegate <NSObject>
@optional
- (void)scrollViewDidEndDecelerating:(id)scrollView;
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)scrollViewDidScrollToTop:(id)scrollView;
- (BOOL)scrollViewShouldScrollToTop:(id)scrollView;
- (void)scrollViewWillBeginDecelerating:(id)scrollView;
- (void)scrollViewWillBeginDragging:(id)scrollView;
- (id)viewForZoomingInScrollView:(id)scrollView;
@end

