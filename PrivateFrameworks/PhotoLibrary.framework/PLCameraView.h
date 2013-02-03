/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLVideoView, NSData, UIView, PLCropOverlay, UIImage, PLCameraElapsedTimeView, PLCameraController, UIToolbar, NSDictionary, NSString, PLImageTile, MLPhotoDCFFileGroup, UIImageView;

@interface PLCameraView : UIView <PLCameraControllerDelegate, PLVideoViewDelegate> {
    unsigned int _showsCropOverlay : 1;
    unsigned int _allowsEditing : 1;
    unsigned int _changesStatusBar : 1;
    unsigned int _cropOverlayUsesTelephonyUI : 1;
    unsigned int _showsCropRegion : 1;
    unsigned int _allowsMultipleModes : 1;
    unsigned int _capturePhotoWhenFocusFinished : 1;
    unsigned int _dontAnimateVideoPreviewDown : 1;
    unsigned int _imagePickerWantsImageData : 1;
    UIView *_animatedCaptureView;
    NSInteger _availablePictureCount;
    UIToolbar *_cameraButtonBar;
    PLCameraController *_cameraController;
    NSInteger _captureOrientation;
    NSString *_cropButtonTitle;
    PLCropOverlay *_cropOverlay;
    NSString *_cropTitle;
    id _delegate;
    NSInteger _enabledGestures;
    NSDictionary *_imagePickerOptions;
    PLImageTile *_imageTile;
    BOOL _irisIsClosed;
    UIView *_irisView;
    NSData *_lastCapturedImageData;
    BOOL _manipulatingCrop;
    NSInteger _photoSavingOptions;
    NSInteger _pictureCapacity;
    UIView *_previewView;
    UIImage *_previewWellImage;
    UIImageView *_shadowView;
    UIView *_staticIrisView;
    UIImage *_temporaryThumbnailImage;
    PLCameraElapsedTimeView *_timeView;
    MLPhotoDCFFileGroup *_videoFileGroup;
    PLVideoView *_videoView;
}

@property(readonly) BOOL isCameraReady;

- (void)_applicationResumed;
- (id)_bottomBar;
- (void)_checkDiskSpaceAfterCapture;
- (void)_deleteVideoFileGroup;
- (void)_inCallStatusChanged:(id)arg1;
- (id)_modeSwitch;
- (id)_newVideoFileGroup;
- (void)_performVideoCapture;
- (void)_playShutterSound;
- (void)_preparePreviewWellImage:(struct CGImage { }*)arg1 isVideo:(BOOL)arg2;
- (void)_previewVideoAtPath:(id)arg1;
- (void)_removeVideoCaptureFileAtPath:(id)arg1;
- (void)_setShadowViewVisible:(BOOL)arg1;
- (id)_shutterButton;
- (void)_shutterButtonClicked;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (void)_updateImageEditability;
- (void)_updateModeSwitchVisibility;
- (void)_updateStatusBar;
- (void)_videoSwitchValueDidChange:(id)arg1;
- (void)animateCameraPreviewDown;
- (void)animateIrisForSuspension;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)buttonBar;
- (void)cameraController:(id)arg1 addedVideoAtPath:(id)arg2 withPreviewSurface:(void*)arg3 metadata:(id)arg4 wasInterrupted:(BOOL)arg5;
- (void)cameraController:(id)arg1 modeDidChange:(NSInteger)arg2;
- (void)cameraController:(id)arg1 tookPicture:(id)arg2 withPreview:(id)arg3 jpegData:(struct __CFData { }*)arg4 imageProperties:(id)arg5;
- (void)cameraControllerFocusFinished:(id)arg1;
- (void)cameraControllerReadyStateChanged:(id)arg1;
- (void)cameraControllerVideoCaptureDidStart:(id)arg1;
- (void)cameraControllerVideoCaptureDidStop:(id)arg1;
- (void)cameraShutterClicked:(id)arg1;
- (void)closeIris:(BOOL)arg1 didFinishSelector:(SEL)arg2;
- (void)closeIrisAnimationFinished;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)dealloc;
- (void)hideStaticClosedIris;
- (id)imageTile;
- (BOOL)imageViewIsDisplayingLandscape:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)irisIsClosed;
- (BOOL)isCameraReady;
- (void)openIrisAnimationFinished;
- (void)openIrisWithDidFinishSelector:(SEL)arg1;
- (NSInteger)photoSavingOptions;
- (void)primeStaticClosedIris;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (void)setAllowsMultipleCameraModes:(BOOL)arg1;
- (void)setCameraButtonBar:(id)arg1;
- (void)setCameraMode:(NSInteger)arg1;
- (void)setChangesStatusBar:(BOOL)arg1;
- (void)setCropOverlayUsesTelephonyUI:(BOOL)arg1;
- (void)setCropTitle:(id)arg1 buttonTitle:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabledGestures:(NSInteger)arg1;
- (void)setImagePickerOptions:(id)arg1;
- (void)setImagePickerWantsImageData:(BOOL)arg1;
- (void)setManipulatingCrop:(BOOL)arg1;
- (void)setPhotoSavingOptions:(NSInteger)arg1;
- (void)setShowsCropOverlay:(BOOL)arg1;
- (void)setShowsCropRegion:(BOOL)arg1;
- (void)setupAnimateCameraPreviewDown:(id)arg1;
- (void)setupAnimateVideoPreviewDown:(void*)arg1;
- (void)showStaticClosedIris;
- (void)startPreview;
- (void)takePictureCloseIrisAnimationFinished;
- (void)takePictureOpenIrisAnimationFinished;
- (void)tearDownIris;
- (void)timeLapseTimerFired;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (float)videoViewScrubberYOrigin:(id)arg1;
- (BOOL)videoViewShouldDisplayOverlay:(id)arg1;
- (BOOL)videoViewShouldDisplayScrubber:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillBeDisplayed;
- (void)viewWillBeRemoved;
- (void)willStartGesture:(NSInteger)arg1 inView:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;

@end
