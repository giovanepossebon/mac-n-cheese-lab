/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMFall : NSObject

+ (bool)areStatsAvailable;

- (id)fallConfig;
- (id)sendStatsDataToUrl:(id)arg1;
- (void)sendStatsDataToUrl:(id)arg1 onCompletion:(id /* block */)arg2;
- (unsigned long long)setDataCollectionConfiguration:(unsigned long long)arg1;
- (bool)setStatsEnabled:(bool)arg1;
- (void)simulateEvent:(unsigned long long)arg1;

@end
