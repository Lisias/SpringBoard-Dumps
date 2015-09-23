/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAssistantTourGuideController : XXUnknownSuperclass <AFUIUtteranceViewDelegate, SBAssistantGuideDomainListDelegate> {
	SBAssistantTourGuideView *_view;
	SBAssistantGuideDomainListController *_domainListController;
	SBAssistantGuideSectionListController *_sectionListController;
	SBAssistantGuideModel *_model;
}
+ (float)peekAmount;
- (BOOL)_affectsMagicPocket;
- (void)_backButtonHit:(id)hit;
- (id)_model;
- (id)_view;
- (BOOL)_wantsUnmodifiedHeight;
- (void)assistantShowSectionsForDomainAtIndex:(unsigned)index;
- (void)dealloc;
- (float)peekAmount;
- (void)revealGuide;
- (void)setMode:(int)mode;
- (void)setUtteranceText:(id)text;
- (void)utteranceViewInfoButtonHit:(id)hit;
- (id)view;
@end

