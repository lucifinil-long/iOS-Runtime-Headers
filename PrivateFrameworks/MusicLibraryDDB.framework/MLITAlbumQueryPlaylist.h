/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibraryDDB.framework/MusicLibraryDDB
 */

@class MLTrack, MLQuery;

@interface MLITAlbumQueryPlaylist : MLPlaylist {
    MLQuery *_albumTracksQuery;
    MLTrack *_representativeTrack;
}

- (NSUInteger)countOfTracks;
- (void)dealloc;
- (NSUInteger)hash;
- (id)initWithAlbumQuery:(id)arg1 representativeTrack:(id)arg2;
- (BOOL)isAlbum;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPhysicalPlaylist;
- (id)name;
- (NSInteger)playlistType;
- (id)representativeAlbumTrack;

@end
