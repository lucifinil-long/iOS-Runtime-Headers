/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class ACAccountStore, NSMutableSet;

@interface IMPasswordManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableSet *_runningQueries;
}

+ (id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(BOOL)arg3 showForgetPassword:(BOOL)arg4;
+ (id)sharedInstance;

- (void)cancelRequestID:(id)arg1;
- (void)dealloc;
- (void)fetchAuthTokenForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 completionBlock:(id)arg4;
- (void)fetchPasswordForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 completionBlock:(id)arg4;
- (id)init;
- (void)requestAuthTokenForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 outRequestID:(id*)arg5 completionBlock:(id)arg6;
- (void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 outRequestID:(id*)arg5 completionBlock:(id)arg6;
- (void)setAuthTokenForUsername:(id)arg1 service:(id)arg2 authToken:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id)arg5;
- (void)setPasswordForUsername:(id)arg1 service:(id)arg2 password:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id)arg5;
- (BOOL)supportsAuthTokenRequests;

@end