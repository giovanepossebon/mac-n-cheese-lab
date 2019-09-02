/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryOperation : CKDatabaseOperation {
    NSDictionary * _assetTransferOptionsByKey;
    CKQueryCursor * _cursor;
    NSArray * _desiredKeys;
    bool  _fetchAllResults;
    CKQuery * _query;
    id /* block */  _queryCompletionBlock;
    id /* block */  _queryCursorFetchedBlock;
    id /* block */  _recordFetchedBlock;
    CKQueryCursor * _resultsCursor;
    unsigned long long  _resultsLimit;
    bool  _shouldFetchAssetContent;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByKey;
@property (nonatomic, copy) CKQueryCursor *cursor;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic) bool fetchAllResults;
@property (nonatomic, copy) CKQuery *query;
@property (nonatomic, copy) id /* block */ queryCompletionBlock;
@property (nonatomic, copy) id /* block */ queryCursorFetchedBlock;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, retain) CKQueryCursor *resultsCursor;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) bool shouldFetchAssetContent;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)assetTransferOptionsByKey;
- (id)cursor;
- (id)desiredKeys;
- (bool)fetchAllResults;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithCursor:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (void)performCKOperation;
- (id)query;
- (id /* block */)queryCompletionBlock;
- (id /* block */)queryCursorFetchedBlock;
- (id /* block */)recordFetchedBlock;
- (id)resultsCursor;
- (unsigned long long)resultsLimit;
- (void)setAssetTransferOptionsByKey:(id)arg1;
- (void)setCursor:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAllResults:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryCompletionBlock:(id /* block */)arg1;
- (void)setQueryCursorFetchedBlock:(id /* block */)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setResultsCursor:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneID;

@end
