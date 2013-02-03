/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class AVCamera, NSMutableDictionary, NSString, NSURL, CALayer;

@interface AVCapture : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    NSUInteger _audioCaptureFormat;
    BOOL _audioMeteringEnabled;
    NSString *_captureMode;
    BOOL _disableRemoteImplementation;
    BOOL _dumpSensorInfo;
    NSURL *_fileURLForRecording;
    NSString *_focusMethod;
    } _focusPointOfInterest;
    long long _freeDiskSpaceLimit;
    BOOL _isCapturingPhoto;
    BOOL _isPaused;
    BOOL _isPreviewing;
    BOOL _isRecording;
    BOOL _lockAutoExposure;
    BOOL _lockAutoWhiteBalance;
    NSMutableDictionary *_metadata;
    BOOL _monitorSubjectArea;
    NSInteger _noiseReductionMethod;
    NSString *_orientation;
    struct AVCapturePrivate { struct OpaqueFigRecorder {} *x1; } *_priv;
    NSString *_qualityPreset;
    double _recordedDurationLimit;
    long long _recordedFileSizeBytesLimit;
    AVCamera *_sourceCamera;
    BOOL _suspendPreviewOnPhotoCapture;
    } _videoDimensions;
    CALayer *_videoPreviewLayer;
}

@property BOOL disableRemoteImplementation; /* unknown property attribute: V_disableRemoteImplementation */
@property NSInteger noiseReductionMethod; /* unknown property attribute: V_noiseReductionMethod */
@property BOOL lockAutoWhiteBalance; /* unknown property attribute: V_lockAutoWhiteBalance */
@property BOOL lockAutoExposure; /* unknown property attribute: V_lockAutoExposure */
@property BOOL monitorSubjectArea; /* unknown property attribute: V_monitorSubjectArea */
@property(retain) NSString *qualityPreset; /* unknown property attribute: V_qualityPreset */
@property long long freeDiskSpaceLimit; /* unknown property attribute: V_freeDiskSpaceLimit */
@property double recordedDurationLimit; /* unknown property attribute: V_recordedDurationLimit */
@property long long recordedFileSizeBytesLimit; /* unknown property attribute: V_recordedFileSizeBytesLimit */
@property(readonly) BOOL isCapturingPhoto; /* unknown property attribute: V_isCapturingPhoto */
@property NSUInteger audioCaptureFormat; /* unknown property attribute: V_audioCaptureFormat */
@property(readonly) BOOL isPaused; /* unknown property attribute: V_isPaused */
@property(readonly) BOOL isRecording; /* unknown property attribute: V_isRecording */
@property BOOL suspendPreviewOnPhotoCapture; /* unknown property attribute: V_suspendPreviewOnPhotoCapture */
@property(readonly) BOOL isPreviewing; /* unknown property attribute: V_isPreviewing */
@property(retain) NSURL *fileURLForRecording; /* unknown property attribute: V_fileURLForRecording */
@property BOOL audioMeteringEnabled; /* unknown property attribute: V_audioMeteringEnabled */
@property(copy) NSDictionary *metadata; /* unknown property attribute: V_metadata */
@property(retain) NSString *orientation; /* unknown property attribute: V_orientation */
@property CGSize videoDimensions; /* unknown property attribute: V_videoDimensions */
@property(retain) AVCamera *sourceCamera; /* unknown property attribute: V_sourceCamera */
@property BOOL dumpSensorInfo; /* unknown property attribute: V_dumpSensorInfo */
@property(readonly) NSArray *audioLevel;
@property(retain) NSString *captureMode;
@property(readonly) NSNumber *noiseReductionMethodCount;
@property(retain) CALayer *videoPreviewLayer;
@property(readonly) double recordedDuration;
@property(readonly) long long recordedFileSizeBytes;

