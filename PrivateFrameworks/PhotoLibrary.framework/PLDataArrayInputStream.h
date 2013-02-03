/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray, NSMutableData, <PLDataArrayInputStreamProgressDelegate>;

@interface PLDataArrayInputStream : NSInputStream {
    struct { 
        NSInteger version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    int (*_clientCallback)();
    NSMutableData *_bodyData;
    } _clientContext;
    NSUInteger _currentIndex;
    NSUInteger _currentLength;
    NSUInteger _currentOffset;
    NSArray *_dataArray;
    NSUInteger _dataCount;
    NSUInteger _dataLength;
    NSUInteger _dataOffset;
    id _delegate;
    BOOL _openEventSent;
    <PLDataArrayInputStreamProgressDelegate> *_progressDelegate;
    struct __CFRunLoopSource { } *_rls;
    NSUInteger _streamStatus;
}

@property <PLDataArrayInputStreamProgressDelegate> *progressDelegate; /* unknown property attribute: V_progressDelegate */

- (void)_scheduleCallback;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_scheduleProgressUpdate;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)())arg2 context:(struct { NSInteger x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)_streamEventTrigger;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_updateProgress;
- (NSUInteger)bytesRead;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (BOOL)getBuffer:(char **)arg1 length:(NSUInteger*)arg2;
- (BOOL)hasBytesAvailable;
- (id)initWithDataArray:(id)arg1;
- (void)open;
- (id)progressDelegate;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setProgressDelegate:(id)arg1;
- (NSUInteger)streamStatus;
- (NSUInteger)totalBytes;

@end
