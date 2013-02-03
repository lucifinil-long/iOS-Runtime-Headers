/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoBufferLayerContainer, NSString, UIMovieSubtitlesView, UIView, CALayer, MovieSnapshotController;

@interface MPVideoView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _disableFudgingScaleToFullScreen : 1;
    NSUInteger _effectiveScaleMode;
    NSString *_moviePath;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    NSUInteger _scaleMode;
    MovieSnapshotController *_snapshotController;
    double _startTime;
    double _stopTime;
    } _subtitlesMargin;
    UIMovieSubtitlesView *_subtitlesView;
    MPVideoBufferLayerContainer *_videoBufferContainerLayer;
    UIView *_videoBufferContainerView;
    CALayer *_videoBufferLayer;
}

@property double stopTime; /* unknown property attribute: V_stopTime */
@property double startTime; /* unknown property attribute: V_startTime */
@property CGSize subtitlesMargin; /* unknown property attribute: V_subtitlesMargin */
@property NSUInteger effectiveScaleMode; /* unknown property attribute: V_effectiveScaleMode */
@property NSUInteger scaleMode; /* unknown property attribute: V_scaleMode */
@property(retain) NSString *movieTitle; /* unknown property attribute: V_movieTitle */
@property(retain) NSString *movieSubtitle; /* unknown property attribute: V_movieSubtitle */
@property(readonly) BOOL canChangeScaleMode;
@property(readonly) CGRect movieFrame;
@property CGSize subtitlesPadding;

- (id)_avController;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (BOOL)_isCloseToFullScreenWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_layoutSublayers;
- (void)_layoutSubtitleLayers;
- (void)_layoutVideoLayers:(BOOL)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_sizeDidChangedNotification:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)addSubview:(id)arg1;
- (id)avController;
- (void)bringSubviewToFront:(id)arg1;
- (NSInteger)bufferingStatusMask;
- (BOOL)canChangeScaleMode;
- (void)cancelSnapshots;
- (double)currentTime;
- (void)dealloc;
- (double)duration;
- (NSUInteger)effectiveScaleMode;
- (void)exchangeSubviewAtIndex:(NSInteger)arg1 withSubviewAtIndex:(NSInteger)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertSubview:(id)arg1 atIndex:(NSInteger)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })movieFrame;
- (id)moviePath;
- (id)movieSubtitle;
- (id)movieTitle;
- (id)mpavController;
- (void)pause;
- (void)play;
- (void)play;
- (void)playFromBeginning;
- (void)playWhenLikelyToKeepUp;
- (NSInteger)playableContentType;
- (NSInteger)playbackState;
- (void)prepareAVControllerQueue;
- (NSUInteger)scaleMode;
- (void)scheduleThumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 orientation:(NSInteger)arg2 time:(float)arg3 delegate:(id)arg4;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(NSInteger)arg2;
- (void)setCurrentTime:(double)arg1;
- (void)setEffectiveScaleMode:(NSUInteger)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMovieSubtitle:(id)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setMovieWithPath:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRepeatGap:(double)arg1;
- (void)setRepeatMode:(NSInteger)arg1;
- (void)setScaleMode:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(NSUInteger)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(double)arg1;
- (void)setSubtitlesMargin:(struct CGSize { float x1; float x2; })arg1;
- (void)setSubtitlesPadding:(struct CGSize { float x1; float x2; })arg1;
- (double)startTime;
- (void)stop;
- (double)stopTime;
- (void)subtitlesDidClear:(id)arg1;
- (void)subtitlesDidUpdate:(id)arg1;
- (struct CGSize { float x1; float x2; })subtitlesMargin;
- (struct CGSize { float x1; float x2; })subtitlesPadding;
- (void)toggleScaleMode:(BOOL)arg1;
- (id)viewWithTag:(NSInteger)arg1;

@end
