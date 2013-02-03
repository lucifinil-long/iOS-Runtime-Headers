/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, GMMDateTime, NSString;

@interface GMMStep : PBCodable {
    NSMutableArray *_alertIndexs;
    NSString *_arrivalAddress;
    GMMDateTime *_arrivalDateTime;
    NSString *_departureAddress;
    GMMDateTime *_departureDateTime;
    NSInteger _departureIntervalSeconds;
    NSInteger _departurePointIndex;
    NSString *_deprecatedDistance;
    NSString *_deprecatedDuration;
    NSString *_direction;
    NSInteger _distanceMeters;
    NSInteger _durationSeconds;
    BOOL _hasDepartureIntervalSeconds;
    BOOL _hasDeparturePointIndex;
    BOOL _hasDistanceMeters;
    BOOL _hasDurationSeconds;
    BOOL _hasIconId;
    BOOL _hasManeuverTurnNumber;
    BOOL _hasManeuverTurnSide;
    BOOL _hasManeuverType;
    BOOL _hasShowInInstructions;
    BOOL _hasStepType;
    BOOL _hasTransitAgencyIndex;
    long long _iconId;
    NSString *_iconSummaryText;
    NSString *_instructions;
    NSInteger _maneuverTurnNumber;
    NSInteger _maneuverTurnSide;
    NSInteger _maneuverType;
    NSMutableArray *_notices;
    BOOL _showInInstructions;
    NSMutableArray *_stepCues;
    NSInteger _stepType;
    NSString *_streetViewPanoId;
    NSInteger _transitAgencyIndex;
}

@property(retain) NSString *deprecatedDuration; /* unknown property attribute: V_deprecatedDuration */
@property(retain) NSString *deprecatedDistance; /* unknown property attribute: V_deprecatedDistance */
@property(retain) NSMutableArray *stepCues; /* unknown property attribute: V_stepCues */
@property(readonly) BOOL hasManeuverTurnNumber; /* unknown property attribute: V_hasManeuverTurnNumber */
@property NSInteger maneuverTurnNumber; /* unknown property attribute: V_maneuverTurnNumber */
@property(readonly) BOOL hasManeuverTurnSide; /* unknown property attribute: V_hasManeuverTurnSide */
@property NSInteger maneuverTurnSide; /* unknown property attribute: V_maneuverTurnSide */
@property(readonly) BOOL hasManeuverType; /* unknown property attribute: V_hasManeuverType */
@property NSInteger maneuverType; /* unknown property attribute: V_maneuverType */
@property(retain) NSMutableArray *notices; /* unknown property attribute: V_notices */
@property(retain) NSMutableArray *alertIndexs; /* unknown property attribute: V_alertIndexs */
@property(retain) NSString *streetViewPanoId; /* unknown property attribute: V_streetViewPanoId */
@property(readonly) BOOL hasTransitAgencyIndex; /* unknown property attribute: V_hasTransitAgencyIndex */
@property NSInteger transitAgencyIndex; /* unknown property attribute: V_transitAgencyIndex */
@property(readonly) BOOL hasShowInInstructions; /* unknown property attribute: V_hasShowInInstructions */
@property BOOL showInInstructions; /* unknown property attribute: V_showInInstructions */
@property(retain) NSString *iconSummaryText; /* unknown property attribute: V_iconSummaryText */
@property(readonly) BOOL hasIconId; /* unknown property attribute: V_hasIconId */
@property long long iconId; /* unknown property attribute: V_iconId */
@property(retain) NSString *direction; /* unknown property attribute: V_direction */
@property(readonly) BOOL hasDepartureIntervalSeconds; /* unknown property attribute: V_hasDepartureIntervalSeconds */
@property NSInteger departureIntervalSeconds; /* unknown property attribute: V_departureIntervalSeconds */
@property(retain) GMMDateTime *arrivalDateTime; /* unknown property attribute: V_arrivalDateTime */
@property(retain) GMMDateTime *departureDateTime; /* unknown property attribute: V_departureDateTime */
@property(retain) NSString *arrivalAddress; /* unknown property attribute: V_arrivalAddress */
@property(retain) NSString *departureAddress; /* unknown property attribute: V_departureAddress */
@property(readonly) BOOL hasDeparturePointIndex; /* unknown property attribute: V_hasDeparturePointIndex */
@property NSInteger departurePointIndex; /* unknown property attribute: V_departurePointIndex */
@property(readonly) BOOL hasDurationSeconds; /* unknown property attribute: V_hasDurationSeconds */
@property NSInteger durationSeconds; /* unknown property attribute: V_durationSeconds */
@property(readonly) BOOL hasDistanceMeters; /* unknown property attribute: V_hasDistanceMeters */
@property NSInteger distanceMeters; /* unknown property attribute: V_distanceMeters */
@property(retain) NSString *instructions; /* unknown property attribute: V_instructions */
@property(readonly) BOOL hasStepType; /* unknown property attribute: V_hasStepType */
@property NSInteger stepType; /* unknown property attribute: V_stepType */
@property(readonly) NSInteger alertIndexsCount;
@property(readonly) BOOL hasArrivalAddress;
@property(readonly) BOOL hasArrivalDateTime;
@property(readonly) BOOL hasDepartureAddress;
@property(readonly) BOOL hasDepartureDateTime;
@property(readonly) BOOL hasDeprecatedDistance;
@property(readonly) BOOL hasDeprecatedDuration;
@property(readonly) BOOL hasDirection;
@property(readonly) BOOL hasIconSummaryText;
@property(readonly) BOOL hasInstructions;
@property(readonly) BOOL hasStreetViewPanoId;
@property(readonly) NSInteger noticesCount;
@property(readonly) NSInteger stepCuesCount;

