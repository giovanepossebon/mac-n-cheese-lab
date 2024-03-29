/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFTaskPerformanceTiming : NSObject <NSSecureCoding> {
    NSUUID * __activityUUID;
    NSDate * __didCompleteWithError;
    bool  __isBackground;
    long long  __numberOfRetries;
    NSDate * __resumeTime;
    long long  __taskSchedulingTier;
}

@property (retain) NSUUID *_activityUUID;
@property (retain) NSDate *_didCompleteWithError;
@property bool _isBackground;
@property long long _numberOfRetries;
@property (retain) NSDate *_resumeTime;
@property long long _taskSchedulingTier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activityUUID;
- (id)_didCompleteWithError;
- (bool)_isBackground;
- (long long)_numberOfRetries;
- (id)_resumeTime;
- (long long)_taskSchedulingTier;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)set_activityUUID:(id)arg1;
- (void)set_didCompleteWithError:(id)arg1;
- (void)set_isBackground:(bool)arg1;
- (void)set_numberOfRetries:(long long)arg1;
- (void)set_resumeTime:(id)arg1;
- (void)set_taskSchedulingTier:(long long)arg1;

@end
