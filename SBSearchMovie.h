/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSearchMovie : XXUnknownSuperclass {
	UIImage *_posterImage;
	NSURLSessionDataTask *_dataTask;
	SBSearchMovieCell *_cell;
}
@property(retain) SBSearchMovieCell *cell;
@property(retain) NSURLSessionDataTask *dataTask;
@property(retain) UIImage *posterImage;
- (void)dealloc;
- (void)loadPosterForCell:(id)cell;
@end

