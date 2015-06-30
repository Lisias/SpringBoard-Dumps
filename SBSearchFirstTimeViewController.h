/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBSearchFirstTimeViewController : XXUnknownSuperclass {
	SBSearchResultsActionManager *_actionManager;
	UITextView *_textView;
	NSLayoutConstraint *_widthConstraint;
	NSLayoutConstraint *_heightConstraint;
	NSLayoutConstraint *_topConstraint;
	NSLayoutConstraint *_interspaceConstraint;
	NSLayoutConstraint *_marginConstraint;
}
@property(assign) SBSearchResultsActionManager *actionManager;
@property(assign) NSLayoutConstraint *heightConstraint;
@property(assign) NSLayoutConstraint *interspaceConstraint;
@property(assign) NSLayoutConstraint *marginConstraint;
@property(assign) UITextView *textView;
@property(assign) NSLayoutConstraint *topConstraint;
@property(assign) NSLayoutConstraint *widthConstraint;
+ (id)viewController;
- (void)dealloc;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(NSRange)range;
- (void)viewDidLoad;
@end
