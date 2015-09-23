/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBTelephonyManager : XXUnknownSuperclass <RadiosPreferencesDelegate> {
	CTServerConnectionRef _serverConnection;
	BOOL _containsCellularRadio;
	BOOL _hasCellularTelephony;
	BOOL _hasCellularData;
	NSString *_cachedCTRegistrationCellStatus;
	NSString *_cachedCTRegistrationDisplayStatus;
	int _cachedCTRegistrationIsForcedHome;
	int _cellRegistrationStatus;
	int _registrationStatus;
	NSTimer *_fakeServiceTimer;
	NSTimer *_fakeCellServiceTimer;
	BOOL _signalStrengthHasBeenSet;
	long _signalStrength;
	long _signalStrengthBars;
	NSString *_operatorName;
	NSString *_lastKnownNetworkCountryCode;
	unsigned _usingWifi : 1;
	int _vpnConnectionStatus;
	unsigned _iTunesNeedsToRecheckActivation : 1;
	unsigned _pretendingToSearch : 1;
	unsigned _callForwardingIndicator : 2;
	NSObject<OS_dispatch_queue> *_wirelessModemDynamicStoreQueue;
	SCDynamicStoreRef _queue_wirelessModemDynamicStore;
	CFStringRef _queue_wirelessModemDynamicStoreSharingKey;
	BOOL _isNetworkTethering;
	int _numberOfNetworkTetheredDevices;
	unsigned _hasShownWaitingAlert : 1;
	SBAlertItem *_activationAlertItem;
	int _numActivationFailures;
	int _inEmergencyCallbackMode;
	unsigned _loggingCallAudio : 1;
	RadiosPreferences *_radioPrefs;
	int _needsUserIdentificationModule;
	NSString *_simStatus;
	int _suppressesCellDataIndicator;
	int _suppressesCellIndicators;
	int _lteConnectionShows4G;
	int _modemDataConnectionType;
	BOOL _modemDataConnectionTypeIsKnown;
	BOOL _fallingBackToCellular;
	tcp_connection_fallback_watch_s *_cellularFallbackWatcher;
	void *_queue_fastDormancySuspendAssertion;
	TUCall *_incomingCall;
	TUCall *_activeCall;
	TUCall *_heldCall;
	TUCall *_outgoingCall;
}
@property(retain, nonatomic) TUCall *activeCall;
@property(retain, nonatomic) TUCall *heldCall;
@property(retain, nonatomic) TUCall *incomingCall;
@property(retain, nonatomic) TUCall *outgoingCall;
+ (CTServerConnectionRef)defaultTelephonyCenter;
+ (id)sharedTelephonyManager;
+ (id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)necessary;
- (id)init;
- (BOOL)MALoggingEnabled;
- (void)SBTelephonyDaemonRestartHandler;
- (id)SIMStatus;
- (void)_avSystemControllerDidError:(id)_avSystemController;
- (CFStringRef)_cachedCTRegistrationCellStatus;
- (CFStringRef)_cachedCTRegistrationDisplayStatus;
- (unsigned)_callCountForService:(int)service;
- (void)_cancelFakeCellServiceTimer;
- (void)_cancelFakeServiceTimer;
- (void)_carrierBundleChanged;
- (id)_fastPickedRouteForCall;
- (void)_fetchOperatorNameWithCompletion:(id)completion;
- (void)_headphoneChanged:(id)changed;
- (BOOL)_isTTYEnabled;
- (BOOL)_lteConnectionShows4G;
- (void)_operatorBundleChanged;
- (void)_performQueryInBackground:(id)background withMainQueueResultHandler:(id)mainQueueResultHandler;
- (id)_phoneApp;
- (void)_postDataConnectionTypeChanged;
- (void)_postStartupNotification;
- (void)_prepareToAnswerCall;
- (BOOL)_pretendingToSearch;
- (void)_provisioningUpdateWithStatus:(int)status;
- (void)_reallySetOperatorName:(id)name;
- (void)_resetCTMMode;
- (void)_resetModemConnectionType;
- (CTServerConnectionRef)_serverConnection;
- (void)_serverConnectionDidError:(SBIconCoordinate)_serverConnection;
- (void)_setCachedCTRegistrationCellStatus:(CFStringRef)status displayStatus:(CFStringRef)status2 forcedHome:(BOOL)home;
- (void)_setCellRegistrationStatus:(int)status;
- (void)_setCurrentActivationAlertItem:(id)item;
- (void)_setIsInEmergencyCallbackMode:(unsigned char)emergencyCallbackMode;
- (void)_setIsLoggingCallAudio:(BOOL)audio;
- (void)_setIsNetworkTethering:(BOOL)tethering withNumberOfDevices:(int)devices;
- (void)_setIsUsingWiFiConnection:(BOOL)connection;
- (void)_setRegistrationStatus:(int)status;
- (void)_setSIMStatus:(id)status;
- (void)_setSignalStrength:(long)strength andBars:(long)bars;
- (void)_setSuppressesCellDataIndicator:(int)indicator;
- (void)_setSuppressesCellIndicators:(int)indicators;
- (void)_setVPNConnectionStatus:(int)status;
- (void)_startFakeServiceIfNecessary;
- (void)_stopFakeCellService;
- (void)_stopFakeService;
- (BOOL)_suppressesCellDataIndicator;
- (void)_updateDataConnectionType;
- (void)_updateLastKnownNetworkCountryCode;
- (int)_updateModemDataConnectionTypeWithCTInfo:(id)ctinfo;
- (void)_updateNetworkLocale;
- (void)_updateRegistrationNow;
- (void)_updateState;
- (BOOL)activeCallExists;
- (void)airplaneModeChanged;
- (unsigned)callCount;
- (void)callEventHandler:(id)handler;
- (int)callForwardingIndicator;
- (BOOL)callWouldUseReceiver:(BOOL)receiver;
- (int)cellRegistrationStatus;
- (BOOL)cellularRadioCapabilityIsActive;
- (void)configureForTTY:(BOOL)tty;
- (BOOL)containsCellularRadio;
- (id)copyMobileEquipmentInfo;
- (id)copyTelephonyCapabilities;
- (int)dataConnectionType;
- (void)disconnectAllCalls;
- (void)disconnectCallAndActivateHeld;
- (void)disconnectIncomingCall;
- (id)displayedCall;
- (void)dumpBasebandState:(id)state;
- (BOOL)emergencyCallSupported;
- (unsigned)faceTimeAudioCallCount;
- (void)handleCallControlFailure:(id)failure;
- (BOOL)hasCellularData;
- (BOOL)hasCellularTelephony;
- (BOOL)heldCallExists;
- (BOOL)inCall;
- (double)inCallDuration;
- (BOOL)inCallUsingSpeakerOrReceiver;
- (BOOL)incomingCallExists;
- (BOOL)isEmergencyCallActive;
- (BOOL)isInAirplaneMode;
- (BOOL)isInEmergencyCallbackMode;
- (BOOL)isLoggingCallAudio;
- (BOOL)isNetworkRegistrationEnabled;
- (BOOL)isNetworkTethering;
- (BOOL)isUsingSlowDataConnection;
- (BOOL)isUsingVPNConnection;
- (id)lastKnownNetworkCountryCode;
- (BOOL)multipleCallsExist;
- (BOOL)needsUserIdentificationModule;
- (void)noteSIMUnlockAttempt;
- (int)numberOfNetworkTetheredDevices;
- (id)operatorName;
- (BOOL)outgoingCallExists;
- (void)postponementStatusChanged;
- (void)queue_setFastDormancySuspended:(BOOL)suspended withConnection:(CTServerConnectionRef)connection;
- (BOOL)registeredWithoutCellular;
- (int)registrationCauseCode;
- (int)registrationStatus;
- (void)setCallForwardingIndicator:(int)indicator;
- (void)setFastDormancySuspended:(BOOL)suspended;
- (void)setIsInAirplaneMode:(BOOL)airplaneMode;
- (void)setLimitTransmitPowerPerBandEnabled:(BOOL)enabled;
- (void)setNetworkRegistrationEnabled:(BOOL)enabled;
- (void)setOperatorName:(id)name;
- (BOOL)shouldHangUpOnLock;
- (BOOL)shouldPromptForTTY;
- (long)signalStrength;
- (long)signalStrengthBars;
- (void)swapCalls;
- (void)telephonyAudioChangeHandler;
- (unsigned)telephonyCallCount;
- (id)ttyTitle;
- (void)updateAirplaneMode;
- (void)updateCallForwardingIndicator;
- (void)updateCalls;
- (void)updateDisplaySettings:(id)settings forOutgoingCallURL:(id)outgoingCallURL outURL:(id *)url;
- (BOOL)updateLocale;
- (void)updateSpringBoard;
- (void)updateTTYIndicator;
@end

