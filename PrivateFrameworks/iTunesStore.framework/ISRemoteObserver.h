/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray;

@interface ISRemoteObserver : NSObject {
    unsigned int _watchingDaemon : 1;
    id _delegate;
    NSMutableArray *_pendingInvocations;
}

@property id delegate; /* unknown property attribute: V_delegate */
@property(getter=isWatching,readonly) BOOL watching;

+ (void)_checkInObserver:(id)arg1;
+ (void)_checkOutObserver:(id)arg1;
+ (void)startAllObservers;

- (void)_drainInvocationQueue;
- (void)_migDidUnblock:(id)arg1;
- (void)_notificationCenterClosed:(id)arg1;
- (void)_notificationCenterOpened:(id)arg1;
- (void)_performSelector:(SEL)arg1 onObjectArgumentsOfInvocation:(id)arg2;
- (void)_stop:(BOOL)arg1;
- (void)cancelInvocationsForTarget:(id)arg1 selector:(SEL)arg2;
- (void)cancelInvocationsForTarget:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isWatching;
- (void)performInvocationAfterUnblock:(id)arg1;
- (void)performSelectorAfterUnblock:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end