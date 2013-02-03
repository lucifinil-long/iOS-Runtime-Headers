/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject {
    NSURLCredentialStorageInternal *_internal;
}

+ (id)sharedCredentialStorage;

- (id)_internalInit;
- (id)allCredentials;
- (id)credentialsForProtectionSpace:(id)arg1;
- (void)dealloc;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (id)init;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;

@end
