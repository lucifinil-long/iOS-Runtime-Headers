/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString, InvocationQueue, NSMutableData, <IMAPMailboxListFilter>, NSMutableSet, <WeaklyReferencedObject>;

@interface IMAPConnection : Connection <WeakReferenceHolder> {
    struct { 
        <WeaklyReferencedObject> *delegate; 
        unsigned int shouldHandleUntaggedResponse : 1; 
        unsigned int didReceiveResponse : 1; 
        unsigned int didFinishSelect : 1; 
        unsigned int didDisconnect : 1; 
        unsigned int didBeginBodyLoad : 1; 
        unsigned int didReceiveMoreBodyData : 1; 
        unsigned int didFinishBodyDataLoad : 1; 
        unsigned int bodyDataReadSize : 1; 
        unsigned int setServerMessageCount : 1; 
    unsigned int _capabilityFlags : 12;
    unsigned int _capabilitiesAreFresh : 1;
    unsigned int _gotBadResponse : 1;
    unsigned int _connectionState : 3;
    NSString *_apsAccountID;
    NSString *_apsDeviceToken;
    NSMutableSet *_capabilities;
    NSUInteger _commandNumber;
    double _connectTime;
    NSMutableData *_data;
    } _delegateState;
    double _expirationTime;
    NSString *_lastRequiredHeaders;
    NSArray *_lastRequiredHeadersArray;
    <IMAPMailboxListFilter> *_mailboxListFilter;
    NSUInteger _readBufferSize;
    NSString *_selectedMailbox;
    NSString *_separatorChar;
    InvocationQueue *_streamEventQueue;
    NSInteger _tag;
}

+ (void)initialize;
+ (void)setReadSizeParameters;

