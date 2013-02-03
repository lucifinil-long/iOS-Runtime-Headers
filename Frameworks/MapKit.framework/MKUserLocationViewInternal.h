/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKAccuracyLayer, MKUserLocationView, CALayer, MKUserLocationLayer;

@interface MKUserLocationViewInternal : NSObject {
    struct { 
        unsigned int animatedSublayers : 1; 
        unsigned int disableAccuracyDidUpdate : 1; 
        unsigned int enforceLowerBound : 1; 
        unsigned int shouldDisplayHalo : 1; 
        unsigned int shouldDisplayEffects : 1; 
        unsigned int shouldDisplayAccuracy : 1; 
        unsigned int shouldDisplayHeading : 1; 
        unsigned int stale : 1; 
        unsigned int delegateAccuracyDidUpdate : 1; 
        unsigned int delegateDidQuiesce : 1; 
        unsigned int willAnimateProperty : 1; 
    float accuracy;
    MKAccuracyLayer *accuracyLayer;
    CALayer *bounceLayer;
    id delegate;
    CALayer *dotLayer;
    } flags;
    CALayer *haloLayer;
    double headingAccuracy;
    CALayer *headingLayer;
    MKUserLocationLayer *layer;
    NSUInteger mapType;
    CALayer *userLayer;
    MKUserLocationView *view;
    NSInteger zoomDirection;
}

@property NSInteger zoomDirection; /* unknown property attribute: VzoomDirection */
@property NSUInteger mapType; /* unknown property attribute: VmapType */
@property double headingAccuracy; /* unknown property attribute: VheadingAccuracy */
@property float accuracy; /* unknown property attribute: Vaccuracy */
@property id delegate; /* unknown property attribute: Vdelegate */
@property(readonly) MKHoverAnimation *hoverAnimation;
@property(readonly) MKUserLocationPositionAnimation *positionAnimation;
@property BOOL animatedSublayers;
@property(readonly) BOOL canHalo;
@property(readonly) BOOL canHaloExcludingAccuracy;
@property(readonly) BOOL canHaloExcludingEffects;
@property BOOL disableAccuracyDidUpdate;
@property(getter=isDisplayingAccuracy,readonly) BOOL displayingAccuracy;
@property(readonly) BOOL hasHalo;
@property(readonly) BOOL hasQuiesced;
@property(getter=isHovering,readonly) BOOL hovering;
@property(readonly) BOOL needsHalo;
@property CGPoint position;
@property BOOL shouldDisplayAccuracy;
@property BOOL shouldDisplayEffects;
@property BOOL shouldDisplayHalo;
@property BOOL shouldDisplayHeading;
@property(getter=isStale) BOOL stale;

+ (float)accuracyDiameter:(float)arg1 level:(NSUInteger)arg2;
+ (id)bounceImages;
+ (id)dotImage;
+ (id)dotPressedImage;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })effectiveFrameWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGSize { float x1; float x2; })effectsSize;
+ (void)frameLayer:(id)arg1 initialAccuracy:(float*)arg2 restAccuracy:(float*)arg3;
+ (id)greyDotImage;
+ (id)greyDotPressedImage;
+ (id)haloImages;
+ (id)headingAngleLargeImage;
+ (id)headingAngleMediumImage;
+ (id)headingAngleSmallImage;
+ (void)initialize;
+ (float)maxVisibleAccuracyDiameter;

- (float)accuracy;
- (id)accuracyAnimation;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)animatedSublayers;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)applyScale:(float)arg1 animated:(BOOL)arg2;
- (BOOL)canHalo;
- (BOOL)canHaloExcludingAccuracy;
- (BOOL)canHaloExcludingEffects;
- (void)clampAccuracyValue:(float*)arg1;
- (void)clearViewReferences;
- (void)dealloc;
- (id)delegate;
- (void)didBeginZoom;
- (void)didEndZoom;
- (BOOL)disableAccuracyDidUpdate;
- (id)dotBounceAnimation;
- (void)drawAccuracy:(float)arg1;
- (id)dropUserLocationBreadCrumbAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)haloAnimation;
- (BOOL)hasHalo;
- (BOOL)hasQuiesced;
- (double)headingAccuracy;
- (id)headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (id)hoverAnimation;
- (NSUInteger)indexForSubLayer:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)insertSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)insertSublayer:(id)arg1;
- (BOOL)isAccuracyChanging;
- (BOOL)isDotBouncing;
- (BOOL)isDotTeleporting;
- (BOOL)isHovering;
- (BOOL)isStale;
- (NSUInteger)mapType;
- (BOOL)needsHalo;
- (void)orderInDotLayer;
- (void)orderInLayer:(id)arg1 beginTime:(double)arg2;
- (void)pauseHalo;
- (void)pauseHover;
- (struct CGPoint { float x1; float x2; })position;
- (id)positionAnimation;
- (void)removeHover;
- (void)removeSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)removeSublayers;
- (void)resetAccuracy;
- (void)resetScale;
- (void)resumeHalo;
- (void)resumeHover;
- (void)setAccuracy:(float)arg1;
- (void)setAnimatedSublayers:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableAccuracyDidUpdate:(BOOL)arg1;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setMapType:(NSUInteger)arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShouldDisplayAccuracy:(BOOL)arg1;
- (void)setShouldDisplayEffects:(BOOL)arg1;
- (void)setShouldDisplayHalo:(BOOL)arg1;
- (void)setShouldDisplayHeading:(BOOL)arg1;
- (void)setStale:(BOOL)arg1;
- (void)setZoomDirection:(NSInteger)arg1 deltaScale:(float)arg2;
- (void)setZoomDirection:(NSInteger)arg1;
- (BOOL)shouldDisplayAccuracy;
- (void)shouldDisplayAccuracyDidChange;
- (BOOL)shouldDisplayEffects;
- (void)shouldDisplayEffectsDidChange;
- (BOOL)shouldDisplayHalo;
- (BOOL)shouldDisplayHeading;
- (void)shouldDisplayHeadingDidChange;
- (BOOL)sizeAccuracyLayerToFit:(float)arg1 animated:(BOOL)arg2;
- (void)staleDidChange;
- (void)stopHover;
- (void)terminateHoverAccuracy:(float)arg1 duration:(double)arg2;
- (void)updateDot;
- (void)updateHalo;
- (void)updateHeading;
- (void)updateHover;
- (void)userLocationAccuracyDidUpdate;
- (void)userLocationViewAccuracyDidUpdate;
- (void)userLocationViewDidUpdate;
- (NSInteger)zoomDirection;

@end
