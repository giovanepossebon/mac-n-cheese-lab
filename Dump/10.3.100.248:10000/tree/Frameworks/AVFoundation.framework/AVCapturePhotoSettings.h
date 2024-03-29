/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoSettings : NSObject <NSCopying> {
    AVCapturePhotoSettingsInternal * _internal;
}

@property (getter=isAutoDualCameraFusionEnabled, nonatomic) bool autoDualCameraFusionEnabled;
@property (getter=isAutoRedEyeReductionEnabled, nonatomic) bool autoRedEyeReductionEnabled;
@property (getter=isAutoStillImageStabilizationEnabled, nonatomic) bool autoStillImageStabilizationEnabled;
@property (nonatomic, readonly) NSArray *availableEmbeddedThumbnailPhotoCodecTypes;
@property (nonatomic, readonly) NSArray *availablePreviewPhotoPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableRawEmbeddedThumbnailPhotoCodecTypes;
@property (getter=isCameraCalibrationDataDeliveryEnabled, nonatomic) bool cameraCalibrationDataDeliveryEnabled;
@property (getter=isDepthDataDeliveryEnabled, nonatomic) bool depthDataDeliveryEnabled;
@property (getter=isDepthDataFiltered, nonatomic) bool depthDataFiltered;
@property (getter=isDualCameraDualPhotoDeliveryEnabled, nonatomic) bool dualCameraDualPhotoDeliveryEnabled;
@property (nonatomic, copy) NSDictionary *embeddedThumbnailPhotoFormat;
@property (nonatomic) bool embedsDepthDataInPhoto;
@property (nonatomic) bool embedsPortraitEffectsMatteInPhoto;
@property (nonatomic) long long flashMode;
@property (readonly, copy) NSDictionary *format;
@property (getter=isHighResolutionPhotoEnabled, nonatomic) bool highResolutionPhotoEnabled;
@property (nonatomic, copy) NSURL *livePhotoMovieFileURL;
@property (nonatomic, copy) NSArray *livePhotoMovieMetadata;
@property (nonatomic, copy) NSString *livePhotoVideoCodecType;
@property (nonatomic, copy) NSDictionary *metadata;
@property (getter=isPortraitEffectsMatteDeliveryEnabled, nonatomic) bool portraitEffectsMatteDeliveryEnabled;
@property (nonatomic, copy) NSDictionary *previewPhotoFormat;
@property (readonly) NSString *processedFileType;
@property (nonatomic, copy) NSDictionary *rawEmbeddedThumbnailPhotoFormat;
@property (readonly) NSString *rawFileType;
@property (readonly) unsigned int rawPhotoPixelFormatType;
@property (readonly) long long uniqueID;

+ (id)burstQualityPhotoSettings;
+ (id)photoSettings;
+ (id)photoSettingsFromPhotoSettings:(id)arg1;
+ (id)photoSettingsWithFormat:(id)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4;
+ (long long)uniqueID;

- (long long)HDRMode;
- (id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned int)arg3 rawFileType:(id)arg4 burstQualityCaptureEnabled:(bool)arg5 uniqueID:(long long)arg6 exceptionReason:(id*)arg7;
- (id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id*)arg2;
- (id)adjustedPhotoFilters;
- (id)availableEmbeddedThumbnailPhotoCodecTypes;
- (id)availablePreviewPhotoPixelFormatTypes;
- (id)availableRawEmbeddedThumbnailPhotoCodecTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct CGSize { double x1; double x2; })embeddedThumbnailCGSize;
- (unsigned int)embeddedThumbnailFormatFourCC;
- (id)embeddedThumbnailPhotoFormat;
- (bool)embedsDepthDataInPhoto;
- (bool)embedsPortraitEffectsMatteInPhoto;
- (long long)flashMode;
- (id)format;
- (unsigned int)formatFourCC;
- (id)init;
- (bool)isAutoDualCameraFusionEnabled;
- (bool)isAutoRedEyeReductionEnabled;
- (bool)isAutoStillImageStabilizationEnabled;
- (bool)isBurstQualityCaptureEnabled;
- (bool)isCameraCalibrationDataDeliveryEnabled;
- (bool)isDepthDataDeliveryEnabled;
- (bool)isDepthDataFiltered;
- (bool)isDualCameraDualPhotoDeliveryEnabled;
- (bool)isEV0PhotoDeliveryEnabled;
- (bool)isHighResolutionPhotoEnabled;
- (bool)isPortraitEffectsMatteDeliveryEnabled;
- (bool)isSquareCropEnabled;
- (bool)isTurboModeEnabled;
- (id)livePhotoContentIdentifier;
- (id)livePhotoContentIdentifierForOriginalPhoto;
- (id)livePhotoMovieFileURL;
- (id)livePhotoMovieFileURLForOriginalPhoto;
- (id)livePhotoMovieMetadata;
- (id)livePhotoMovieMetadataForOriginalPhoto;
- (id)livePhotoVideoCodecType;
- (id)metadata;
- (id)photoFilters;
- (struct CGSize { double x1; double x2; })previewCGSize;
- (unsigned int)previewFormatFourCC;
- (id)previewPhotoFormat;
- (id)processedFileType;
- (struct CGSize { double x1; double x2; })rawEmbeddedThumbnailCGSize;
- (unsigned int)rawEmbeddedThumbnailFormatFourCC;
- (id)rawEmbeddedThumbnailPhotoFormat;
- (id)rawFileType;
- (unsigned int)rawPhotoPixelFormatType;
- (void)setAdjustedPhotoFilters:(id)arg1;
- (void)setAutoDualCameraFusionEnabled:(bool)arg1;
- (void)setAutoRedEyeReductionEnabled:(bool)arg1;
- (void)setAutoStillImageStabilizationEnabled:(bool)arg1;
- (void)setCameraCalibrationDataDeliveryEnabled:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDepthDataFiltered:(bool)arg1;
- (void)setDualCameraDualPhotoDeliveryEnabled:(bool)arg1;
- (void)setEV0PhotoDeliveryEnabled:(bool)arg1;
- (void)setEmbeddedThumbnailPhotoFormat:(id)arg1;
- (void)setEmbedsDepthDataInPhoto:(bool)arg1;
- (void)setEmbedsPortraitEffectsMatteInPhoto:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setHighResolutionPhotoEnabled:(bool)arg1;
- (void)setLivePhotoContentIdentifier:(id)arg1;
- (void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieFileURL:(id)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadata:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setLivePhotoVideoCodecType:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPhotoFilters:(id)arg1;
- (void)setPortraitEffectsMatteDeliveryEnabled:(bool)arg1;
- (void)setPreviewPhotoFormat:(id)arg1;
- (void)setRawEmbeddedThumbnailPhotoFormat:(id)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (void)setSquareCropEnabled:(bool)arg1;
- (void)setTurboModeEnabled:(bool)arg1;
- (void)setUserInitiatedPhotoRequestTime:(unsigned long long)arg1;
- (unsigned int)shutterSound;
- (long long)uniqueID;
- (unsigned long long)userInitiatedPhotoRequestTime;

@end
