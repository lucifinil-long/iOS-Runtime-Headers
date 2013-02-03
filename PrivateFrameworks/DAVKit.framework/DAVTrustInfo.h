/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class DAVSession;

@interface DAVTrustInfo : NSObject {
    BOOL _allows;
    DAVSession *_session;
    struct __SecTrust { } *_trust;
}

- (BOOL)allowsTrust;
- (void)dealloc;
- (id)host;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 session:(id)arg2;
- (id)session;
- (void)setAllowsTrust:(BOOL)arg1;
- (struct __SecTrust { }*)trust;

@end
