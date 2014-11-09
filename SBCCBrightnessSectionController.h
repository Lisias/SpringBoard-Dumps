/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBControlCenterSectionViewController.h"
#import "SpringBoard-Structs.h"

@class UIView, SBUIControlCenterSlider, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SBCCBrightnessSectionController : SBControlCenterSectionViewController {
	SBUIControlCenterSlider *_slider;
	UIVisualEffectView *_vibrantDarkenLayer;
	UIView *_tintingDarkenLayer;
	BKSDisplayBrightnessTransactionRef _brightnessTransaction;
}
- (float)_backlightLevel;
- (void)_noteScreenBrightnessDidChange:(id)_noteScreenBrightness;
- (void)_setBacklightLevel:(float)level;
- (BOOL)_shouldDarkenBackground;
- (void)_sliderDidBeginTracking:(id)_slider;
- (void)_sliderDidEndTracking:(id)_slider;
- (void)_sliderValueDidChange:(id)_sliderValue;
- (void)_updateEffects;
- (float)_yOffsetFromCenterForSlider;
- (CGSize)contentSizeForOrientation:(int)orientation;
- (void)dealloc;
- (void)noteSettingsDidUpdate:(id)noteSettings;
- (id)sectionIdentifier;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
@end

