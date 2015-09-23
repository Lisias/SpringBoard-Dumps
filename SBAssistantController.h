/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAssistantController : SBShowcaseViewController <AFAssistantUIService, UITableViewDataSource, UITableViewDelegate, VSSpeechSynthesizerDelegate, AFSpeechDelegate, SBAssistantViewDelegate, AFUISnippetDelegate, SBAssistantTableViewCellDelegate, SBAssistantTourGuideDelegate, SBDeviceLockViewDelegate, SBDeviceLockViewOwner> {
	id<SBAssistantControllerOwner> _owner;
	SBAssistantView *_assistantDisplay;
	AFConnection *_assistantConnection;
	NSMutableArray *_conversation;
	SAUIAddViews *_tempPendingElements;
	NSMutableArray *_speechQueue;
	NSMutableArray *_tempSpeechQueue;
	NSMutableArray *_repeatQueue;
	NSMutableSet *_modalRequesters;
	NSMutableSet *_snippetsToToss;
	NSMutableSet *_snippetsToFadeAfterToss;
	unsigned _tableAnimationCount;
	VSSpeechSynthesizer *_synthesizer;
	NSString *_spokenLanguageCode;
	BOOL _pendingRecord;
	NSTimer *_statusTimer;
	int _state;
	int _currentPhase;
	NSString *_currentAudioRoute;
	BluetoothDevice *_bluetoothDevice;
	BOOL _awaitingResponse;
	AFUISnippetController *_pinnedSnippet;
	AFUISnippetController *_pendingPinnedSnippet;
	AFUISnippetController *_lastSnippetInTranscript;
	SBAssistantUserUtterance *_pendingSpeechUtterance;
	SBAssistantTourGuideController *_tourGuideSnippet;
	SBAssistantSpaceController *_extraSpace;
	SBAssistantUserUtteranceController *_lastCorrectableUtterance;
	SBAssistantSpeechElement *_currentSpeechElement;
	id _passcodeUnlockCompletionHandler;
	NSMutableArray *_pausedEvents;
	AFSpeechRequestOptions *_activationOptions;
	BOOL _notifiedAfterActivate;
	BOOL _shouldSpeak;
	BOOL _assistantVisible;
	BOOL _expectsFaceContact;
	BOOL _guideDone;
	BOOL _connectionCurrentlyAvailable;
	BOOL _unlockedDeviceWithinAssistant;
	BOOL _requestFinished;
	BOOL _hasAddedToTTS;
	BOOL _hasShownFirstTimeGuide;
	BOOL _delayConnectionEndUntilPhoneCall;
	BOOL _deactivatedForPendingPhoneCall;
	BOOL _registeredForActiveNotifications;
	BOOL _registeredForCallNotifications;
	BOOL _keyboardAnimating;
	BOOL _removedSnippetDuringThisUpdate;
	BOOL _notifyingChangeInLastSnippet;
	BOOL _endVoiceSessionWhenDoneSpeaking;
	NSString *_currentAddViewsIdentifier;
	int _networkErrorIndex;
	BOOL _displayErrorWhenVisible;
	BOOL _didDisplayNotReadyError;
	SBAssistantNavigationController *_viewController;
	NSMutableArray *_nextRecognitionAudioInputPaths;
	BOOL _shouldRouteToReceiver;
	BOOL _audioRouteNeedsUpdate;
	BOOL _enableProxForGesture;
}
@property(retain, nonatomic) BluetoothDevice *bluetoothDevice;
@property(copy) NSString *currentAudioRoute;
@property(assign, nonatomic) id<SBAssistantControllerOwner> owner;
@property(readonly, assign, nonatomic) BOOL unlockedDevice;
@property(assign, nonatomic) BOOL willOpenTelURL;
+ (BOOL)canActivateWithActiveTouchesUsingOptions:(id)activeTouchesUsingOptions;
+ (BOOL)deviceSupported;
+ (BOOL)preferenceEnabled;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (BOOL)shouldEnterAssistant;
+ (BOOL)supportedAndEnabled;
- (id)init;
- (id)_addAceView:(id)view phase:(int)phase;
- (void)_addAceViewAdornmentsIfNecessary:(id)necessary;
- (void)_addSnippetToFadeAfterToss:(id)fadeAfterToss;
- (void)_addSnippetToToss:(id)toss;
- (void)_addSpeakableTextForExchange:(id)exchange listenFollowingSpeech:(BOOL)speech;
- (void)_addTemporaryMessageToSpeechQueue:(id)speechQueue;
- (void)_addViews:(id)views;
- (void)_appendExchange:(id)exchange;
- (void)_appendSnippet:(id)snippet;
- (void)_appendUserUtterance:(id)utterance beginProcessing:(BOOL)processing;
- (id)_assistantView;
- (void)_beginConversationUpdates;
- (CGSize)_calculatedViewSizeForSnippet:(id)snippet suggestedHeight:(float)height;
- (void)_callStateChanged:(id)changed;
- (void)_cancelListenTimer;
- (void)_cancelScrollToPinned;
- (void)_cleanUpConnectionIfNeeded;
- (void)_cleanUpPreheatedConnection;
- (void)_clearConnection;
- (void)_clearConversation;
- (void)_clearDeactivatedForPendingPhoneCall;
- (void)_clearEducateUserGestureTimer;
- (void)_clearLastCorrectableUtterance;
- (void)_clearModality;
- (void)_clearPausedEvents;
- (void)_clearRepeatQueue;
- (void)_clearScreen;
- (void)_clearState;
- (void)_clearStatusTimer;
- (void)_clearTempElementTimer;
- (void)_clearTempElements;
- (void)_clearTempSpeechTimer;
- (void)_clearTemporarySpeechQueue;
- (id)_connection;
- (id)_connectionIfExists;
- (void)_delayedDeactivateAssistant;
- (void)_detachFromAssistantView;
- (void)_displayDidLaunchFrontmost:(id)_display;
- (void)_displayNotReadyError;
- (void)_endBTVoiceSession;
- (void)_endConversationUpdates;
- (void)_entryFinishedWithPassword:(id)password;
- (void)_executeOrPendCommand:(id)command;
- (id)_extraSpace;
- (void)_forceSnippetsToResignFirstResponder;
- (void)_handleAddViewsCommand:(id)command;
- (void)_handleAudioInput;
- (void)_handleAudioTimeout;
- (void)_handleClearScreenCommand:(id)command;
- (void)_handleCommand:(id)command;
- (BOOL)_handleConfirmationPhaseAddViews:(id)views phase:(int)phase;
- (void)_handleError:(id)error;
- (void)_handleOpenLinkCommand:(id)command;
- (void)_handlePresentPasscodeUnlockCommand:(id)command;
- (void)_handleRepeatItCommand:(id)command;
- (void)_handleSayItCommand:(id)command;
- (void)_handleShowGuideCommand:(id)command;
- (BOOL)_haveAudioInputPaths;
- (BOOL)_isModal;
- (BOOL)_isSpeaking;
- (void)_keyboardDidHide:(id)_keyboard;
- (void)_keyboardDidShow:(id)_keyboard;
- (void)_keyboardWillHide:(id)_keyboard;
- (void)_keyboardWillShow:(id)_keyboard;
- (id)_lastNonSpaceSnippet;
- (unsigned)_lastNonSpaceSnippetIndex;
- (id)_lastNonStaticSnippetAfterUserUtterance;
- (unsigned)_lastNonTemporarySnippetAbsentFrom:(id)from;
- (id)_lastReplaceableTemporarySnippet;
- (void)_listen;
- (void)_listenAttemptDidFinish;
- (void)_listenFailed;
- (void)_micButtonHit:(id)hit;
- (void)_notifyAllSnippetsOfInterruption;
- (void)_notifyFirstResponseReceivedAndHideGuideIfNecessary;
- (void)_notifyWantsFullRevealIfNecessary:(id)necessary;
- (BOOL)_phaseForTemporaryQueue:(int)temporaryQueue;
- (int)_phaseFromPhaseString:(id)phaseString;
- (BOOL)_phaseIsInterstitial:(int)interstitial;
- (BOOL)_phaseIsTemporary:(int)temporary;
- (BOOL)_phaseReplacesPreviousAvailableSnippetContents:(int)contents;
- (void)_pickableAudioRoutesChanged:(id)changed;
- (void)_pinSnippetToTop:(id)top;
- (void)_playSound:(unsigned long)sound;
- (void)_positionSnippet:(id)snippet aboveKeyboard:(CGRect)keyboard withCurve:(int)curve duration:(double)duration atPosition:(int)position positionHandler:(id)handler;
- (unsigned long)_prepareSoundFromString:(id)string;
- (void)_processSnippetTosses;
- (void)_processSpeechQueue;
- (void)_registerForActiveNotifications:(BOOL)activeNotifications;
- (void)_registerForCallNotification:(BOOL)callNotification;
- (void)_reloadSnippet:(id)snippet animation:(int)animation;
- (void)_removeSnippet:(id)snippet;
- (void)_removeTemporaryElementsExcept:(id)except;
- (void)_repeatLastResponseWithFallback:(id)fallback;
- (unsigned)_replaceLastSnippetWithSameSnippetClass:(id)sameSnippetClass withPhase:(int)phase replacePhase:(int)phase3;
- (float)_requiredExtraSpaceFromIndex:(unsigned)index;
- (float)_requiredSpaceForCurrentPin;
- (void)_restoreFromKeyboardShownWithCurve:(int)curve duration:(double)duration positionHandler:(id)handler;
- (CGSize)_rowSize:(unsigned)size;
- (CGSize)_rowSize:(unsigned)size suggestedHeight:(float)height;
- (void)_say:(id)say;
- (void)_say:(id)say forced:(BOOL)forced;
- (void)_scheduleEducateUserGestureIfNecessary;
- (void)_scheduleScrollToPinned;
- (void)_scheduleStatusTimer;
- (void)_scheduleTempElementTimer;
- (void)_scheduleTempSpeechTimer;
- (void)_scrollToPinnedTimer;
- (void)_sendActivationNotification;
- (void)_sendFailedCommandForRefIdentifier:(id)refIdentifier;
- (void)_sendSuccessCommandForRefIdentifier:(id)refIdentifier;
- (void)_setDeactivatedForPendingPhoneCall:(BOOL)pendingPhoneCall withDelay:(double)delay;
- (void)_setExpectsFaceContact:(BOOL)contact;
- (void)_setState:(int)state;
- (void)_setViewState:(int)state;
- (BOOL)_shouldActAsIfInConfirmationPhase;
- (void)_showPasscodeKeypad:(BOOL)keypad;
- (void)_snippetAnimationFinished:(id)finished;
- (id)_snippetWithFirstResponder;
- (id)_snippetsOfPhase:(int)phase;
- (void)_stampLastSnippetWithStamp:(int)stamp;
- (void)_startListenTimer;
- (void)_startProcessingRequest;
- (void)_startRequestWithNextAudioInputPath;
- (void)_statusTimerFired:(id)fired;
- (void)_stopSpeakingAndProcessCommands:(BOOL)commands;
- (void)_stopSpeechAndHandleAudioInput;
- (void)_submitQuery:(id)query;
- (id)_tableCellIndexPathForSnippet:(id)snippet;
- (void)_tellUserAboutGesture;
- (void)_tempElementTimerFired;
- (void)_tempSpeechTimerFired;
- (void)_tossOutLastSnippetAndRemoveFollowingViews;
- (void)_updateConnectionAudioRouteIfNecessary;
- (void)_updateCurrentAudioRoute;
- (void)_updateExpectsFaceContact;
- (void)_updateModality;
- (void)activateWithOptions:(id)options;
- (BOOL)allowsEventOnlySuspension;
- (void)assistantConnection:(id)connection conversationFailedWithError:(id)error;
- (void)assistantConnection:(id)connection didRecognizeSpeechPhrases:(id)phrases correctionIdentifier:(id)identifier;
- (void)assistantConnection:(id)connection receivedCommand:(id)command;
- (void)assistantConnection:(id)connection requestFailedWithError:(id)error;
- (void)assistantConnection:(id)connection shouldSpeak:(BOOL)speak;
- (void)assistantConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;
- (void)assistantConnection:(id)connection speechRecordingDidFail:(id)speechRecording;
- (void)assistantConnection:(id)connection voiceCaptureFailedWithError:(id)error;
- (void)assistantConnection:(id)connection voiceCaptureFinishedWithText:(id)text;
- (void)assistantConnectionConversationFinished:(id)finished;
- (void)assistantConnectionRequestFinished:(id)finished;
- (void)assistantConnectionSpeechRecordingDidBegin:(id)assistantConnectionSpeechRecording;
- (void)assistantConnectionSpeechRecordingDidEnd:(id)assistantConnectionSpeechRecording;
- (void)assistantConnectionSpeechRecordingWillBegin:(id)assistantConnectionSpeechRecording;
- (void)assistantTableViewCellDidRemoveFromSuperview:(id)assistantTableViewCell;
- (void)assistantView:(id)view madeRequest:(id)request;
- (BOOL)assistantViewAffectsMagicPocket:(int)pocket;
- (void)assistantViewAnimatedIn:(id)anIn;
- (void)assistantViewAnimatedOut:(id)anOut;
- (float)assistantViewAudioLevel:(id)level;
- (void)assistantViewSearchScrolledToView:(id)view;
- (BOOL)assistantVisibleAndRequiresPasscodeUnlockForOpenURL:(id)openURL withDisplay:(id)display;
- (double)autoDimTime;
- (float)bottomBarHeight;
- (BOOL)cancelPendingPhoneCall;
- (BOOL)currentRouteExpectsFaceContact;
- (void)deactivate;
- (void)dealloc;
- (void)deviceLockViewCancelButtonPressed:(id)pressed;
- (void)deviceLockViewPasscodeEntered:(id)entered;
- (void)deviceUnlockFailed;
- (void)deviceUnlockSucceeded;
- (void)dismissAssistant;
- (void)dismissAssistantForAlertActivation:(id)alertActivation;
- (void)dismissAssistantWithFade:(double)fade;
- (BOOL)expectsFaceContact;
- (BOOL)isAssistantVisible;
- (BOOL)isDisplayingErrorStatus;
- (void)noteSpokenLanguageDidChange;
- (void)passcodeUnlockWithCompletion:(id)completion;
- (void)pauseConnectionCallbacks:(BOOL)callbacks;
- (void)preheat;
- (BOOL)preventGesture;
- (void)proximityStateChanged:(id)changed;
- (void)reinterpretUserUtterance:(id)utterance;
- (void)resetAndStartListeningWithOptions:(id)options;
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;
- (void)scrollViewDidScroll:(id)scrollView;
- (void)setNextRecognitionAudioInputPaths:(id)paths;
- (void)setRevealMode:(int)mode;
- (BOOL)shouldShowLockStatusBarIcon;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldUseTransparentStatusBar;
- (void)snippetController:(id)controller addMessage:(id)message phase:(id)phase speakableDescription:(id)description;
- (void)snippetController:(id)controller addMessage:(id)message speakableDescription:(id)description;
- (void)snippetController:(id)controller changeSizeTo:(CGSize)to;
- (id)snippetController:(id)controller disambiguationCellForAceObject:(id)aceObject context:(id)context;
- (id)snippetController:(id)controller domainObjectForIdentifier:(id)identifier;
- (void)snippetController:(id)controller sendGenericAceCommand:(id)command;
- (void)snippetController:(id)controller stampMostRecentSnippetWithStamp:(int)stamp;
- (void)snippetControllerCancelScroll:(id)scroll;
- (id)snippetControllerEffectiveBundleForCoreLocation:(id)coreLocation;
- (void)snippetControllerHaltTTS:(id)tts;
- (BOOL)snippetControllerIsDevicePasscodeLocked:(id)locked;
- (void)snippetControllerModalityRelinquish:(id)relinquish;
- (void)snippetControllerModalityRequest:(id)request;
- (BOOL)snippetControllerPreventInteraction:(id)interaction;
- (void)snippetControllerRemoveView:(id)view;
- (void)snippetControllerTransactionComplete:(id)complete;
- (id)snippetControllerViewController:(id)controller;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;
- (void)speechSynthesizerDidStartSpeaking:(id)speechSynthesizer;
- (id)spokenLanguageCode;
- (id)supportedCommands;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
- (void)tourGuideWantsToDisplayGuide:(id)displayGuide;
- (void)updateCurrentAudioRoute;
- (id)view;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (int)viewState;
- (void)viewWillAppear;
- (void)viewWillDisappear;
@end

