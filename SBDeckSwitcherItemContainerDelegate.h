/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol SBDeckSwitcherItemContainerDelegate <NSObject>
- (BOOL)canSelectDisplayItemOfContainer:(id)container numberOfTaps:(int)taps;
- (CGRect)frameForPageViewOfContainer:(id)container fullyPresented:(BOOL)presented;
- (BOOL)isDisplayItemOfContainerRemovable:(id)containerRemovable;
- (void)killDisplayItemOfContainer:(id)container withVelocity:(float)velocity;
- (float)minimumVerticalTranslationForKillingOfContainer:(id)container;
- (void)scrollViewKillingProgressUpdated:(float)updated ofContainer:(id)container;
- (void)selectedDisplayItemOfContainer:(id)container;
- (BOOL)shouldShowIconAndLabelOfContainer:(id)container;
@end

