/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSThread : NSObject {
    unsigned char  _bytes;
    id  _private;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (getter=isExecuting, readonly) bool executing;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) bool isMainThread;
@property (copy) NSString *name;
@property long long qualityOfService;
@property unsigned long long stackSize;
@property (readonly, retain) NSMutableDictionary *threadDictionary;
@property double threadPriority;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)callStackReturnAddresses;
+ (id)callStackSymbols;
+ (id)currentThread;
+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (void)detachNewThreadWithBlock:(id /* block */)arg1;
+ (void)exit;
+ (bool)isDying;
+ (bool)isMainThread;
+ (bool)isMultiThreaded;
+ (id)mainThread;
+ (bool)setThreadPriority:(double)arg1;
+ (void)sleepForTimeInterval:(double)arg1;
+ (void)sleepUntilDate:(id)arg1;
+ (double)threadPriority;

- (struct pthread_override_s { }*)_beginQoSOverride:(unsigned int)arg1 relativePriority:(int)arg2;
- (void)_endQoSOverride:(struct pthread_override_s { }*)arg1;
- (void)_nq:(id)arg1;
- (bool)_setThreadPriority:(double)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (bool)isCancelled;
- (bool)isDying;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isMainThread;
- (void)main;
- (id)name;
- (long long)qualityOfService;
- (id)runLoop;
- (void)setName:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setStackSize:(unsigned long long)arg1;
- (void)setThreadPriority:(double)arg1;
- (unsigned long long)stackSize;
- (void)start;
- (id)threadDictionary;
- (double)threadPriority;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_networkIOThread;
+ (void)_mapkit_runThread:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)ams_symbolicatedCallStackSymbols;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (void)_im_runBlock:(id /* block */)arg1;

- (void)__im_performBlock:(id /* block */)arg1;
- (void)__im_performBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)__im_performBlock:(id /* block */)arg1 afterDelay:(double)arg2 modes:(id)arg3;
- (void)__im_performBlock:(id /* block */)arg1 modes:(id)arg2;
- (void)__im_performBlock:(id /* block */)arg1 waitUntilDone:(bool)arg2;
- (void)__im_performBlock:(id /* block */)arg1 waitUntilDone:(bool)arg2 modes:(id)arg3;

@end
