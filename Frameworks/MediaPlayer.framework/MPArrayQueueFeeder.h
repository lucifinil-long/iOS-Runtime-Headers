/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {
    NSArray *_queueItems;
}

@property(readonly) NSArray *items;

- (double)bookmarkTimeForIndex:(NSUInteger)arg1;
- (id)copyRawItemAtIndex:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)items;
- (NSUInteger)numberOfPaths;
- (id)pathAtIndex:(NSUInteger)arg1;
- (id)playbackInfoAtIndex:(NSUInteger)arg1;

@end
