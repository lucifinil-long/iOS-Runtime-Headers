/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class EAAccessoryInternal;

@interface EAAccessory : NSObject {
    EAAccessoryInternal *_internal;
}

@property <EAAccessoryDelegate> *delegate;
@property(readonly) NSString *firmwareRevision;
@property(readonly) NSString *hardwareRevision;
@property(readonly) NSString *manufacturer;
@property(readonly) NSString *modelNumber;
@property(readonly) NSString *name;
@property(readonly) NSArray *protocolStrings;
@property(readonly) NSString *serialNumber;
@property(getter=isConnected,readonly) BOOL connected;
@property(readonly) NSUInteger connectionID;

- (id)_initWithAccessory:(id)arg1;
- (id)_protocolIDForProtocolString:(id)arg1;
- (void)_setConnected:(BOOL)arg1;
- (id)_shortDescription;
- (BOOL)accessoryHasNMEASentencesAvailable;
- (NSUInteger)connectionID;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)firmwareRevision;
- (BOOL)getEphemerisExpirationInterval:(double*)arg1;
- (BOOL)getEphemerisRecommendRefreshInterval:(double*)arg1;
- (BOOL)getEphemerisURL:(id*)arg1;
- (BOOL)getNMEASentence:(id*)arg1;
- (id)hardwareRevision;
- (id)init;
- (BOOL)isConnected;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (id)protocolStrings;
- (BOOL)sendEphemeris:(id)arg1;
- (BOOL)sendEphemerisPointDataGpsWeek:(NSUInteger)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (BOOL)sendGpsWeek:(NSUInteger)arg1 gpsTOW:(double)arg2;
- (id)serialNumber;
- (void)setDelegate:(id)arg1;
- (BOOL)setNMEASentencesToFilter:(id)arg1;

@end
