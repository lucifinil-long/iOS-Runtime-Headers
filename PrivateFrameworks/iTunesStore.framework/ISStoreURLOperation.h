/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, NSString, ISAuthenticationContext;

@interface ISStoreURLOperation : ISURLOperation {
    NSNumber *_authenticatedDSID;
    ISAuthenticationContext *_authenticationContext;
    NSInteger _bagType;
    BOOL _needsAuthentication;
    BOOL _needsURLBag;
    NSString *_urlBagKey;
    BOOL _urlKnownToBeTrusted;
}

@property BOOL urlKnownToBeTrusted; /* unknown property attribute: V_urlKnownToBeTrusted */
@property(retain) NSString *urlBagKey; /* unknown property attribute: V_urlBagKey */
@property BOOL needsURLBag; /* unknown property attribute: V_needsURLBag */
@property BOOL needsAuthentication; /* unknown property attribute: V_needsAuthentication */
@property NSInteger bagType; /* unknown property attribute: V_bagType */
@property(retain) NSNumber *authenticatedDSID; /* unknown property attribute: V_authenticatedDSID */
@property(retain) ISAuthenticationContext *authenticationContext; /* unknown property attribute: V_authenticationContext */
@property <ISURLOperationDelegate> *delegate;

+ (void)addITunesStoreHeadersToRequest:(id)arg1;
+ (void)handleITunesStoreResponseHeaders:(id)arg1;
+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;
+ (id)propertyListOperationWithURLBagKey:(id)arg1;
+ (void)setDefaultClientApplication:(id)arg1;

- (id)_account;
- (BOOL)_authenticateReturningError:(id*)arg1;
- (BOOL)_canSendTokenToURL:(id)arg1;
- (id)_copyURLBagContext;
- (void)_runURLOperation;
- (id)authenticatedAccountDSID;
- (id)authenticatedDSID;
- (id)authenticationContext;
- (NSInteger)bagType;
- (id)createRequest;
- (void)dealloc;
- (BOOL)handleRedirectFromDataProvider:(id)arg1;
- (void)handleResponse:(id)arg1;
- (id)init;
- (BOOL)needsAuthentication;
- (BOOL)needsURLBag;
- (void)run;
- (void)setAuthenticatedDSID:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setBagType:(NSInteger)arg1;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (void)setNeedsURLBag:(BOOL)arg1;
- (void)setUrlBagKey:(id)arg1;
- (void)setUrlKnownToBeTrusted:(BOOL)arg1;
- (id)urlBagKey;
- (BOOL)urlKnownToBeTrusted;

@end
