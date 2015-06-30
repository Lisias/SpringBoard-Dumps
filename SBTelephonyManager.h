/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"


@interface SBTelephonyManager : NSObject {
	void *_suspendDormancyAssertion;
	NSString *_operatorName;
	unsigned _suspendDormancyEnabled;
	unsigned _usingWifi : 1;
	unsigned _usingVPN : 1;
	unsigned _iTunesNeedsToRecheckActivation : 1;
	unsigned _pretendingToSearch : 1;
	unsigned _callForwardingIndicator : 2;
	unsigned _usingWirelessModem : 1;
}
+ (id)sharedTelephonyManager;
- (id)init;
- (BOOL)EDGEIsOn;
- (BOOL)MALoggingEnabled;
- (void)SBTelephonyDaemonRestartHandler;
- (id)SIMStatus;
- (void)_cancelFakeService;
- (void)_delayedAudioResume;
- (id)_fetchOperatorName;
- (void)_headphoneChanged:(id)changed;
- (BOOL)_pretendingToSearch;
- (void)_proximityChanged:(id)changed;
- (void)_reallySetOperatorName:(id)name;
- (void)_resetCTMMode;
- (CTServerConnectionRef)_serverConnection;
- (void)_serverConnectionDidError:(XXStruct_K5nmsA)_serverConnection;
- (void)_setRegistrationStatus:(int)status;
- (void)_startFakeServiceIfNecessary;
- (void)_stopFakeService;
- (void)_updateRegistrationNow;
- (void)_updateState;
- (BOOL)activeCallExists;
- (id)allMissedCallsAfterRowID:(long long)anId;
- (void)answerIncomingCall;
- (void)answerIncomingCallEndingOthers;
- (int)callCount;
- (int)callForwardingIndicator;
- (BOOL)callWouldUseReceiver:(BOOL)receiver;
- (void)checkForRegistrationSoon;
- (void)configureForTTY:(BOOL)tty;
- (void)copyICCID:(id *)iccid IMEI:(id *)imei;
- (int)dataConnectionType;
- (void)disconnectAllCalls;
- (void)disconnectCall;
- (void)disconnectCallAndActivateHeld;
- (void)disconnectIncomingCall;
- (id)displayForOutgoingCallURL:(id)outgoingCallURL;
- (void)dumpBasebandState:(id)state;
- (long long)getRowIDOfLastCallInsert;
- (void)handleSIMReady;
- (BOOL)heldCallExists;
- (BOOL)inCall;
- (double)inCallDuration;
- (BOOL)inCallUsingReceiver;
- (BOOL)incomingCallExists;
- (BOOL)isNetworkRegistrationEnabled;
- (BOOL)isUsingDataConnection;
- (BOOL)isUsingVPNConnection;
- (BOOL)isUsingWiFiConnection;
- (BOOL)isUsingWirelessModem;
- (void)noteSIMUnlockAttempt;
- (void)noteWirelessModemChanged;
- (void)operatorBundleChanged;
- (id)operatorName;
- (BOOL)outgoingCallExists;
- (void)powerOffRadio;
- (int)registrationCauseCode;
- (int)registrationStatus;
- (void)setCallForwardingIndicator:(int)indicator;
- (void)setFastDormancySuspended:(BOOL)suspended;
- (void)setIsUsingVPNConnection:(BOOL)connection;
- (void)setIsUsingWiFiConnection:(BOOL)connection;
- (void)setIsUsingWirelessModem:(BOOL)modem;
- (void)setLimitTransmitPowerPerBandEnabled:(BOOL)enabled;
- (void)setNetworkRegistrationEnabled:(BOOL)enabled;
- (void)setOperatorName:(id)name;
- (BOOL)shouldHangUpOnLock;
- (BOOL)shouldPromptForTTY;
- (void)swapCalls;
- (id)ttyTitle;
- (void)unmute;
- (void)updateAirplaneMode;
- (void)updateCallForwardingIndicator;
- (void)updateCalls;
- (BOOL)updateLocale;
- (BOOL)updateNetworkLocale;
- (void)updatePhoneNumberPrefs;
- (void)updateSpringBoard;
- (void)updateTTYIndicator;
- (id)urlWithScheme:(id)scheme fromDialingNumber:(id)dialingNumber abUID:(int)uid urlPathAddition:(id)addition;
@end

