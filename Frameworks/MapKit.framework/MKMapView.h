/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapViewInternal;

@interface MKMapView : UIView <NSCoding> {
    MKMapViewInternal *_internal;
}

@property(readonly) NSArray *annotations;
@property <MKMapViewDelegate> *delegate;
@property(retain) CLLocation *fixedUserLocation;
@property(retain) MKMapViewPositioningChange *positioningChange;
@property(retain) CLLocation *predictedUserLocation;
@property(copy) NSArray *selectedAnnotations;
@property(readonly) MKUserLocation *userLocation;
@property(retain) MKUserLocationView *userLocationView;
@property(readonly) CGRect annotationVisibleRect;
@property ? centerCoordinate;
@property(getter=isHeadingEnabled) BOOL headingEnabled;
@property BOOL ignoreLocationUpdates;
@property BOOL liveTrackingAutoSelectZoomLevel;
@property NSUInteger mapType;
@property ? region;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property BOOL showsUserLocation;
@property(getter=isUserLocationChangeDone,readonly) BOOL userLocationChangeDone;
@property NSInteger userLocationSource;
@property(getter=isUserLocationVisible,readonly) BOOL userLocationVisible;
@property(getter=isZoomEnabled) BOOL zoomEnabled;

+ (void)initialize;
+ (NSUInteger)minZoomLevel;
+ (void)setUserLocationCacheDuration:(double)arg1;
+ (double)userLocationCacheDuration;

