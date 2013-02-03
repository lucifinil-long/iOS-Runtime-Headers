/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;

@interface GMMIconDefinition : PBCodable {
    long long _iconId;
    NSData *_image;
}

@property(retain) NSData *image; /* unknown property attribute: V_image */
@property long long iconId; /* unknown property attribute: V_iconId */
@property(readonly) BOOL hasImage;

- (void)dealloc;
- (id)description;
- (BOOL)hasImage;
- (long long)iconId;
- (id)image;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setIconId:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