- (void)addAlertIndex:(NSInteger)arg1;
- (void)addNotice:(id)arg1;
- (void)addStepCue:(id)arg1;
- (NSInteger)alertIndexAtIndex:(NSUInteger)arg1;
- (id)alertIndexs;
- (NSInteger)alertIndexsCount;
- (id)arrivalAddress;
- (id)arrivalDateTime;
- (void)dealloc;
- (id)departureAddress;
- (id)departureDateTime;
- (NSInteger)departureIntervalSeconds;
- (NSInteger)departurePointIndex;
- (id)deprecatedDistance;
- (id)deprecatedDuration;
- (id)description;
- (id)description;
- (id)direction;
- (NSInteger)distanceMeters;
- (NSInteger)durationSeconds;
- (BOOL)hasArrivalAddress;
- (BOOL)hasArrivalDateTime;
- (BOOL)hasDepartureAddress;
- (BOOL)hasDepartureDateTime;
- (BOOL)hasDepartureIntervalSeconds;
- (BOOL)hasDeparturePointIndex;
- (BOOL)hasDeprecatedDistance;
- (BOOL)hasDeprecatedDuration;
- (BOOL)hasDirection;
- (BOOL)hasDistanceMeters;
- (BOOL)hasDurationSeconds;
- (BOOL)hasIconId;
- (BOOL)hasIconSummaryText;
- (BOOL)hasInstructions;
- (BOOL)hasManeuverTurnNumber;
- (BOOL)hasManeuverTurnSide;
- (BOOL)hasManeuverType;
- (BOOL)hasShowInInstructions;
- (BOOL)hasStepType;
- (BOOL)hasStreetViewPanoId;
- (BOOL)hasTransitAgencyIndex;
- (long long)iconId;
- (id)iconSummaryText;
- (id)init;
- (id)instructions;
- (NSInteger)maneuverTurnNumber;
- (NSInteger)maneuverTurnSide;
- (NSInteger)maneuverType;
- (id)noticeAtIndex:(NSUInteger)arg1;
- (id)notices;
- (NSInteger)noticesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setAlertIndex:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setAlertIndexs:(id)arg1;
- (void)setArrivalAddress:(id)arg1;
- (void)setArrivalDateTime:(id)arg1;
- (void)setDepartureAddress:(id)arg1;
- (void)setDepartureDateTime:(id)arg1;
- (void)setDepartureIntervalSeconds:(NSInteger)arg1;
- (void)setDeparturePointIndex:(NSInteger)arg1;
- (void)setDeprecatedDistance:(id)arg1;
- (void)setDeprecatedDuration:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setDistanceMeters:(NSInteger)arg1;
- (void)setDurationSeconds:(NSInteger)arg1;
- (void)setIconId:(long long)arg1;
- (void)setIconSummaryText:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setManeuverTurnNumber:(NSInteger)arg1;
- (void)setManeuverTurnSide:(NSInteger)arg1;
- (void)setManeuverType:(NSInteger)arg1;
- (void)setNotice:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setNotices:(id)arg1;
- (void)setShowInInstructions:(BOOL)arg1;
- (void)setStepCue:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setStepCues:(id)arg1;
- (void)setStepType:(NSInteger)arg1;
- (void)setStreetViewPanoId:(id)arg1;
- (void)setTransitAgencyIndex:(NSInteger)arg1;
- (BOOL)showInInstructions;
- (id)stepCueAtIndex:(NSUInteger)arg1;
- (id)stepCues;
- (NSInteger)stepCuesCount;
- (NSInteger)stepType;
- (id)streetViewPanoId;
- (NSInteger)transitAgencyIndex;
- (void)writeTo:(id)arg1;

@end
