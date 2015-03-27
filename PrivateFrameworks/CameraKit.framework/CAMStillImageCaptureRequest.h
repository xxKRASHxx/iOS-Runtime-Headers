/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <CAMStillImageCaptureRequestDelegate>;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {
    int _captureDevice;
    <CAMStillImageCaptureRequestDelegate> *_delegate;
    int _deviceOrientation;
    int _flashMode;
    int _hdrMode;
    BOOL _transient;
    BOOL _usesStillImageStabilization;
    BOOL _wantsAudioForCapture;
}

@property(readonly) int captureDevice;
@property(readonly) <CAMStillImageCaptureRequestDelegate> * delegate;
@property(readonly) int deviceOrientation;
@property(readonly) int flashMode;
@property(readonly) int hdrMode;
@property(getter=isTransient,readonly) BOOL transient;
@property(readonly) BOOL usesStillImageStabilization;
@property(readonly) BOOL wantsAudioForCapture;

- (void).cxx_destruct;
- (int)captureDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (int)deviceOrientation;
- (int)flashMode;
- (int)hdrMode;
- (id)init;
- (BOOL)isTransient;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)usesStillImageStabilization;
- (BOOL)wantsAudioForCapture;

@end