/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureAudioDataOutputInternal * _internal;
}

@property (nonatomic, copy) NSDictionary *audioSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id delegateOverride;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (nonatomic, readonly) <AVCaptureAudioDataOutputSampleBufferDelegate> *sampleBufferDelegate;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)new;

- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x1; int x2; unsigned long long x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned long long x_3_2_2; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { long long x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg1;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { }*)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)audioSettings;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (id)delegateOverride;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)init;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setAudioSettings:(id)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (id)supportedAssetWriterOutputFileTypes;

@end