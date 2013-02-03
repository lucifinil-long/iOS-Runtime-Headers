/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableDictionary, UIMovieScrubber, AVRemaker, PLMoviePlayerController, MLPhotoBakedThumbnails, PLCameraImage, NSDictionary, NSString, PLImageTile, <PLVideoViewDelegate>, UIImageView, UIButton, PLVideoEditingOverlayView, NSTimer;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLItemView> {
    unsigned int _didLayout : 1;
    unsigned int _wasPlayingBeforeScrub : 1;
    unsigned int _playFromBeginning : 1;
    unsigned int _reloadScrubberThumbnails : 1;
    unsigned int _playing : 1;
    unsigned int _editing : 1;
    unsigned int _canEdit : 1;
    unsigned int _scrubbing : 1;
    unsigned int _scrubbingToRight : 1;
    unsigned int _showsPosterFrame : 1;
    unsigned int _deleteOriginalFile : 1;
    unsigned int _preparingMoviePlayer : 1;
    unsigned int _didPrepareMoviePlayer : 1;
    unsigned int _canShowOverlay : 1;
    unsigned int _showingOverlay : 1;
    unsigned int _showingScrubber : 1;
    unsigned int _showScrubberWhenMovieIsReady : 1;
    unsigned int _playbackDidBegin : 1;
    unsigned int _playbackWillBegin : 1;
    unsigned int _didDisappear : 1;
    unsigned int _loadScrubberThumbnails : 1;
    unsigned int _loadMediaImmediately : 1;
    unsigned int _displayingToTVOut : 1;
    MLPhotoBakedThumbnails *_bakedLandscapeThumbnails;
    MLPhotoBakedThumbnails *_bakedPortraitThumbnails;
    NSMutableDictionary *_cachedThumbnails;
    <PLVideoViewDelegate> *_delegate;
    double _duration;
    PLImageTile *_imageTile;
    NSInteger _interfaceOrientation;
    double _lastActualValue;
    double _lastScrubbedValue;
    double _maximumTrimLength;
    PLMoviePlayerController *_moviePlayer;
    NSInteger _orientationWhenLastDisplayed;
    UIImageView *_posterFrameView;
    float _progress;
    AVRemaker *_remaker;
    NSUInteger _scaleMode;
    UIMovieScrubber *_scrubber;
    UIImageView *_scrubberBackgroundView;
    NSTimer *_scrubberUpdateTimer;
    NSDictionary *_thumbnailOptionsDict;
    NSInteger _timeOptions;
    PLVideoEditingOverlayView *_trimMessageView;
    struct { id x1; float x2; struct __CFArray {} *x3; float x4; } *_trimProgressStack;
    NSTimer *_trimProgressTimer;
    NSString *_trimmedPath;
    PLCameraImage *_videoCameraImage;
    UIButton *_videoOverlayPlayButton;
}

@property(readonly) NSInteger interfaceOrientation; /* unknown property attribute: V_interfaceOrientation */
@property <PLVideoViewDelegate> *delegate;
@property PLImageTile *imageTile;
@property(readonly) UIView *previewImageView;
@property(readonly) PLCameraImage *videoCameraImage;
@property BOOL canEdit;
@property(readonly) double duration;
@property(getter=isEditing) BOOL editing;
@property(readonly) double endTime;
@property BOOL isDisplayingToTVOut;
@property BOOL loadMediaImmediately;
@property BOOL showsPosterFrame;
@property(readonly) double startTime;

- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_createScrubber:(BOOL)arg1;
- (void)_didScrubToValue:(double)arg1 withHandle:(NSInteger)arg2;
- (void)_fileGroupContentsDidChange:(id)arg1;
- (void)_hideTrimMessageView:(BOOL)arg1;
- (void)_hideVideoOverlay:(BOOL)arg1;
- (void)_itemPlaybackDidEnd:(id)arg1;
- (id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(BOOL)arg2 aspectRatio:(float)arg3;
- (id)_moviePlayer;
- (void)_playbackFinished;
- (void)_prepareMoviePlayer;
- (void)_reloadScrubberThumbnails;
- (void)_remakerDidFinish:(id)arg1;
- (void)_removeScrubberUpdateTimer;
- (void)_removeTrimProgressTimer;
- (void)_reset;
- (void)_resetScrubberUpdateTimer;
- (void)_resetTrimProgressTimer;
- (void)_scrubberAnimationFinished;
- (void)_setScaleModeForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setZoomScale:(float)arg1 duration:(double)arg2;
- (void)_showVideoOverlay;
- (void)_thumbnailImageGenerationFailed:(id)arg1;
- (void)_thumbnailImageWasGenerated:(id)arg1;
- (void)_thumbnailsWereRegenerated;
- (void)_updatePosterContentMode;
- (void)_updateScrubberValue;
- (void)_updateScrubberVisibility:(BOOL)arg1;
- (void)_updateTrimProgress;
- (void)_videoOverlayFadeOutDidFinish;
- (void)_viewDidAppear:(BOOL)arg1;
- (void)_willBeginPlayback;
- (float)_zoomScale;
- (BOOL)canEdit;
- (void)cancelTrim;
- (id)createPreviewImageData:(id*)arg1 fullScreenImage:(id*)arg2;
- (void)dealloc;
- (float)defaultZoomScale;
- (id)delegate;
- (id)description;
- (double)duration;
- (double)endTime;
- (void)hideScrubberBackgroundViewWithDuration:(float)arg1;
- (void)hideTrimMessage;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageTile;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(NSInteger)arg3;
- (NSInteger)interfaceOrientation;
- (BOOL)isDisplayingToTVOut;
- (BOOL)isEditing;
- (BOOL)isPlaying;
- (BOOL)isZoomedOut;
- (void)layoutSubviews;
- (BOOL)loadMediaImmediately;
- (float)minRotatedScale;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)moviePlayerDelegateDidChange:(id)arg1;
- (BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(NSInteger)arg2;
- (BOOL)moviePlayerHeadsetPlayPausePressed:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1;
- (void)moviePlayerReadyToBeginPlayback:(id)arg1;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(NSInteger)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(NSInteger)arg4;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(NSInteger)arg2;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(NSInteger)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberDuration:(id)arg1;
- (void)movieScrubberEditingAnimationFinished:(id)arg1;
- (float)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (NSInteger)orientationWhenLastDisplayed;
- (void)pause;
- (void)play;
- (void)playButtonClicked:(id)arg1;
- (id)previewImageView;
- (void)setCanEdit:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImageTile:(id)arg1;
- (void)setIsDisplayingToTVOut:(BOOL)arg1;
- (void)setLoadMediaImmediately:(BOOL)arg1;
- (void)setMaximumTrimLength:(double)arg1;
- (void)setOrientationWhenLastDisplayed:(NSInteger)arg1;
- (void)setProgress:(id)arg1;
- (void)setShowsPosterFrame:(BOOL)arg1;
- (BOOL)shouldShowCopyCalloutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)showScrubberBackgroundViewWithDuration:(float)arg1;
- (void)showTrimMessageAboveEdge:(float)arg1;
- (BOOL)showsPosterFrame;
- (double)startTime;
- (void)stop;
- (void)toggleScaleMode:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)trimUsingMode:(NSInteger)arg1 passthrough:(BOOL)arg2;
- (void)updateZoomScales;
- (id)videoCameraImage;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppearWithoutAnimation;
- (void)willMoveToSuperview:(id)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 fromInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;

@end
