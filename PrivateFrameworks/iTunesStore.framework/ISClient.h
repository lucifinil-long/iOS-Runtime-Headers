/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock, NSString;

@interface ISClient : NSObject <NSCoding> {
    NSString *_identifier;
    NSLock *_lock;
    NSString *_partnerHeader;
    BOOL _prefersHighQuality;
    NSString *_storeFrontID;
}

@property(retain) NSString *storeFrontID; /* unknown property attribute: V_storeFrontID */
@property BOOL prefersHighQuality; /* unknown property attribute: V_prefersHighQuality */
@property(retain) NSString *partnerHeader; /* unknown property attribute: V_partnerHeader */
@property(retain) NSString *identifier; /* unknown property attribute: V_identifier */

+ (id)currentClient;

- (id)_copyDefaultStoreFrontID;
- (BOOL)_defaultPrefersHighQuality;
- (void)_handleStoreFrontChangedNotification;
- (void)_postStoreFrontChangedToValue:(id)arg1;
- (void)_registerForStoreFrontChangeNotification;
- (BOOL)_setStoreFrontID:(id)arg1 updateLockdown:(BOOL)arg2;
- (id)_storeFrontIDForBase:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)partnerHeader;
- (BOOL)prefersHighQuality;
- (void)setIdentifier:(id)arg1;
- (void)setPartnerHeader:(id)arg1;
- (void)setPrefersHighQuality:(BOOL)arg1;
- (void)setStoreFrontID:(id)arg1;
- (id)storeFrontID;

@end
