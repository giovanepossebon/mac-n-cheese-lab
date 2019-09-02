/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverUserInfosOperation : CKOperation {
    id /* block */  _discoverUserInfosCompletionBlock;
    NSArray * _emailAddresses;
    NSMutableDictionary * _emailsToUserInfos;
    NSArray * _userRecordIDs;
    NSMutableDictionary * _userRecordIDsToUserInfos;
}

@property (nonatomic, copy) id /* block */ discoverUserInfosCompletionBlock;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, retain) NSMutableDictionary *emailsToUserInfos;
@property (nonatomic, copy) NSArray *userRecordIDs;
@property (nonatomic, retain) NSMutableDictionary *userRecordIDsToUserInfos;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id /* block */)discoverUserInfosCompletionBlock;
- (id)emailAddresses;
- (id)emailsToUserInfos;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setDiscoverUserInfosCompletionBlock:(id /* block */)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setEmailsToUserInfos:(id)arg1;
- (void)setUserRecordIDs:(id)arg1;
- (void)setUserRecordIDsToUserInfos:(id)arg1;
- (id)userRecordIDs;
- (id)userRecordIDsToUserInfos;

@end
