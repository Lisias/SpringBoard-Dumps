/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "VSSpeechSynthesizerDelegate.h"
#import "VSRecognitionSessionDelegate.h"
#import "SBSlidingAlertDisplay.h"

@class VSRecognitionSession, NSInvocation, NSMutableIndexSet, NSTimer, AVController, NSDictionary, UITextField, UIKeyboard, NSMutableArray, NSMutableSet;

@interface SBVoiceControlAlertDisplay : SBSlidingAlertDisplay <VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate> {
	VSRecognitionSession *_session;
	BOOL _wasRecognizing;
	BOOL _didConfigureRouting;
	NSInvocation *_postSoundInvocation;
	UIView *_leftFadeView;
	UIView *_rightFadeView;
	UIView *_labelsView;
	int _clipCount;
	int _currentClipNo;
	BOOL _voiceTranscription;
	UITextField *_textField;
	UIKeyboard *_keyboard;
	NSMutableArray *_transcripts;
	NSMutableArray *_voiceClips;
	AVController *_avController;
	NSMutableArray *_waves;
	NSMutableSet *_labels;
	int _keywordCount;
	int _lastKeywordIndex;
	NSTimer *_levelTimer;
	NSMutableIndexSet *_occupiedLabelSlots;
	NSDictionary *_locStrings;
	BOOL _labelsOn;
	BOOL _animatingToCall;
	BOOL _didDismiss;
	BOOL _awaitingButtonRelease;
	BOOL _isBecomingVisible;
	BOOL _labelsHaveDisplayed;
}
+ (id)newBottomBarForInstance:(id)instance;
+ (id)newBottomLockBarForDisplay:(id)display;
- (id)initWithFrame:(CGRect)frame session:(id)session;
- (void)_animateToAwayInCallController;
- (BOOL)_attemptPlaySound:(unsigned long)sound synchronously:(BOOL)synchronously;
- (void)_configureRoutingIfNecessary;
- (void)_continueRecognitionAction;
- (void)_continueWithRecognitionAction;
- (id)_desiredRouteDictionary;
- (void)_dismissIfWeHavent;
- (void)_dismissSlightlyLater;
- (void)_exitVoiceTranscriptView;
- (void)_fadeOutCurrentLabels;
- (void)_finishedFadingToAwayInCallController;
- (void)_getAudioClipsFromDirectory;
- (void)_invalidateRouting;
- (int)_keywordCount;
- (void)_keywordsChanged:(id)changed;
- (void)_labelFinishedAnimating:(id)animating finished:(id)finished label:(id)label;
- (id)_localizedStringForKey:(id)key;
- (void)_mediaPlayerDied;
- (void)_notifyDeviceTermination;
- (id)_openTelURL:(id)url;
- (void)_performConfirmationAction;
- (void)_performNoMatchFound;
- (void)_performSoundCompletionAction;
- (void)_pickedRouteChanged:(id)changed;
- (void)_playAudioAtPath:(id)path;
- (void)_playSound:(unsigned long)sound synchronously:(BOOL)synchronously;
- (void)_promptUserForVoiceTranscription;
- (void)_resetSession;
- (void)_setWaveAlpha:(float)alpha withDuration:(double)duration;
- (void)_speakFeedbackText;
- (void)_speakText:(id)text;
- (void)_startKeywordIfNecessary;
- (void)_startLabelForKeywordAtIndex:(int)index now:(BOOL)now delayStart:(BOOL)start;
- (void)_startMovingLabels;
- (void)_startSession;
- (void)_startTrancribeAudio;
- (void)_startUpdatingLevels;
- (void)_stopMovingLabels;
- (void)_stopUpdatingLevels;
- (void)_updateLevels;
- (void)_userEnteredTextForVoiceClip:(id)voiceClip;
- (BOOL)_wasTriggeredByMenu;
- (void)alertDisplayWillBecomeVisible;
- (void)alertWillBeDismissed;
- (BOOL)alphanumericKeyboard;
- (void)dealloc;
- (void)handleButtonUpCancel;
- (void)handleHeadsetButtonUpFromActivation:(BOOL)activation;
- (void)lockBarUnlocked:(id)unlocked;
- (void)recognitionSession:(id)session didCompleteActionWithError:(id)error;
- (void)recognitionSession:(id)session didFinishSpeakingFeedbackStringWithError:(id)error;
- (id)recognitionSession:(id)session openURL:(id)url;
- (void)recognitionSessionDidBeginAction:(id)recognitionSession;
- (BOOL)recognitionSessionWillBeginAction:(id)recognitionSession;
- (void)setMiddleContentAlpha:(float)alpha;
- (void)setStatusText:(id)text;
- (void)setTitleText:(id)text;
- (void)updateDesktopImage:(id)image;
@end

