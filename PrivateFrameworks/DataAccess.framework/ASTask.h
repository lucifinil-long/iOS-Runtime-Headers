/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASItem, NSString, DATaskManager, NSError;

@interface ASTask : ASHTTPRequest <DATask> {
    BOOL _askedToCancelWhileModal;
    void *_context;
    ASItem *_currentlyParsingItem;
    BOOL _finished;
    BOOL _haveParsedCommand;
    BOOL _haveSwitchedCodePage;
    BOOL _inDelegateCallout;
    BOOL _isExclusive;
    NSString *_lastKnownPassword;
    NSString *_lastKnownPolicyKey;
    NSInteger _modalPushCount;
    NSInteger _modalReason;
    struct __CFUserNotification { } *_passwordNotification;
    NSError *_passwordNotificationError;
    struct __CFString { } *_passwordNotificationRunLoopModes;
    struct __CFRunLoopSource { } *_passwordNotificationRunLoopSource;
    BOOL _receivedBadPasswordResponse;
    BOOL _retry;
    NSInteger _taskID;
    DATaskManager *_taskManager;
}

@property BOOL askedToCancelWhileModal; /* unknown property attribute: V_askedToCancelWhileModal */
@property DATaskManager *taskManager; /* unknown property attribute: V_taskManager */

+ (void)_restoreDefaultTaskTimeout;
+ (void)_setDefaultTaskTimeout:(double)arg1;

- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (void)_continuePerformTask;
- (id)_createBodyData;
- (id)_easVersion;
- (void)_failImmediately;
- (void)_handleBadPasswordResponse;
- (void)_handlePasswordNotificationResponse:(unsigned long)arg1;
- (BOOL)_handleRedirect:(id)arg1;
- (BOOL)_isWBXML;
- (id)_policyKey;
- (void)_popModal;
- (void)_pushModalForReason:(NSInteger)arg1;
- (void)_setLastKnownPassword:(id)arg1;
- (BOOL)_shouldAuth;
- (void)_tearDownPasswordNotification;
- (id)_url;
- (BOOL)askedToCancelWhileModal;
- (BOOL)attemptRetryWithStatus:(NSInteger)arg1 error:(id)arg2;
- (void)cancelTaskWithReason:(NSInteger)arg1 underlyingError:(id)arg2;
- (id)command;
- (NSInteger)commandCode;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (NSInteger)connectionActionForResponse:(id)arg1;
- (void)connectionFailedWithError:(id)arg1;
- (void*)context;
- (id)currentlyParsingItem;
- (void)dealloc;
- (void)didCallOutToDelegate;
- (BOOL)expectsWBXML;
- (void)finishWithError:(id)arg1;
- (id)httpMethod;
- (id)init;
- (BOOL)isExclusive;
- (BOOL)isInCallOutToDelegate;
- (id)parameterData;
- (double)percentComplete;
- (void)performTask;
- (id)powerAssertionGroupIdentifier;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (id)requestBodyStream;
- (BOOL)requiresEASVersionInformaton;
- (void)reset;
- (void)setAskedToCancelWhileModal:(BOOL)arg1;
- (void)setContext:(void*)arg1;
- (void)setCurrentlyParsingItem:(id)arg1;
- (void)setIsExclusive:(BOOL)arg1;
- (void)setTaskManager:(id)arg1;
- (BOOL)shouldAllowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2;
- (BOOL)shouldHoldPowerAssertion;
- (void)startModal;
- (NSInteger)taskID;
- (id)taskManager;
- (void)taskManagerDidFailToUpdatePolicyKey;
- (void)taskManagerDidFindEASVersion;
- (void)taskManagerDidUpdatePolicyKey;
- (NSInteger)taskStatusForError:(id)arg1;
- (NSInteger)taskStatusForExchangeStatus:(NSInteger)arg1;
- (double)timeoutInterval;
- (void)willCallOutToDelegate;

@end
