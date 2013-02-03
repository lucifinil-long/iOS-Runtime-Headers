/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface LBSGAddress : PBCodable {
    NSMutableArray *_components;
    NSMutableArray *_formattedAddressLines;
}

@property(retain) NSMutableArray *components; /* unknown property attribute: V_components */
@property(retain) NSMutableArray *formattedAddressLines; /* unknown property attribute: V_formattedAddressLines */
@property(readonly) NSInteger componentsCount;
@property(readonly) NSInteger formattedAddressLinesCount;

- (void)addComponent:(id)arg1;
- (void)addFormattedAddressLine:(id)arg1;
- (id)componentAtIndex:(NSUInteger)arg1;
- (id)components;
- (NSInteger)componentsCount;
- (void)dealloc;
- (id)description;
- (id)formattedAddressLineAtIndex:(NSUInteger)arg1;
- (id)formattedAddressLines;
- (NSInteger)formattedAddressLinesCount;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setComponent:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setComponents:(id)arg1;
- (void)setFormattedAddressLine:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFormattedAddressLines:(id)arg1;
- (void)writeTo:(id)arg1;

@end
