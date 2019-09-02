/* Generated by RuntimeBrowser.
 */

@protocol _INPBPlayMediaIntent <NSObject>

@required

+ (Class)bucketType;
+ (Class)mediaItemsType;

- (int)StringAsPlaybackRepeatMode:(NSString *)arg1;
- (void)addBucket:(_INPBDataString *)arg1;
- (void)addMediaItems:(_INPBMediaItemValue *)arg1;
- (_INPBDataString *)bucketAtIndex:(unsigned long long)arg1;
- (NSArray *)buckets;
- (unsigned long long)bucketsCount;
- (void)clearBuckets;
- (void)clearMediaItems;
- (_INPBTimestamp *)expirationDate;
- (bool)hasExpirationDate;
- (bool)hasIntentMetadata;
- (bool)hasMediaContainer;
- (bool)hasPlayShuffled;
- (bool)hasPlaybackRepeatMode;
- (bool)hasProxiedBundleIdentifier;
- (bool)hasRecoID;
- (bool)hasResumePlayback;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBMediaItemValue *)mediaContainer;
- (NSArray *)mediaItems;
- (_INPBMediaItemValue *)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (bool)playShuffled;
- (int)playbackRepeatMode;
- (NSString *)playbackRepeatModeAsString:(int)arg1;
- (NSString *)proxiedBundleIdentifier;
- (NSString *)recoID;
- (bool)resumePlayback;
- (void)setBuckets:(NSArray *)arg1;
- (void)setExpirationDate:(_INPBTimestamp *)arg1;
- (void)setHasPlayShuffled:(bool)arg1;
- (void)setHasPlaybackRepeatMode:(bool)arg1;
- (void)setHasResumePlayback:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setMediaContainer:(_INPBMediaItemValue *)arg1;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setPlayShuffled:(bool)arg1;
- (void)setPlaybackRepeatMode:(int)arg1;
- (void)setProxiedBundleIdentifier:(NSString *)arg1;
- (void)setRecoID:(NSString *)arg1;
- (void)setResumePlayback:(bool)arg1;

@end