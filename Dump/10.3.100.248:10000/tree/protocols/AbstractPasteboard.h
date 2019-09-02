/* Generated by RuntimeBrowser.
 */

@protocol AbstractPasteboard <NSObject>

@required

- (long long)changeCount;
- (NSData *)dataForPasteboardType:(NSString *)arg1;
- (NSArray *)dataForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;
- (NSArray *)itemProviders;
- (long long)numberOfItems;
- (NSArray *)pasteboardTypes;
- (void)setItemProviders:(NSArray *)arg1;
- (NSArray *)valuesForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;

@optional

- (NSArray *)allDroppedFileURLs;
- (NSArray *)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id*)arg2;
- (long long)numberOfFiles;
- (NSArray *)pasteboardTypesByFidelityForItemAtIndex:(unsigned long long)arg1;
- (void)setItems:(NSArray *)arg1;
- (void)stageRegistrationList:(WebItemProviderRegistrationInfoList *)arg1;
- (WebItemProviderRegistrationInfoList *)takeRegistrationList;
- (void)updateSupportedTypeIdentifiers:(NSArray *)arg1;

@end