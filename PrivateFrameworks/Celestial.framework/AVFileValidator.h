/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVFileValidator : NSObject {
    struct AVFileValidatorPrivate { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; inout unsigned short x3; void*x4; void*x5; unsigned long x6; void*x7; struct FigOpaqueMediaValidator {} *x8; struct FigMediaValidatorDataLocation { 
            unsigned long long offset; 
            unsigned long long size; 
        } x9; struct OpaqueFigByteStream {} *x10; BOOL x11; BOOL x12; } *_priv;
}

- (void)cancel;
- (void)dealloc;
- (void)fileCheckResult:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isCompleted;
- (BOOL)isStreaming;
- (float)progress;
- (id)url;
- (void)validate;

@end
