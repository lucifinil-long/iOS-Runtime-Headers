/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class STRunCaloriesLabel, STRunProgressView, <STRunViewDelegate>, STRunDistanceLabel, STAnimatableButton, STRunPaceLabel, UIView, STShadowLabel, UIImageView, UIButton, STRunTimeLabel, NSTimer;

@interface STRunView : UIView {
    struct { 
        unsigned int timerPaused : 1; 
        unsigned int shouldStartTimer : 1; 
        unsigned int isLockScreen : 1; 
        unsigned int animateForResumeEventsOnly : 1; 
        unsigned int canHighlightPowerSong : 1; 
        unsigned int validPaceReceived : 1; 
        unsigned int noMusic : 1; 
        unsigned int seekHandled : 1; 
        unsigned int seekAllowed : 1; 
        unsigned int needsNowPlayingLayout : 1; 
        unsigned int forceTimeExtrapolation : 1; 
        unsigned int goalCompleted : 1; 
        unsigned int useMetricDistance : 1; 
        unsigned int forceMetricForDistanceOnly : 1; 
        unsigned int throttleNextPauseResume : 1; 
        unsigned int shouldControlMusic : 1; 
        unsigned int unused : 16; 
    NSTimer *_considerSeekTimer;
    <STRunViewDelegate> *_delegate;
    double _elapsedWorkoutTime;
    STAnimatableButton *_endWorkoutButton;
    double _estimatedElapsedWorkoutTime;
    NSInteger _interface;
    double _lastWorkoutNotificationTime;
    UIButton *_leftButton;
    UIButton *_nextTrackButton;
    STShadowLabel *_nowPlayingSongLabel;
    NSInteger _orientation;
    UIImageView *_powerSongGlowView;
    UIButton *_previousTrackButton;
    float _progressToGoal;
    UIButton *_rightButton;
    UIView *_rotationContainer;
    STRunCaloriesLabel *_runCaloriesLabel;
    STRunDistanceLabel *_runDistanceLabel;
    } _runFlagsBitfield;
    STRunPaceLabel *_runPaceLabel;
    STRunProgressView *_runProgressView;
    STRunTimeLabel *_runTimeLabel;
    NSInteger _throttledWorkoutState;
    NSTimer *_timer;
    UIImageView *_transportControlsDivider;
}

@property <STRunViewDelegate> *delegate; /* unknown property attribute: V_delegate */
@property NSInteger orientation; /* unknown property attribute: V_orientation */
@property NSInteger interface; /* unknown property attribute: V_interface */
@property BOOL animateForResumeEventsOnly;
@property BOOL isLockScreen;

- (void)_applicationResumed:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_beginConsiderSeeking:(id)arg1;
- (void)_cancel;
- (void)_cancelConsiderSeeking:(id)arg1;
- (void)_changeMusic;
- (void)_configureButtonsForWorkout;
- (void)_considerSeekTimerFired:(id)arg1;
- (void)_empedSearchStateChanged:(id)arg1;
- (void)_endSeeking:(id)arg1;
- (id)_endWorkoutButtonDownImage;
- (id)_endWorkoutButtonImage;
- (id)_endWorkoutLandscapeButtonDownImage;
- (id)_endWorkoutLandscapeButtonImage;
- (void)_finishResumeEventsOnly;
- (id)_greenButtonDownImage;
- (id)_greenButtonImage;
- (void)_layoutBottomButtons;
- (void)_layoutCaloriesInPosition:(NSInteger)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutLabel:(id)arg1 inPosition:(NSInteger)arg2 isLandscape:(BOOL)arg3 isLockedMusicInterface:(BOOL)arg4 hasProgressView:(BOOL)arg5;
- (void)_layoutLabelsForWorkoutType:(NSInteger)arg1;
- (void)_layoutMainButtonsForWorkoutType:(NSInteger)arg1;
- (void)_layoutNowPlayingLabelForWorkoutType:(NSInteger)arg1;
- (void)_layoutPaceInPosition:(NSInteger)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutPrimaryLabelForWorkoutType:(NSInteger)arg1;
- (void)_layoutRunDistanceInPosition:(NSInteger)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutRunTimeInPosition:(NSInteger)arg1 isLandscape:(BOOL)arg2 isLockedMusicInterface:(BOOL)arg3 hasProgressView:(BOOL)arg4;
- (void)_layoutSecondaryLabelsForWorkoutType:(NSInteger)arg1;
- (void)_layoutTransportControlsDivider;
- (void)_nextTrack;
- (void)_nowPlayingChanged:(id)arg1;
- (id)_orangeButtonDownImage;
- (id)_orangeButtonImage;
- (void)_pause;
- (void)_pauseWorkoutForResume:(BOOL)arg1;
- (void)_playPowerSongEventFromRemote:(id)arg1;
- (id)_powersongButtonDownImage;
- (id)_powersongButtonImage;
- (id)_powersongLandscapeButtonDownImage;
- (id)_powersongLandscapeButtonImage;
- (void)_previousTrack;
- (void)_receiverStateChanged:(id)arg1;
- (id)_redButtonDownImage;
- (id)_redButtonImage;
- (void)_resume;
- (void)_resumeWorkoutForResume:(BOOL)arg1;
- (void)_sportsInfoArrived:(id)arg1;
- (void)_start;
- (void)_startUpdateTimer;
- (id)_startWorkoutButtonDownImage;
- (id)_startWorkoutButtonImage;
- (void)_startWorkoutEventFromRemote:(id)arg1;
- (id)_startWorkoutLandscapeButtonDownImage;
- (id)_startWorkoutLandscapeButtonImage;
- (void)_stop;
- (void)_stopUpdateTimer;
- (void)_tick:(id)arg1;
- (void)_unthrottlePauseResume;
- (void)_updateFromLatestWorkoutProgress;
- (void)_updateProgressViewWithDictionary:(id)arg1;
- (void)_workoutDidPause:(id)arg1;
- (void)_workoutDidResume:(id)arg1;
- (BOOL)animateForResumeEventsOnly;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)interface;
- (BOOL)isLockScreen;
- (void)layoutSubviews;
- (NSInteger)orientation;
- (void)resume;
- (void)resumeEventsOnly;
- (void)resumeWorkout;
- (void)selectPowerSong;
- (void)setAnimateForResumeEventsOnly:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterface:(NSInteger)arg1;
- (void)setIsLockScreen:(BOOL)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)suspend;

@end