- (id)_copyNextServerResponseForCommand:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg1;
- (id)_copyNextTaggedOrContinuationResponseForCommand:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg1;
- (BOOL)_doBasicConnectionUsingAccount:(id)arg1;
- (id)_doListCommand:(NSInteger)arg1 withReference:(id)arg2 mailboxName:(id)arg3 options:(NSInteger)arg4;
- (BOOL)_doUidFetchWithRange:(struct { NSUInteger x1; NSUInteger x2; })arg1 arguments:(id)arg2 validateMessage:(BOOL)arg3 responses:(id)arg4;
- (id)_errorForResponse:(id)arg1 commandParams:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg2;
- (id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)arg1;
- (id)_fetchArgumentForMessageUidsAndFlags;
- (id)_headersToFetchIncludingThoseRequiredForRouting:(BOOL)arg1 withRecipients:(BOOL)arg2;
- (BOOL)_isFetchResponseValid:(id)arg1;
- (id)_listingForMailbox:(id)arg1 options:(NSInteger)arg2 withCommand:(NSInteger)arg3;
- (id)_readDataOfLength:(NSInteger)arg1;
- (id)_responseFromSendingCommand:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg1 andPossiblyCreateMailbox:(id)arg2;
- (id)_responseFromSendingCommands:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg1 count:(NSUInteger)arg2;
- (NSUInteger)_sendCommands:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg1 count:(NSUInteger)arg2 response:(id*)arg3;
- (BOOL)_sendMailboxCommand:(NSInteger)arg1 withArguments:(id)arg2;
- (BOOL)_tryConnectionUsingAccount:(id)arg1;
- (BOOL)appendData:(id)arg1 toMailboxNamed:(id)arg2 flags:(id)arg3 dateReceived:(id)arg4 newMessageInfo:(id*)arg5;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (id)capabilities;
- (void)close;
- (BOOL)closeAndLogout;
- (BOOL)connectUsingAccount:(id)arg1;
- (NSInteger)connectionState;
- (BOOL)copyUids:(id)arg1 toMailboxNamed:(id)arg2 newMessageInfo:(id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)createMailbox:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)deleteMailbox:(id)arg1;
- (BOOL)deleteMessagesOlderThanNumberOfDays:(NSInteger)arg1;
- (id)description;
- (void)didFinishCommands:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg1 count:(NSUInteger)arg2;
- (void)disconnect;
- (void)disconnectAndNotifyDelegate:(BOOL)arg1;
- (BOOL)examineMailbox:(id)arg1;
- (BOOL)expunge;
- (BOOL)expungeUids:(id)arg1;
- (id)extendedListingForMailbox:(id)arg1 options:(NSInteger)arg2;
- (id)fetchArgumentForMessageSkeletonsWithTo:(BOOL)arg1;
- (void)fetchFreshCapabilitiesForAccount:(id)arg1;
- (id)fetchHeadersForUid:(unsigned long)arg1;
- (void)fetchQuotaRootNamesForMailboxes:(id)arg1;
- (void)fetchStatusForMailboxes:(id)arg1 args:(id)arg2;
- (void)fetchTotalSize:(unsigned long long*)arg1 andMessageCount:(NSUInteger*)arg2;
- (NSUInteger)getMailboxIDForUID:(NSUInteger)arg1;
- (BOOL)getQuotaForRootName:(id)arg1;
- (id)init;
- (BOOL)isValid;
- (id)listingForMailbox:(id)arg1 options:(NSInteger)arg2;
- (NSUInteger)literalChunkSize;
- (void)lock;
- (BOOL)loginWithAccount:(id)arg1 password:(id)arg2;
- (BOOL)logout;
- (id)mailboxListFilter;
- (id)messageSetForNumbers:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 maxTokens:(NSInteger)arg3 indexOfLastNumber:(NSInteger*)arg4;
- (id)messageSetForNumbers:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)messageSetForRange:(struct { NSUInteger x1; NSUInteger x2; })arg1 butNotNumbers:(id)arg2;
- (id)messageSetForRange:(struct { NSUInteger x1; NSUInteger x2; })arg1;
- (void)noop;
- (void)notifyDelegateOfBodyLoadAppendage:(id)arg1;
- (void)notifyDelegateOfBodyLoadCompletion:(id)arg1;
- (void)notifyDelegateOfBodyLoadStart:(id)arg1;
- (void)objectWillBeDeallocated:(id)arg1;
- (id)parenthesizedStringWithObjects:(id)arg1;
- (BOOL)performCustomCommand:(id)arg1 withArguments:(id)arg2;
- (id)quotaPercentagesForMailbox:(id)arg1;
- (NSUInteger)readBufferSize;
- (void)release;
- (BOOL)renameMailbox:(id)arg1 toMailbox:(id)arg2;
- (id)retain;
- (NSUInteger)retainCount;
- (NSInteger)searchCount:(id)arg1;
- (id)searchIDSet:(id)arg1 forTerms:(id)arg2 success:(BOOL*)arg3;
- (id)searchUidSet:(id)arg1 forNewMessageIDs:(id)arg2;
- (id)searchUidSet:(id)arg1 forTerms:(id)arg2 success:(BOOL*)arg3;
- (BOOL)selectMailbox:(id)arg1;
- (id)selectedMailbox;
- (BOOL)sendResponsesForCommand:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg1 toQueue:(id)arg2;
- (BOOL)sendResponsesForUIDFetchForUIDs:(id)arg1 fields:(id)arg2 toQueue:(id)arg3;
- (BOOL)sendSkeletonResponsesForUIDs:(id)arg1 includeTo:(BOOL)arg2 toQueue:(id)arg3;
- (BOOL)sendUidAndFlagResponsesForUIDs:(id)arg1 toQueue:(id)arg2;
- (BOOL)sendUidResponsesForSearchArguments:(id)arg1 toQueue:(id)arg2;
- (id)separatorChar;
- (id)serverPathPrefix;
- (void)setDelegate:(id)arg1;
- (void)setMailboxListFilter:(id)arg1;
- (void)setReadBufferSize:(NSUInteger)arg1;
- (void)setReadBufferSizeFromElapsedTime:(double)arg1 bytesRead:(NSUInteger)arg2;
- (BOOL)startTLSForAccount:(id)arg1;
- (id)statusForMailbox:(id)arg1 args:(id)arg2;
- (BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forMessageSet:(id)arg3;
- (BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forRange:(struct { NSUInteger x1; NSUInteger x2; })arg3;
- (BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forUids:(id)arg3;
- (BOOL)subscribeMailbox:(id)arg1;
- (id)subscribedListingForMailbox:(id)arg1 options:(NSInteger)arg2;
- (BOOL)supportsCapability:(NSInteger)arg1;
- (BOOL)supportsCapabilityForceFresh:(NSInteger)arg1;
- (void)unselect;
- (BOOL)unsubscribeMailbox:(id)arg1;

@end
