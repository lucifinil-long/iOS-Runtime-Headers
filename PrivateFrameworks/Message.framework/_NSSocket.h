/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSInvocation;

@interface _NSSocket : NSObject {
    unsigned int _numTimeoutSecs : 16;
    unsigned int _openCompleted : 1;
    unsigned int _canRead : 1;
    unsigned int _canWrite : 1;
    unsigned int _error : 1;
    unsigned int _closed : 1;
    NSInteger _dataContextIdentifier;
    NSInvocation *_eventHandler;
    double _lastUsedTime;
    NSString *_protocol;
    struct __CFReadStream { } *_readStream;
    void *_request;
    void *_stats;
    struct __CFWriteStream { } *_writeStream;
}

+ (NSUInteger)connects;
+ (unsigned long long)inBytes;
+ (unsigned long long)inBytesPerSecond;
+ (void)initialize;
+ (unsigned long long)outBytes;
+ (unsigned long long)outBytesPerSecond;
+ (NSUInteger)reads;
+ (void)resetStatistics;
+ (void)setSimulatedSocketSpeed:(NSInteger)arg1;
+ (void)showStatistics;
+ (NSInteger)simulatedSocketSpeed;
+ (unsigned long long)totalBytesPerSecond;
+ (NSUInteger)writes;

- (void)abort;
- (BOOL)connectToHost:(id)arg1 withPort:(NSUInteger)arg2 protocol:(id)arg3 serverCertificateDigest:(id)arg4;
- (struct __CFReadStream { }*)copyReadStream;
- (struct __CFWriteStream { }*)copyWriteStream;
- (void)dealloc;
- (NSInteger)fileDescriptor;
- (id)init;
- (id)initWithTimeout:(NSInteger)arg1;
- (BOOL)isReadable;
- (BOOL)isValid;
- (BOOL)isWritable;
- (double)lastUsedTime;
- (NSInteger)readBytes:(char *)arg1 length:(NSInteger)arg2;
- (void)registerForEvents;
- (id)remoteHostname;
- (NSUInteger)remotePortNumber;
- (id)securityProtocol;
- (id)serverCertificates;
- (void)setDataContextIdentifier:(long)arg1;
- (void)setEventHandler:(id)arg1;
- (BOOL)setSecurityProtocol:(id)arg1 serverCertificateDigest:(id)arg2;
- (void)setTimeout:(NSInteger)arg1;
- (id)sourceIPAddress;
- (NSInteger)timeout;
- (NSInteger)writeBytes:(const char *)arg1 length:(NSInteger)arg2;

@end
