/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPFullScreenVideoOverlay, InactivityMonitor;

@interface MPFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
    unsigned int _requestExitAfterHidingControls : 1;
    unsigned int _rotateAfterHidingControls : 1;
    unsigned int _showControlsAfterRotate : 1;
    unsigned int _needsInactivityMonitorCreation : 1;
    unsigned int _autoHidingForItemChange : 1;
    InactivityMonitor *_inactivityMonitor;
    MPFullScreenVideoOverlay *_overlayView;
}

- (void)_bufferingStateChangedNotification:(id)arg1;
- (BOOL)_canHideOverlay:(BOOL)arg1;
- (void)_createInactivityMonitor;
- (void)_hideOverlayAnimationFinished:(id)arg1;
- (void)_hideOverlayWithAnimation:(BOOL)arg1 shouldUpdateAutohideFlag:(BOOL)arg2;
- (void)_hideOverlayWithAnimation:(BOOL)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (id)_overlayView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_overlayViewFrame;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_reallyRemoveOverlay;
- (void)_reenableControlsAutoHide;
- (void)_rotationAnimationFinished:(id)arg1;
- (void)_setStatusBarVisible:(BOOL)arg1 duration:(float)arg2 fenceID:(NSInteger)arg3;
- (void)_showOverlay;
- (void)_stopWatchingAVController;
- (void)_transformVideoForOrientation:(NSInteger)arg1 animate:(BOOL)arg2;
- (BOOL)allowsDetailScrubbing;
- (BOOL)canDisplayItem:(id)arg1 withOrientation:(NSInteger)arg2;
- (id)createAlternateTracksTransition;
- (id)createChapterFlipTransition;
- (void)dealloc;
- (void)displayVideoViewOnScreen;
- (void)handleScaleModeChange;
- (void)inactivityMonitorDetectedInactivity:(id)arg1;
- (id)init;
- (void)loadView;
- (void)noteIgnoredChangeTypes:(NSUInteger)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayTappedScaleModeButton:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(NSInteger)arg1 animate:(BOOL)arg2;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)showChaptersController;
- (void)startTicking;
- (void)stopTicking;
- (id)swipableView:(id)arg1 overrideHitTest:(struct CGPoint { float x1; float x2; })arg2 forEvent:(struct __GSEvent { }*)arg3;
- (id)swipableView:(id)arg1 overrideHitTest:(struct CGPoint { float x1; float x2; })arg2 withEvent:(id)arg3;
- (void)swipableView:(id)arg1 tappedWithCount:(NSUInteger)arg2;
- (BOOL)transportControls:(id)arg1 heldButtonPart:(NSUInteger)arg2;
- (BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(NSUInteger)arg2;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(NSUInteger)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