+ (id)availableModes;
+ (id)convertMoofToMoovInFile:(id)arg1;
+ (id)focusModeMap;
+ (struct __CFString { }*)mapQualityPreset:(id)arg1;
+ (id)presetMap;
+ (id)updateMetadataInFile:(id)arg1 withMetadata:(id)arg2;

- (void)_destroyFigRecorder;
- (struct OpaqueFigRecorder { }*)_figRecorder;
- (unsigned long)audioCaptureFormat;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (id)audioLevel;
- (BOOL)audioMeteringEnabled;
- (id)captureMode;
- (BOOL)capturePhoto;
- (void)dealloc;
- (void)didCancelFocusingHandler:(id)arg1;
- (void)didFinishFocusingHandler:(id)arg1;
- (void)didPauseRecordingHandler;
- (void)didResumeRecordingHandler;
- (void)didStartFocusingHandler:(id)arg1;
- (void)didStartPreviewingHandler;
- (void)didStartRecordingHandler;
- (void)didStopPreviewingHandler;
- (void)didStopRecordingHandler;
- (BOOL)disableRemoteImplementation;
- (BOOL)dumpSensorInfo;
- (id)fileURLForRecording;
- (BOOL)focusUsingMethod:(id)arg1 options:(id)arg2;
- (long long)freeDiskSpaceLimit;
- (id)init;
- (BOOL)isCapturingPhoto;
- (BOOL)isPaused;
- (BOOL)isPreviewing;
- (BOOL)isRecording;
- (BOOL)lockAutoExposure;
- (BOOL)lockAutoWhiteBalance;
- (id)metadata;
- (BOOL)monitorSubjectArea;
- (NSInteger)noiseReductionMethod;
- (id)noiseReductionMethodCount;
- (id)noiseReductionMethodName;
- (id)objectForMetadataKey:(id)arg1;
- (id)orientation;
- (void)pausePreview;
- (BOOL)pauseRecording;
- (void)photoTakenHandler:(id)arg1;
- (id)qualityPreset;
- (double)recordedDuration;
- (double)recordedDurationLimit;
- (long long)recordedFileSizeBytes;
- (long long)recordedFileSizeBytesLimit;
- (void)resumePreview;
- (BOOL)resumeRecording;
- (void)setAudioCaptureFormat:(unsigned long)arg1;
- (void)setAudioMeteringEnabled:(BOOL)arg1;
- (void)setCaptureMode:(id)arg1;
- (void)setDisableRemoteImplementation:(BOOL)arg1;
- (void)setDumpSensorInfo:(BOOL)arg1;
- (void)setFileURLForRecording:(id)arg1;
- (void)setFreeDiskSpaceLimit:(long long)arg1;
- (void)setIsCapturingPhoto:(BOOL)arg1;
- (void)setIsPaused:(BOOL)arg1;
- (void)setIsPreviewing:(BOOL)arg1;
- (void)setIsRecording:(BOOL)arg1;
- (void)setLockAutoExposure:(BOOL)arg1;
- (void)setLockAutoWhiteBalance:(BOOL)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMonitorSubjectArea:(BOOL)arg1;
- (void)setNoiseReductionMethod:(NSInteger)arg1;
- (void)setObject:(id)arg1 forMetadataKey:(id)arg2;
- (void)setOrientation:(id)arg1;
- (void)setQualityPreset:(id)arg1;
- (void)setRecordedDurationLimit:(double)arg1;
- (void)setRecordedFileSizeBytesLimit:(long long)arg1;
- (void)setSourceCamera:(id)arg1;
- (void)setSuspendPreviewOnPhotoCapture:(BOOL)arg1;
- (void)setVideoDimensions:(struct CGSize { float x1; float x2; })arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (id)sourceCamera;
- (BOOL)startPreview;
- (BOOL)startRecording;
- (BOOL)stopPreview;
- (BOOL)stopRecording;
- (BOOL)suspendPreviewOnPhotoCapture;
- (struct CGSize { float x1; float x2; })videoDimensions;
- (id)videoPreviewLayer;

@end
