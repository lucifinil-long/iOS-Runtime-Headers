/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MLPhotoAlbum;

@interface PLAlbumViewController : UIViewController {
    unsigned int _didSetPreviousStatusBarMode : 1;
    MLPhotoAlbum *_album;
    NSInteger _newStatusBarMode;
    NSInteger _previousStatusBarMode;
}

@property NSInteger previousStatusBarMode; /* unknown property attribute: V_previousStatusBarMode */
@property(readonly) MLPhotoAlbum *album;
@property(readonly) PLAlbumView *albumView;

- (NSInteger)_imagePickerStatusBarMode;
- (id)album;
- (id)albumView;
- (id)contentScrollView;
- (void)dealloc;
- (id)init;
- (id)initWithAlbum:(id)arg1;
- (void)loadView;
- (NSInteger)previousStatusBarMode;
- (void)setAlbum:(id)arg1;
- (void)setPreviousStatusBarMode:(NSInteger)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
