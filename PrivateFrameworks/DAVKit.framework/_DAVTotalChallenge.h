/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSString;

@interface _DAVTotalChallenge : DAVChallenge {
    struct __CFHTTPMessage { } *badAuthResponse;
    NSString *password;
    BOOL supportsDigest;
    NSString *username;
}

- (BOOL)addAuthHeaderToMessage:(struct __CFHTTPMessage { }*)arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithBadAuthResponse:(struct __CFHTTPMessage { }*)arg1 username:(id)arg2 password:(id)arg3 supportsDigest:(BOOL)arg4;

@end
