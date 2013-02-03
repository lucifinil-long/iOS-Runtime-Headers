/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class ActivityMonitor, NSInvocation;

@interface MonitoredInvocation : NSInvocation {
    NSInvocation *_invocation;
    ActivityMonitor *_monitor;
    BOOL _shouldLogInvocation;
}

+ (id)invocationWithInvocation:(id)arg1 taskName:(id)arg2 priority:(NSInteger)arg3 canBeCancelled:(BOOL)arg4;
+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(NSInteger)arg6 canBeCancelled:(BOOL)arg7;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(NSInteger)arg5 canBeCancelled:(BOOL)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(NSInteger)arg4 canBeCancelled:(BOOL)arg5;

- (void)dealloc;
- (id)description;
- (void)invoke;
- (id)monitor;
- (void)setMonitor:(id)arg1;
- (void)setShouldLogInvocation:(BOOL)arg1;
- (BOOL)shouldLogInvocation;

@end
