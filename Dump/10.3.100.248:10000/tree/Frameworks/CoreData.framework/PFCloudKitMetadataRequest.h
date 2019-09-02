/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitMetadataRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {
    NSEntityDescription * _entity;
    NSPredicate * _predicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)entity;
- (unsigned long long)fetchBatchSize;
- (unsigned long long)fetchLimit;
- (unsigned long long)fetchOffset;
- (bool)includesPropertyValues;
- (bool)includesSubentities;
- (id)init;
- (id)initWithEntity:(id)arg1;
- (id)predicate;
- (id)propertiesToFetch;
- (id)propertiesToGroupBy;
- (unsigned long long)requestType;
- (unsigned long long)resultType;
- (bool)returnsDistinctResults;
- (void)setPredicate:(id)arg1;
- (id)sortDescriptors;

@end
