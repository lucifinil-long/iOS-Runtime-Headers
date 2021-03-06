/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShortTokenLookupInfo : NSObject <NSCopying> {
    BOOL  _forceDSRefetch;
    NSString * _routingKey;
    NSData * _shortSharingTokenHashData;
    BOOL  _shouldFetchRootRecord;
}

@property (nonatomic) BOOL forceDSRefetch;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) NSData *shortSharingTokenHashData;
@property (nonatomic) BOOL shouldFetchRootRecord;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)forceDSRefetch;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)routingKey;
- (void)setForceDSRefetch:(BOOL)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShortSharingTokenHashData:(id)arg1;
- (void)setShouldFetchRootRecord:(BOOL)arg1;
- (id)shortSharingTokenHashData;
- (BOOL)shouldFetchRootRecord;

@end
