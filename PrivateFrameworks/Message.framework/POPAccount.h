/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSConditionLock, NSArray, NSString, ActivityMonitor, MFLock, POP3Connection;

@interface POPAccount : MailAccount {
    POP3Connection *_connection;
    MFLock *_connectionActivityLock;
    float _connectionTimeout;
    NSUInteger _connectionsInUse;
    NSArray *_currentUIDs;
    BOOL _deletingMessages;
    ActivityMonitor *_fetchMonitor;
    BOOL _fetcherNeedsReset;
    BOOL _hasDoneBackgroundSynchronization;
    NSString *_newestMessageUID;
    NSInteger _numberOfKnownUIDs;
    NSString *_oldestMessageUID;
    NSConditionLock *_sharedConnectionCondition;
    BOOL _shouldAttemptAPOP;
}

+ (id)accountTypeString;
+ (id)saslProfileName;

- (id)_URLScheme;
- (id)_createNewConnection;
- (void)_deleteHook;
- (id)_getCachedConnection;
- (void)acquireConnectionActivityLock;
- (id)authenticatedConnection;
- (NSInteger)bigMessageWarningSize;
- (BOOL)canCreateNewMailboxes;
- (BOOL)canGoOffline;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (void)checkInConnection:(id)arg1 currentUIDs:(id)arg2;
- (void)closeCachedConnection;
- (void)closeCachedConnectionForcedOnly:(id)arg1;
- (void)closeConnection:(id)arg1 andSaveUIDs:(id)arg2;
- (Class)connectionClass;
- (NSUInteger)connectionsInUse;
- (void)dealloc;
- (NSUInteger)defaultPortNumber;
- (NSUInteger)defaultSecurePortNumber;
- (NSUInteger)delayedMessageDeletionInterval;
- (void)deleteMessagesNow:(id)arg1;
- (void)deleteSeenMessagesNow;
- (BOOL)deletingMessages;
- (NSInteger)fetchNumNewMessages:(NSUInteger)arg1 oldMessages:(NSUInteger)arg2 preservingUID:(id)arg3 withStore:(id)arg4;
- (NSInteger)fetchSynchronously;
- (NSInteger)fetchSynchronouslyLite;
- (void)finalize;
- (id)init;
- (void)insertInMailboxes:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)loginName;
- (id)mailboxPathExtension;
- (NSInteger)messageDeletionPolicy;
- (id)newestKnownMessageUID;
- (NSInteger)numberOfKnownUIDs;
- (id)oldestKnownMessageUID;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)relinquishConnectionActivityLock;
- (BOOL)requiresAuthentication;
- (void)scheduleDisconnect;
- (id)secureServiceName;
- (id)serviceName;
- (void)setBigMessageWarningSize:(NSInteger)arg1;
- (void)setDelayedMessageDeletionInterval:(NSUInteger)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (void)setMessageDeletionPolicy:(NSInteger)arg1;
- (void)setNewestKnownMessageUID:(id)arg1;
- (void)setNumberOfKnownUIDs:(NSInteger)arg1;
- (void)setOldestKnownMessageUID:(id)arg1;
- (void)setPreferredAuthScheme:(id)arg1;
- (void)setShouldAttemptAPOP:(BOOL)arg1;
- (BOOL)shouldAttemptAPOP;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (Class)storeClass;
- (Class)storeClassForMailbox:(id)arg1;

@end
