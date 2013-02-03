/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString, LBSGLatLng;

@interface LBSGLocation : PBCodable {
    NSInteger _accuracy;
    NSInteger _altitude;
    NSInteger _confidence;
    NSMutableArray *_features;
    BOOL _hasAccuracy;
    BOOL _hasAltitude;
    BOOL _hasConfidence;
    BOOL _hasHeading;
    BOOL _hasLocType;
    BOOL _hasObsolete;
    BOOL _hasTimestamp;
    BOOL _hasVelocity;
    BOOL _hasVerticalAccuracy;
    NSInteger _heading;
    LBSGLatLng *_latLng;
    NSInteger _locType;
    NSString *_locationString;
    NSString *_misc;
    BOOL _obsolete;
    NSString *_source;
    long long _timestamp;
    NSInteger _velocity;
    NSInteger _verticalAccuracy;
}

@property(retain) NSString *locationString; /* unknown property attribute: V_locationString */
@property(readonly) BOOL hasHeading; /* unknown property attribute: V_hasHeading */
@property NSInteger heading; /* unknown property attribute: V_heading */
@property(readonly) BOOL hasVelocity; /* unknown property attribute: V_hasVelocity */
@property NSInteger velocity; /* unknown property attribute: V_velocity */
@property(readonly) BOOL hasVerticalAccuracy; /* unknown property attribute: V_hasVerticalAccuracy */
@property NSInteger verticalAccuracy; /* unknown property attribute: V_verticalAccuracy */
@property(readonly) BOOL hasAltitude; /* unknown property attribute: V_hasAltitude */
@property NSInteger altitude; /* unknown property attribute: V_altitude */
@property(retain) NSString *misc; /* unknown property attribute: V_misc */
@property(readonly) BOOL hasLocType; /* unknown property attribute: V_hasLocType */
@property NSInteger locType; /* unknown property attribute: V_locType */
@property(readonly) BOOL hasObsolete; /* unknown property attribute: V_hasObsolete */
@property BOOL obsolete; /* unknown property attribute: V_obsolete */
@property(readonly) BOOL hasTimestamp; /* unknown property attribute: V_hasTimestamp */
@property long long timestamp; /* unknown property attribute: V_timestamp */
@property(retain) NSMutableArray *features; /* unknown property attribute: V_features */
@property(readonly) BOOL hasConfidence; /* unknown property attribute: V_hasConfidence */
@property NSInteger confidence; /* unknown property attribute: V_confidence */
@property(readonly) BOOL hasAccuracy; /* unknown property attribute: V_hasAccuracy */
@property NSInteger accuracy; /* unknown property attribute: V_accuracy */
@property(retain) NSString *source; /* unknown property attribute: V_source */
@property(retain) LBSGLatLng *latLng; /* unknown property attribute: V_latLng */
@property(readonly) NSInteger featuresCount;
@property(readonly) BOOL hasLatLng;
@property(readonly) BOOL hasLocationString;
@property(readonly) BOOL hasMisc;
@property(readonly) BOOL hasSource;

- (NSInteger)accuracy;
- (void)addFeature:(id)arg1;
- (NSInteger)altitude;
- (NSInteger)confidence;
- (void)dealloc;
- (id)description;
- (id)featureAtIndex:(NSUInteger)arg1;
- (id)features;
- (NSInteger)featuresCount;
- (BOOL)hasAccuracy;
- (BOOL)hasAltitude;
- (BOOL)hasConfidence;
- (BOOL)hasHeading;
- (BOOL)hasLatLng;
- (BOOL)hasLocType;
- (BOOL)hasLocationString;
- (BOOL)hasMisc;
- (BOOL)hasObsolete;
- (BOOL)hasSource;
- (BOOL)hasTimestamp;
- (BOOL)hasVelocity;
- (BOOL)hasVerticalAccuracy;
- (NSInteger)heading;
- (id)init;
- (id)latLng;
- (NSInteger)locType;
- (id)locationString;
- (id)misc;
- (BOOL)obsolete;
- (BOOL)readFrom:(id)arg1;
- (void)setAccuracy:(NSInteger)arg1;
- (void)setAltitude:(NSInteger)arg1;
- (void)setConfidence:(NSInteger)arg1;
- (void)setFeature:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFeatures:(id)arg1;
- (void)setHeading:(NSInteger)arg1;
- (void)setLatLng:(id)arg1;
- (void)setLocType:(NSInteger)arg1;
- (void)setLocationString:(id)arg1;
- (void)setMisc:(id)arg1;
- (void)setObsolete:(BOOL)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(long long)arg1;
- (void)setVelocity:(NSInteger)arg1;
- (void)setVerticalAccuracy:(NSInteger)arg1;
- (id)source;
- (long long)timestamp;
- (NSInteger)velocity;
- (NSInteger)verticalAccuracy;
- (void)writeTo:(id)arg1;

@end
