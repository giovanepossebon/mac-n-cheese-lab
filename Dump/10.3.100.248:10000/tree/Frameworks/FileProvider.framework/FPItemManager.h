/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPItemManager : NSObject {
    NSMutableSet * _activeCollections;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSOperationQueue * _operationQueue;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_fetchFileProviderServices:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchRemoteFileProviderEndpointWithIdentifier:(id)arg1 remoteObjectInterface:(id)arg2 handler:(id /* block */)arg3;
- (void)_fetchRemoteFileProviderVendorWithIdentifier:(id)arg1 remoteObjectInterface:(id)arg2 messageInterface:(id)arg3 handler:(id /* block */)arg4 connectionErrorHandler:(id /* block */)arg5;
- (void)_fetchRemoteFileProviderWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)_fetchRemoteOperationServiceForProvider:(id)arg1 handler:(id /* block */)arg2 connectionErrorHandler:(id /* block */)arg3;
- (void)_fetchRemoteServiceEndpointCreatingProviderWithIdentifier:(id)arg1 itemURL:(id)arg2 handler:(id /* block */)arg3;
- (void)_fetchRequestProxyFactoryEndpointForMessageInterface:(id)arg1 providerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchServiceEndpointCreatingForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchURLForItemID:(id)arg1 creatingPlaceholderIfMissing:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_isValidDestination:(id)arg1;
- (id)_thumbnailsFetchOperationForProviderIdentifier:(id)arg1 itemIDs:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (void)addOperation:(id)arg1;
- (id)collectionForFolderItem:(id)arg1 fileTypes:(id)arg2;
- (id)collectionWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 fileTypes:(id)arg4;
- (id)collectionWithIdentifier:(id)arg1 providerIdentifier:(id)arg2 fileTypes:(id)arg3;
- (id)eligibleActionsForDroppingItems:(id)arg1 underItem:(id)arg2;
- (id)eligibleActionsForDroppingUTIs:(id)arg1 underItem:(id)arg2;
- (id)eligibleActionsForItems:(id)arg1;
- (void)extendBookmarkForItem:(id)arg1 receivingBundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchDefaultLocationForApplication:(id)arg1 defaultProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchIndexPropertiesForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchItemForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchItemForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchParentForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRootItemForProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchURLForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchURLForItem:(id)arg1 creatingPlaceholderIfMissing:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchURLForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)newRootCollectionForProviderIdentifier:(id)arg1;
- (id)operationForAction:(id)arg1 items:(id)arg2;
- (id)recursiveFolderCollectionForProvider:(id)arg1;
- (void)recursivelyExportItem:(id)arg1 toURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)rootCollectionForProvider:(id)arg1 fileTypes:(id)arg2;
- (void)scheduleAction:(id)arg1;
- (id)thumbnailsFetchOperationForItems:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

@end
