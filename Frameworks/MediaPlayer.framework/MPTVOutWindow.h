/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MovieTVHUDView, NPTVOutBackgroundView, MPVideoView;

@interface MPTVOutWindow : UIWindow {
    NPTVOutBackgroundView *_backgroundView;
    MovieTVHUDView *_hudView;
    MPVideoView *_videoView;
}

- (void)_playbackStateChanged:(id)arg1;
- (void)dealloc;
- (id)initWithVideoView:(id)arg1;

@end
