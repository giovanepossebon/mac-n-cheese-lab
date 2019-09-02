/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDualRedEyeRepairSession : NSObject {
    CIImage * _primaryImage;
    CIContext * context;
    CIRenderDestination * destination;
    NSArray * faces;
    NSDictionary * filterTuning;
    NSDictionary * imageProperties;
    NSDictionary * metadata;
    struct __CVBuffer { } * primary;
    NSDictionary * sessionTuning;
    NSDate * timestamp;
}

@property (nonatomic, retain) CIContext *context;
@property (nonatomic, retain) CIRenderDestination *destination;
@property (nonatomic, retain) NSArray *faces;
@property (nonatomic, retain) NSDictionary *filterTuning;
@property (nonatomic, retain) NSDictionary *imageProperties;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) struct __CVBuffer { }*primary;
@property (nonatomic, retain) CIImage *primaryImage;
@property (nonatomic, retain) NSDictionary *sessionTuning;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)_contextRGBAh;
+ (id)defaultRepairParameters;
+ (id)defaultSessionParameters;
+ (id)repairParametersForTuning:(unsigned long long)arg1;
+ (id)sessionParametersForTuning:(unsigned long long)arg1;

- (void)_dump420f:(struct __CVBuffer { }*)arg1 tag:(id)arg2;
- (void)_dump:(id)arg1 tag:(id)arg2;
- (bool)_repairPrimaryWithSecondary:(struct __CVBuffer { }*)arg1 to:(struct __CVBuffer { }*)arg2;
- (void)cleanupState;
- (id)context;
- (void)dealloc;
- (id)destination;
- (id)dumpfilepathWithTag:(id)arg1 andExtension:(id)arg2;
- (id)faces;
- (id)filterTuning;
- (id)imageProperties;
- (id)init;
- (id)metadata;
- (bool)prepareRepair;
- (struct __CVBuffer { }*)primary;
- (id)primaryImage;
- (bool)repairPrimaryWithSecondary:(struct __CVBuffer { }*)arg1;
- (id)sessionTuning;
- (void)setContext:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setFaces:(id)arg1;
- (void)setFilterTuning:(id)arg1;
- (void)setImageProperties:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPrimary:(struct __CVBuffer { }*)arg1;
- (bool)setPrimary:(struct __CVBuffer { }*)arg1 observations:(id)arg2 metadata:(id)arg3;
- (void)setPrimaryImage:(id)arg1;
- (void)setSessionTuning:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTuningFromMetadata:(id)arg1;
- (id)timestamp;

@end
