/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
    id _internal;
}

@property(copy,readonly) NSString *productIdentifier;
@property(copy,readonly) NSData *requestData;
@property(readonly) NSInteger quantity;

+ (id)paymentWithProduct:(id)arg1;
+ (id)paymentWithProductIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)productIdentifier;
- (NSInteger)quantity;
- (id)requestData;

@end