- (id)_addLevelViewAtLevel:(NSInteger)arg1 updateScale:(BOOL)arg2;
- (void)_adjustPositionViewWithPreviousScrollerOffset:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_allVisibleTilesAreLoaded;
- (struct CGPoint { float x1; float x2; })_anchorWithContentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_animateRoutePositionViewPan;
- (BOOL)_animateScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 type:(NSInteger)arg3 context:(id)arg4;
- (BOOL)_animateScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 type:(NSInteger)arg3;
- (BOOL)_animationTypeIgnoresEvents:(NSInteger)arg1;
- (void)_applyHeadingChange:(id)arg1 layer:(id)arg2 annotationViews:(id)arg3 cc:(BOOL)arg4 delegate:(BOOL)arg5 rotationType:(NSInteger)arg6;
- (void)_cancelAccessories;
- (void)_cancelAccessoriesAndDoubleTap;
- (void)_cancelDoubleTap;
- (void)_cancelRunPositioningChange;
- (void)_cancelScrollToReCenterUser;
- (void)_cancelScrollingAnimation;
- (void)_cancelStartEffects;
- (struct CGPoint { float x1; float x2; })_centerPoint;
- (struct CGPoint { float x1; float x2; })_centerPointOffset;
- (void)_clearDistantTilesIfNecessaryForMapType:(NSUInteger)arg1;
- (void)_clearEventMode:(NSInteger)arg1;
- (void)_clearFixedUserLocation;
- (void)_clearTiles;
- (void)_clearTilesForMapType:(NSUInteger)arg1;
- (id)_createLevelViewWithScale:(NSInteger)arg1;
- (BOOL)_deviceIsPluggedIn;
- (void)_didChangeRegionMidstream:(BOOL)arg1;
- (void)_didDisplayMapAtCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(NSUInteger)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (void)_didHideRoute;
- (void)_didLoadOrMoveMap;
- (void)_didShowRoute;
- (void)_ensureLiveTrackingResourcesInitialized;
- (void)_finalizeChange:(id)arg1 rotation:(float)arg2 layer:(id)arg3 type:(NSInteger)arg4;
- (void)_firstTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_fixUserLocationFromPresentationValue;
- (void)_forceTiling;
- (void)_freezeScrollingAnimation;
- (void)_freezeUserLocationView;
- (double)_goToCenterCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(float)arg2 animationType:(NSInteger)arg3;
- (void)_goToCurrentLocationOnTransitionEnd;
- (void)_goToDefaultLocation;
- (void)_goToUserLocation:(BOOL)arg1 shouldZoom:(BOOL)arg2;
- (BOOL)_hasHovered;
- (BOOL)_haveNewPendingLocation;
- (id)_initAndEnableLoading:(BOOL)arg1 startGMMSession:(BOOL)arg2;
- (void)_insertSubview:(id)arg1;
- (BOOL)_isHandlingUserEvent;
- (BOOL)_isHoverScheduled;
- (BOOL)_isHovering;
- (BOOL)_isInteractionEnabled;
- (BOOL)_isLocationCoordinatesInView:(id)arg1;
- (BOOL)_isOrWillHover;
- (BOOL)_isReadyToRunPositioningChange;
- (BOOL)_isScrolling;
- (BOOL)_isScrollingAnimation;
- (BOOL)_isTilingEnabled;
- (BOOL)_isUserInitiated;
- (BOOL)_isUserLocationCoordinateInView;
- (BOOL)_isUserLocationInView:(BOOL)arg1;
- (BOOL)_isUserLocationNearEventPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_isUserLocationNearPoint:(struct CGPoint { float x1; float x2; })arg1 hitSize:(float)arg2;
- (BOOL)_isVisible;
- (void)_lastTouchEnded:(id)arg1 withEvent:(id)arg2;
- (id*)_levelViewsForMapType:(NSUInteger)arg1;
- (void)_logViews;
- (id)_mapLevelView;
- (id)_mapLevelViewForLevel:(NSInteger)arg1;
- (id)_mapLevelViewForScale:(float)arg1;
- (id*)_mapLevelViews;
- (float)_maxZoomLevelForCoordinate:(struct { double x1; double x2; })arg1;
- (float)_maxZoomLevelForCurrentPosition;
- (NSInteger)_maxZoomLevelForMapType:(NSUInteger)arg1;
- (NSInteger)_minZoomLevelForMapType:(NSUInteger)arg1;
- (BOOL)_needsToPanRoutePositionView;
- (void)_notifyWillPanRoutePositionWithDuration:(double)arg1;
- (double)_panDurationFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 forRoute:(BOOL)arg3;
- (void)_pauseUserLocationUpdates;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_positioningChange:(BOOL)arg1;
- (id)_positioningChangeWithLocation:(id)arg1 source:(NSInteger)arg2 hasFocus:(BOOL)arg3 isUpdated:(BOOL)arg4;
- (void)_prepareForZoomAnimationToScale:(float)arg1 fromEvent:(struct __GSEvent { }*)arg2;
- (NSInteger)_prepareZoomCoordinatesFromEvent:(struct __GSEvent { }*)arg1 lockOnCenter:(BOOL)arg2;
- (void)_reachabilityChanged:(id)arg1;
- (id)_regionsForRouteSteps;
- (void)_removeScrollingAnimation;
- (void)_resetMapAnchorPoint:(BOOL)arg1;
- (void)_resetOverlayViewPerspective;
- (void)_resetPositioningChange;
- (void)_resetRouteLoader;
- (void)_resumeSearchResultProcessingAndPinDropAnimations;
- (void)_resumeUserLocationUpdates:(BOOL)arg1;
- (NSInteger)_roundedZoomLevel;
- (struct CGPoint { float x1; float x2; })_routePositionCenter;
- (void)_runPositioningChange;
- (void)_runPositioningChangeIfNeeded:(id)arg1;
- (void)_runPositioningChangeIfNeeded;
- (float)_scaleForScale:(float)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (float)_scaleForScale:(float)arg1 longLat:(struct CGPoint { float x1; float x2; })arg2;
- (float)_scaleForScale:(float)arg1;
- (float)_scaleForScaleUsingCurrentPosition:(float)arg1;
- (void)_scheduleRunPositioningChange:(id)arg1 delay:(double)arg2;
- (void)_scheduleRunPositioningChange;
- (void)_scheduleScrollToReCenterUser;
- (void)_scheduleScrollToReCenterUserIfNeeded;
- (void)_scheduleStartEffects;
- (void)_scrollToCoordinate:(struct { double x1; double x2; })arg1;
- (void)_scrollToUserLocation;
- (struct CGPoint { float x1; float x2; })_scrollViewOffsetForCenterPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_scrollViewOffsetForCoordinate:(struct { double x1; double x2; })arg1;
- (struct CGPoint { float x1; float x2; })_scrollViewOffsetForOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_scrollViewOffsetForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_scroller;
- (void)_selectUserLocationTypeWithDeltaZoomScale:(float)arg1;
- (void)_setAccessoryTimer:(id)arg1;
- (void)_setAnimationType:(NSInteger)arg1;
- (void)_setAnnotationTimer:(id)arg1;
- (void)_setContentAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setDefaultLocationTimer:(id)arg1;
- (void)_setDrawsGridBackground:(BOOL)arg1;
- (void)_setEventMode:(NSInteger)arg1;
- (void)_setHoverExpirationTimer:(id)arg1;
- (void)_setPositioningChangeTimer:(id)arg1;
- (void)_setScale:(float)arg1 forLevelView:(id)arg2;
- (void)_setScrollToReCenterUserTimer:(id)arg1;
- (void)_setScrollViewOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setScrolling:(BOOL)arg1 updateTiling:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setScrolling:(BOOL)arg1;
- (void)_setShowingRoute:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_setStartEffectsTimer:(id)arg1;
- (void)_setTapAndHoldTimer:(id)arg1;
- (void)_setTileExpirationTimer:(id)arg1;
- (void)_setupDestinationRouteViewAtLevel:(NSInteger)arg1;
- (BOOL)_shouldChangeZoomLevel:(float*)arg1 withChange:(id)arg2;
- (BOOL)_shouldHandleTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_showAccessories:(id)arg1;
- (void)_showAddedAnnotationsAndRouteAnimated:(BOOL)arg1;
- (void)_showAddedAnnotationsAndRouteAnimated;
- (void)_showAddedAnnotationsAnimated:(BOOL)arg1;
- (void)_sizeDidChangeWithCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)_sizeWillChange;
- (void)_startEffects;
- (void)_startHoverExpirationTimerWithDuration:(double)arg1 change:(id)arg2;
- (void)_startPositioningChange:(id)arg1;
- (void)_startTrackingHeading;
- (void)_stopEffects;
- (void)_stopHover;
- (void)_stopHoverWithChange:(id)arg1;
- (void)_stopRotationLayer:(id)arg1 annotationViews:(id)arg2;
- (void)_stopTileLoading;
- (void)_stopTrackingHeading;
- (id)_stringWithEventMode:(NSInteger)arg1;
- (void)_suspendSearchResultsProcessingAndPinDropAnimations;
- (void)_switchToAnimationType:(NSInteger)arg1;
- (void)_synchronizeScrollingAnimation:(BOOL)arg1 includePositionView:(BOOL)arg2;
- (void)_toggleLocationConsole;
- (void)_updateAccessories;
- (void)_updateBadge;
- (void)_updateCenteredAttributesWithCoordinate:(struct { double x1; double x2; })arg1;
- (void)_updateContentBounds;
- (void)_updateEffects;
- (void)_updateHeading:(id)arg1 rotationType:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)_updateHeadingEnabled;
- (void)_updateLocationConsole;
- (void)_updateMapAnchorCoordinate:(struct { double x1; double x2; })arg1;
- (void)_updateMapAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateMapAnchorPoint;
- (void)_updateOverlayViewPerspective:(BOOL)arg1;
- (void)_updatePositioningChangeMetadata:(id)arg1;
- (void)_updatePositioningChangeMetrics:(id)arg1;
- (BOOL)_updateRotationSupported;
- (void)_updateRotationType:(NSInteger)arg1 change:(id)arg2;
- (void)_updateRoutePosition;
- (void)_updateRoutePositionView;
- (void)_updateRouteView;
- (void)_updateScaleForLevelView:(id)arg1;
- (void)_updateScrollingAndGestures;
- (void)_updateTiling:(BOOL)arg1;
- (void)_updateTilingCenterPoint:(struct CGPoint { float x1; float x2; })arg1 coordinate:(struct { double x1; double x2; })arg2 levelView:(id)arg3;
- (void)_updateTraffic;
- (void)_updateTrafficStatus;
- (void)_userLocationViewDidAppear:(id)arg1;
- (void)_userLocationViewWillDisappear:(id)arg1;
- (void)_userScrollingEnded;
- (NSInteger)_viewIndexForSubview:(id)arg1;
- (NSUInteger)_visibleSearchResultsCount:(id)arg1 forZoomLevel:(NSInteger)arg2;
- (BOOL)_wasScrolling;
- (void)_willChangeRegionAnimated:(BOOL)arg1;
- (void)_willHideRoute;
- (void)_willShowRoute;
- (void)_zoomDidEnd;
- (float)_zoomLevelForCenterCoordinate:(struct { double x1; double x2; })arg1 topLeftCoordinate:(struct { double x1; double x2; })arg2 bottomRightCoordinate:(struct { double x1; double x2; })arg3 includeAccessoryPadding:(BOOL)arg4;
- (float)_zoomLevelForLocation:(id)arg1 previousLocation:(id)arg2;
- (float)_zoomLevelForRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 includeAccessoryPadding:(BOOL)arg2;
- (float)_zoomLevelForUserLocation:(id)arg1 distanceHysteresis:(BOOL)arg2 positionViewHysteresis:(BOOL)arg3;
- (NSInteger)_zoomLevelsForMapType:(NSUInteger)arg1;
- (float)_zoomScale;
- (void)_zoomToNextLevel:(BOOL)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_zoomWillStartAnimated:(BOOL)arg1;
- (id)accessoryView;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (BOOL)allowsPulsatingTraffic;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (NSInteger)animationType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationVisibleRect;
- (id)annotations;
- (void)applicationResumed:(id)arg1;
- (void)applicationSuspended:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (BOOL)callsDelegateForAllRegionChanges;
- (BOOL)canRotateForHeading;
- (struct { double x1; double x2; })centerCoordinate;
- (struct CGPoint { float x1; float x2; })centerLongLat;
- (void)centerSelectedPinInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })centeringRect;
- (BOOL)checksForTraffic;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRegionFromView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRectToView:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)didFinishGesturesInView:(id)arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)disableHeadingTracking:(BOOL)arg1;
- (void)disableLiveTracking;
- (void)disableMapRotation:(BOOL)arg1;
- (void)dropCustomPinForSearchResult:(id)arg1 animate:(BOOL)arg2;
- (void)dropPinsForRouteFromSearchResult:(id)arg1 toSearchResult:(id)arg2 animate:(BOOL)arg3;
- (void)dropPinsForSearchResults:(id)arg1 centerLongLat:(struct CGPoint { float x1; float x2; })arg2 longLatSpan:(struct CGSize { float x1; float x2; })arg3 selectedSearchResult:(id)arg4 animate:(BOOL)arg5;
- (void)dropPinsForSearchResults:(id)arg1 selectedSearchResult:(id)arg2 animate:(BOOL)arg3;
- (BOOL)effectsEnabled;
- (void)enableLocationConsole;
- (void)enableMapRotationIfNeeded;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)eventMode;
- (id)fixedUserLocation;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (void)goToBookmark:(id)arg1;
- (BOOL)goToCenterCoordinate:(struct { double x1; double x2; })arg1 longLatSpan:(struct CGSize { float x1; float x2; })arg2 animationType:(NSInteger)arg3;
- (BOOL)goToCenterCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(float)arg2 animationType:(NSInteger)arg3;
- (BOOL)goToRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animationType:(NSInteger)arg2;
- (void)goToRouteStepAnimated:(BOOL)arg1;
- (void)goToSearchResults:(id)arg1 centerLongLat:(struct CGPoint { float x1; float x2; })arg2 longLatSpan:(struct CGSize { float x1; float x2; })arg3;
- (void)goToUserLocation;
- (BOOL)hasUserLocation;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)ignoreLocationUpdates;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBoundedByUserLocation;
- (BOOL)isCachedUserLocation;
- (BOOL)isHeadingEnabled;
- (BOOL)isHeadingSupported;
- (BOOL)isHeadingTrackingEnabled;
- (BOOL)isLiveTrackingEnabled;
- (BOOL)isRunningPositioningChange;
- (BOOL)isScrollEnabled;
- (BOOL)isScrollToUserCenterPending;
- (BOOL)isShowingTraffic;
- (BOOL)isTrackingUserLocation;
- (BOOL)isUserLocationBounded;
- (BOOL)isUserLocationChangeDone;
- (BOOL)isUserLocationStale;
- (BOOL)isUserLocationViewCentered;
- (BOOL)isUserLocationVisible;
- (BOOL)isUserPresentationVisible;
- (BOOL)isZoomEnabled;
- (void)levelView:(id)arg1 didAddTile:(id)arg2;
- (void)levelView:(id)arg1 didLoadTile:(id)arg2;
- (void)levelView:(id)arg1 willRemoveTile:(id)arg2;
- (void)levelViewDidLayoutTiles:(id)arg1;
- (BOOL)liveTrackingAutoSelectZoomLevel;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (struct CGSize { float x1; float x2; })longLatSpan;
- (id)mapInfo;
- (void)mapLevelView:(id)arg1 didUpdateTrafficStatus:(NSInteger)arg2;
- (void)mapLevelViewDidFailLoading:(id)arg1 withError:(id)arg2;
- (void)mapLevelViewDidFailLoadingTraffic:(id)arg1 withError:(id)arg2;
- (void)mapLevelViewDidFinishLoading:(id)arg1;
- (void)mapLevelViewDidFinishLoadingTraffic:(id)arg1;
- (void)mapLevelViewDidStartLoading:(id)arg1;
- (void)mapLevelViewDidStartLoadingTraffic:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mapLevelViewVisibleRect:(id)arg1;
- (NSUInteger)mapType;
- (float)maxZoomLevel;
- (float)minZoomLevel;
- (void)onMapAddView:(id)arg1 change:(id)arg2;
- (void)overlayView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)overlayView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)overlayView:(id)arg1 didMoveSearchResult:(id)arg2 toPoint:(struct CGPoint { float x1; float x2; })arg3;
- (void)overlayView:(id)arg1 didSelectSearchResult:(id)arg2 userInitiated:(BOOL)arg3;
- (void)overlayView:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint { float x1; float x2; })arg2;
- (id)overlayView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)overlayView;
- (struct CGPoint { float x1; float x2; })overlayViewCenterLongLat:(id)arg1;
- (void)overlayViewDidAnimateBubble:(id)arg1;
- (void)overlayViewDidDropPins:(id)arg1;
- (BOOL)overlayViewDidScrollOrZoom:(id)arg1;
- (BOOL)overlayViewEffectsEnabled:(id)arg1;
- (BOOL)overlayViewIsRotated:(id)arg1;
- (BOOL)overlayViewIsUserLocationChangeDone:(id)arg1;
- (struct CGSize { float x1; float x2; })overlayViewLongLatSpan:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })overlayViewVisibleRect:(id)arg1;
- (void)overlayViewWillAnimateBubble:(id)arg1;
- (void)overlayViewWillDropPins:(id)arg1;
- (void)pauseUserHeadingUpdates;
- (void)pauseUserLocationUpdates;
- (struct CGPoint { float x1; float x2; })pinDroppingLongLat;
- (float)pointDistanceFromCoordinate:(struct { double x1; double x2; })arg1 toCoordinate:(struct { double x1; double x2; })arg2;
- (struct CGPoint { float x1; float x2; })pointInOverlayView:(id)arg1 forVisiblePoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)positioningChange;
- (id)predictedUserLocation;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })regionThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeUserLocation;
- (void)resetUserLocation;
- (void)resumeUserHeadingUpdates;
- (void)resumeUserLocationUpdates;
- (void)routeLoaderDidStartLoading:(id)arg1;
- (void)routeLoaderDidStopLoading:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollWithOffset:(struct CGPoint { float x1; float x2; })arg1 andAnimationType:(NSInteger)arg2;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (id)selectedAnnotations;
- (void)setAccessoryView:(id)arg1;
- (void)setAllowsPulsatingTraffic:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCallsDelegateForAllRegionChanges:(BOOL)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setCenteringRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setChecksForTraffic:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFixedUserLocation:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHeadingEnabled:(BOOL)arg1;
- (void)setHeadingSupported:(BOOL)arg1;
- (void)setHeadingTrackingEnabled:(BOOL)arg1;
- (void)setIgnoreLocationUpdates:(BOOL)arg1;
- (void)setLiveTrackingAutoSelectZoomLevel:(BOOL)arg1;
- (void)setLiveTrackingEnabled:(BOOL)arg1 shouldZoom:(BOOL)arg2;
- (void)setLiveTrackingEnabled:(BOOL)arg1;
- (void)setLoadingEnabled:(BOOL)arg1;
- (void)setMapType:(NSUInteger)arg1;
- (void)setPositioningChange:(id)arg1;
- (void)setPredictedUserLocation:(id)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setSearchMode:(NSInteger)arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)setShouldRotateForHeading:(BOOL)arg1;
- (void)setShowingRoute:(BOOL)arg1 animate:(BOOL)arg2 includingPins:(BOOL)arg3;
- (void)setShowingTraffic:(BOOL)arg1;
- (void)setShowsBadge:(BOOL)arg1;
- (void)setShowsUserLocation:(BOOL)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)setUserLocationSource:(NSInteger)arg1;
- (void)setZoomEnabled:(BOOL)arg1;
- (BOOL)shouldPulsateTraffic;
- (BOOL)shouldRotateForHeading;
- (BOOL)showsBadge;
- (BOOL)showsUserLocation;
- (void)startEffects;
- (void)startUpdatingUserLocation;
- (void)stopEffects:(BOOL)arg1;
- (void)stopEffects;
- (void)stopUpdatingUserLocation;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (NSInteger)trafficStatus;
- (void)updateBubblePinInVisibleRect;
- (void)updateExpiredTiles;
- (void)updateTiling;
- (id)userLocation;
- (struct CGPoint { float x1; float x2; })userLocationAnchorPoint;
- (NSInteger)userLocationSource;
- (id)userLocationView;
- (void)userLocationViewAccuracyDidUpdate:(id)arg1;
- (void)userLocationViewDidQuiesce:(id)arg1;
- (struct CGPoint { float x1; float x2; })userPosition;
- (id)viewForAnnotation:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGPoint { float x1; float x2; })visiblePointForPoint:(struct CGPoint { float x1; float x2; })arg1 inOverlayView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectInView:(id)arg1;
- (id)visibleView;
- (struct CGPoint { float x1; float x2; })visualAnchorPoint;
- (void)willStartGesturesInView:(id)arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)zoomToScale:(float)arg1;

@end
