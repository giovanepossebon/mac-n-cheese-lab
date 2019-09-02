/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAssetDownloadPreauthorization : NSObject <NSCopying> {
    NSData * _contentResponseBody;
    NSDictionary * _contentResponseHeaders;
    NSString * _responseUUID;
}

@property (nonatomic, retain) NSData *contentResponseBody;
@property (nonatomic, retain) NSDictionary *contentResponseHeaders;
@property (nonatomic, retain) NSString *responseUUID;

- (void).cxx_destruct;
- (id)contentResponseBody;
- (id)contentResponseHeaders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)responseUUID;
- (void)setContentResponseBody:(id)arg1;
- (void)setContentResponseHeaders:(id)arg1;
- (void)setResponseUUID:(id)arg1;

@end
