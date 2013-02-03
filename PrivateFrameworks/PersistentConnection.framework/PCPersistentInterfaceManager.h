/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString, NSRecursiveLock, NSThread, <PCPersistentInterfaceManagerDelegate>;

@interface PCPersistentInterfaceManager : NSObject {
    unsigned int _assertionWasRequested : 1;
    unsigned int _isDataActive : 1;
    unsigned int _isInHomeCountry : 1;
    struct __CFMachPort { } *_cfMachPort;
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CFRunLoopSource { } *_ctServerRunLoopSource;
    <PCPersistentInterfaceManagerDelegate> *_delegate;
    NSString *_identifier;
    void *_interfaceAssertion;
    NSString *_lastRegistrationStatus;
    NSRecursiveLock *_lock;
    NSThread *_thread;
}

+ (BOOL)doesInterfaceExist;
+ (id)interfaceName;
+ (BOOL)isInterfaceUp;
+ (void)prepareSocketForPush:(NSInteger)arg1;
+ (void)prepareStreamForPush:(struct __CFReadStream { }*)arg1;
+ (id)urlConnectionForPushWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;

- (void)_handleCTServerMessage:(void*)arg1;
- (void)_invalidated;
- (void)_invalidatedMakeConnection;
- (BOOL)_keepInterfaceUpLocked;
- (void)_makeConnectionLocked;
- (void)_performDataActiveCallout;
- (void)_performInHomeCountryCallout;
- (void)_purgeConnectionLocked;
- (void)_serverCallback:(struct __CFString { }*)arg1 info:(struct __CFDictionary { }*)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isInHomeCountry;
- (BOOL)isInterfaceUp;
- (void)keepInterfaceUp:(BOOL)arg1;
- (void)setDelegate:(id)arg1;

@end
