/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableDictionary;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl> {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        NSUInteger mFormatID; 
        NSUInteger mFormatFlags; 
        NSUInteger mBytesPerPacket; 
        NSUInteger mFramesPerPacket; 
        NSUInteger mBytesPerFrame; 
        NSUInteger mChannelsPerFrame; 
        NSUInteger mBitsPerChannel; 
        NSUInteger mReserved; 
    NSMutableDictionary *_attributes;
    NSUInteger _audioCodec;
    struct OpaqueAudioFileID { } *_audioFile;
    struct AudioQueueLevelMeterState { float x1; float x2; } *_audioLevels;
    struct AudioQueueLevelMeterState { float x1; float x2; } *_audioLevelsDB;
    struct OpaqueAudioQueue { } *_audioQueue;
    BOOL _bufferUsed[3];
    struct AudioQueueBuffer {} *_buffers[3];
    NSUInteger _fileType;
    BOOL _haveRecordedMaxPCMFrames;
    BOOL _isActive;
    BOOL _isRecording;
    BOOL _isWriting;
    long long _maxPCMFramesToRecord;
    NSUInteger _numDeviceChannels;
    } _recordingFormat;
    NSUInteger _totalBytesRecorded;
    NSUInteger _totalFramesRecorded;
    NSUInteger _totalPacketsRecorded;
}

- (BOOL)activate:(id*)arg1;
- (id)attributeForKey:(id)arg1;
- (BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2;
- (BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 useDB:(BOOL)arg3;
- (BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2;
- (NSUInteger)audioNumDeviceChannels;
- (BOOL)autoFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)copyEncoderCookieToFile;
- (void)deactivate;
- (void)dealloc;
- (id)filePath;
- (void)haveABuffer:(struct AudioQueueBuffer { NSUInteger x1; void *x2; NSUInteger x3; void *x4; NSUInteger x5; struct AudioStreamPacketDescription {} *x6; NSUInteger x7; }*)arg1 withTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; NSUInteger x_5_1_3; NSUInteger x_5_1_4; NSUInteger x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; NSUInteger x6; NSUInteger x7; }*)arg2 andNumPackets:(unsigned long)arg3 andPacketDescs:(const struct AudioStreamPacketDescription { long long x1; NSUInteger x2; NSUInteger x3; }*)arg4;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (BOOL)isActive;
- (BOOL)isRecording;
- (float)micVolume;
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setFilePath:(id)arg1;
- (void)setMicVolume:(float)arg1;
- (BOOL)start;
- (void)stop;
- (BOOL)takePhoto;

@end
