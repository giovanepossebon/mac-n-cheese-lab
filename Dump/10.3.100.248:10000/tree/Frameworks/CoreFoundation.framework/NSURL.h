/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSURL : NSObject <AFSecurityDigestibleChunksProviding, CKXPCSuitableString, DebugHierarchyValue_Fallback, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, SFJSONSerializable, UIItemProviderReading, UIItemProviderWriting> {
    NSURL * _baseURL;
    void * _clients;
    void * _reserved;
    NSString * _urlString;
}

@property (readonly, copy) NSURL *URLByDeletingLastPathComponent;
@property (readonly, copy) NSURL *URLByDeletingPathExtension;
@property (readonly, copy) NSURL *URLByResolvingSymlinksInPath;
@property (readonly, copy) NSURL *URLByStandardizingPath;
@property (setter=_setTitle:, nonatomic, copy) NSString *_title;
@property (readonly, copy) NSString *aa_endpoint;
@property (readonly, copy) NSString *absoluteString;
@property (readonly, copy) NSURL *absoluteURL;
@property (nonatomic, readonly) int addressBookUID;
@property (nonatomic, readonly) NSDictionary *ams_parameters;
@property (readonly, copy) NSURL *baseURL;
@property (getter=isBasebandLogURL, nonatomic, readonly) bool basebandLogURL;
@property (readonly) int callService;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSURL *filePathURL;
@property (readonly) const char *fileSystemRepresentation;
@property (getter=isFileURL, readonly) bool fileURL;
@property (readonly) bool forceAssist;
@property (nonatomic, readonly, copy) NSString *formattedPhoneNumber;
@property (readonly, copy) NSString *fragment;
@property (readonly) bool hasDirectoryPath;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *host;
@property (getter=isiWorkURL, readonly) bool iWorkURL;
@property (readonly) bool isEmergencyCallURL;
@property (readonly) bool isEmergencyURL;
@property (readonly) bool isVoicemailURL;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly, copy) NSString *lastPathComponent;
@property (setter=ls_setPreferredLocalizations:, retain) NSArray *ls_preferredLocalizations;
@property (nonatomic, readonly, copy) NSString *numberQualifiedForAddressBook;
@property (readonly) NSString *originatingUIIdentifier;
@property (readonly, copy) NSString *parameterString;
@property (readonly, copy) NSString *password;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSArray *pathComponents;
@property (readonly, copy) NSString *pathExtension;
@property (readonly) NSString *phoneNumber;
@property (readonly, copy) NSNumber *port;
@property (readonly, copy) NSString *query;
@property (readonly, copy) NSString *relativePath;
@property (readonly, copy) NSString *relativeString;
@property (readonly, copy) NSString *resourceSpecifier;
@property (readonly, copy) NSString *scheme;
@property (readonly, copy) NSURL *standardizedURL;
@property (readonly) Class superclass;
@property (readonly) bool suppressAssist;
@property (readonly, copy) NSString *user;
@property (readonly) bool wasAlreadyAssisted;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)__unurl;
+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (bool)supportsSecureCoding;
+ (bool)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (id)bookmarkDataWithAliasRecord:(id)arg1;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4;
- (bool)checkResourceIsReachableAndReturnError:(id*)arg1;
- (id)filePathURL;
- (id)fileReferenceURL;
- (bool)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)isFileReferenceURL;
- (void)removeAllCachedResourceValues;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (id)resourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (bool)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setResourceValues:(id)arg1 error:(id*)arg2;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (bool)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

- (id)fallback_debugHierarchyValueWithOutOptions:(id*)arg1 outError:(id*)arg2;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (bool)_isSafeDirectoryForDownloads:(int)arg1 withToken:(struct { unsigned int x1[8]; })arg2;
- (bool)_isSafeFileForBackgroundUpload:(int)arg1 withToken:(struct { unsigned int x1[8]; })arg2;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)databaseRPCURLWithCodeServicesURL:(id)arg1 inEnvironment:(long long)arg2;

- (id)CKSharingURLSubscheme;
- (id)CKXPCSuitableString;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)LS_iCloudFamilyURLWithComponents:(id)arg1;
+ (id)LS_iCloudSchoolworkURLWithComponents:(id)arg1;
+ (bool)LS_isHostiCloud:(id)arg1;
+ (id)ls_bizURL:(id)arg1;

- (bool)LS_hasiCloudHost;
- (id)LS_nooverride:(id)arg1;
- (bool)LS_pathHasCaseInsensitivePrefix:(id)arg1;
- (bool)conformsToOverridePatternWithKey:(id)arg1;
- (id)fmfURL;
- (id)fmipURL;
- (id)iCloudEmailPrefsURL;
- (id)iCloudSharingURL;
- (id)iCloudSharingURL_noFragment;
- (id)iTunesStoreURL;
- (id)iWorkApplicationName;
- (id)iWorkDocumentName;
- (bool)isiWorkURL;
- (id)keynoteLiveURL;
- (id)keynoteLiveURL_noFragment;
- (id)ls_preferredLocalizations;
- (void)ls_setPreferredLocalizations:(id)arg1;
- (id)mapsURL;
- (id)photosURL;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (bool)cs_addDocumentTracking;
- (bool)cs_isInMobileDocuments;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)fp_homeDirectory;
+ (id)fp_homeDirectoryForUserID:(unsigned int)arg1;
+ (id)fp_supportDirectory;

- (id)fp_addDocumentTrackingWithError:(id*)arg1;
- (bool)fp_associateThumbnailFromDocumentAtURL:(id)arg1 error:(id*)arg2;
- (void)fp_coordinatedDeleteWithHandler:(id /* block */)arg1;
- (id)fp_copyToTempFolderWithFilename:(id)arg1 error:(id*)arg2;
- (bool)fp_createSubFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_deleteWithCompletionHandler:(id /* block */)arg1;
- (id)fp_directorySizeWithError:(id*)arg1;
- (id)fp_existingURLOfChildWithName:(id)arg1;
- (id)fp_existingURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2;
- (unsigned long long)fp_fileSize;
- (void)fp_hideExtension:(bool)arg1;
- (bool)fp_importUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_isFolder;
- (id)fp_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;
- (bool)fp_makeWritableWithError:(id*)arg1;
- (bool)fp_matchesCloudDocsURL:(id)arg1;
- (bool)fp_matchesFileProviderHeuristics:(unsigned int)arg1;
- (bool)fp_matchesFileProviderURL:(id)arg1;
- (bool)fp_matchesLocalStorageURL:(id)arg1;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 byCopying:(bool)arg2 error:(id*)arg3;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 error:(id*)arg2;
- (bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(bool)arg4 completionHandler:(id /* block */)arg5;
- (long long)fp_relationshipToItemAtURL:(id)arg1;
- (id)fp_relativePathOf:(id)arg1;
- (bool)fp_renameWithNewName:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_reparentUnderFolder:(id)arg1 allowBouncing:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)fp_reparentUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)fp_scopeDescription;
- (id)fp_shortDescription;
- (bool)fp_trashUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fp_withReadWriteAccess:(id /* block */)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(bool*)arg4 error:(id*)arg5;
+ (id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithString:(id)arg1;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithComponents:(/* Warning: unhandled struct encoding: '{?=@@@@q@@@}' */ struct { id x1; id x2; long long x3; id x4; id x5; })arg1;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(bool)arg2;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
+ (id)fileURLWithPathComponents:(id)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)URLByAppendingPathComponent:(id)arg1;
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(bool)arg2;
- (id)URLByAppendingPathExtension:(id)arg1;
- (id)URLByDeletingLastPathComponent;
- (id)URLByDeletingPathExtension;
- (id)URLByResolvingSymlinksInPath;
- (id)URLByStandardizingPath;
- (id)_URLArchive;
- (id)_URLByEscapingSpacesAndControlChars;
- (unsigned long long)_cfTypeID;
- (struct __CFURL { }*)_cfurl;
- (struct __CFDictionary { }*)_clientsCreatingIfNecessary:(bool)arg1;
- (id)_fixedUpSideFaultError:(id)arg1;
- (void)_freeClients;
- (id)_hostString;
- (bool)_isAbsolute;
- (bool)_isDeallocating;
- (void)_performWithPhysicalURL:(id /* block */)arg1;
- (long long)_promiseExtensionConsume;
- (void)_promiseExtensionRelease:(long long)arg1;
- (bool)_tryRetain;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (/* Warning: unhandled struct encoding: '{?=@@@@q@@@}' */ struct { id x1; id x2; long long x3; id x4; id x5; })_web_URLComponents;
- (bool)_web_isJavaScriptURL;
- (id)_web_scriptIfJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
- (id)absoluteString;
- (id)absoluteURL;
- (id)baseURL;
- (bool)checkPromisedItemIsReachableAndReturnError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (const char *)fileSystemRepresentation;
- (id)fragment;
- (bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (bool)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)hasDirectoryPath;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(bool*)arg4 error:(id*)arg5;
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(bool)arg2;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFileURL;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (id)lastPathComponent;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)parameterString;
- (id)password;
- (id)path;
- (id)pathComponents;
- (id)pathExtension;
- (id)port;
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (id)query;
- (id)relativePath;
- (id)relativeString;
- (oneway void)release;
- (id)resourceSpecifier;
- (id)retain;
- (unsigned long long)retainCount;
- (id)scheme;
- (id)standardizedURL;
- (id)user;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (unsigned long long)un_fileSize;
- (id)un_resourceTypeHint;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_URLWithEndpoint:(id)arg1;

- (id)aa_endpoint;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)ams_unescapedStringForString:(id)arg1;

- (id)ams_URLByAppendingQueryParameters:(id)arg1;
- (id)ams_URLByDeletingTrailingSlash;
- (id)ams_URLByReplaceingQueryParameters:(id)arg1;
- (id)ams_URLByReplacingSchemeWithScheme:(id)arg1;
- (id)ams_parameters;
- (id)ams_schemeSwizzledURL;
- (id)ams_valueForQueryParameter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)_af_URLWithMessageIdentifier:(id)arg1;

- (id)_af_messageIdentifierValue;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)isAMOSCommittedIdentifier;
- (bool)isAMOSIdentifier;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)_cnui_dialRequestURLWithHandle:(id)arg1 contact:(id)arg2 faceTime:(bool)arg3 video:(bool)arg4 ttyType:(long long)arg5 channelIdentifier:(id)arg6;
+ (id)_cnui_faceTimeAudioURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeAudioURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeVideoURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeVideoURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_messagesURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_messagesURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_skypeTextURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeTextURLWithHandle:(id)arg1;
+ (id)_cnui_skypeVideoURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeVideoURLWithHandle:(id)arg1;
+ (id)_cnui_skypeVoiceURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeVoiceURLWithHandle:(id)arg1;
+ (id)_cnui_telephonyURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_telephonyURLFutureWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_telephonyURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_telephonyURLWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyRelayURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLFutureWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyRelayURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLFutureWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_walletPayURLFutureWithHandle:(id)arg1;
+ (id)_cnui_walletPayURLWithHandle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_URLWithString:(id)arg1 tokenSubstitutions:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)__imURLByAppendingQueryString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (bool)__im_conformsToDomain:(id)arg1 domainExtension:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

- (id)dictionaryRepresentation;
- (id)jsonData;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)_ss_URLByRemovingQueryParameter:(id)arg1;
- (bool)_ss_hasQueryParameter:(id)arg1;
- (id)_ss_valueForQueryParameter:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isStoreServicesURL;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(bool)arg2;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimeLaunchForOutgoingConversationURL;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(bool)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5 audioOnly:(bool)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3 forceAssist:(bool)arg4 suppressAssist:(bool)arg5 wasAssisted:(bool)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLWithDestinationID:(id)arg1;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(bool)arg2;

- (id)URLByDeletingQueryParameterWithKey:(id)arg1;
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;
- (id)_destinationIDConvertingNumbersToLatin:(bool)arg1;
- (bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;
- (bool)_hasScheme:(id)arg1;
- (bool)_isPhoneNumberID:(id)arg1;
- (id)_mobilePhonePathParameters;
- (id)_mobilePhoneQueryParameters;
- (int)addressBookUID;
- (int)callService;
- (id)faceTimeDestinationAccount;
- (bool)forceAssist;
- (id)formattedPhoneNumber;
- (bool)hasNoPromptOption;
- (bool)hasTelephonyScheme;
- (bool)isBasebandLogURL;
- (bool)isDialCallURL;
- (bool)isEmergencyCallURL;
- (bool)isEmergencyURL;
- (bool)isFaceTimeAudioPromptURL;
- (bool)isFaceTimeAudioURL;
- (bool)isFaceTimeMultiwayURL;
- (bool)isFaceTimePromptURL;
- (bool)isFaceTimeURL;
- (bool)isLaunchForIncomingCallURL;
- (bool)isLaunchForOutgoingConversationURL;
- (bool)isShowInCallUIURL;
- (bool)isTelephonyPromptURL;
- (bool)isTelephonyURL;
- (bool)isVoicemailURL;
- (bool)isWebSafeTelephoneURL;
- (id)numberQualifiedForAddressBook;
- (id)originatingUIIdentifier;
- (id)phoneNumber;
- (id)queryParameters;
- (bool)suppressAssist;
- (id)telephonyParameterDictionary;
- (id)tuQueryParameters;
- (bool)wasAlreadyAssisted;
- (id)webSafeTelephoneURL;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;
+ (id)mapsURLWithQuery:(id)arg1;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)ui_URLFromExportBookmark:(id)arg1;
+ (id)ui_cloudDocsContainerURL;
+ (id)ui_incomingDirectory:(bool)arg1;

- (id)_NSItemProviderArchive_customArchiveDictionary;
- (void)_NSItemProviderArchive_didUnarchiveCustomDictionary:(id)arg1;
- (void)_domain:(id*)arg1 subdomain:(id*)arg2;
- (void)_setTitle:(id)arg1;
- (id)_title;
- (bool)isAccountURL;
- (bool)isHTTPOrHTTPSURL;
- (bool)isInternalUIKitURL;
- (bool)isJavaScriptURL;
- (bool)isSpringboardHandledURL;
- (bool)isWebcalURL;
- (id)phobosURL;
- (id)radarWebURL;
- (void)registerLoadHandlersToItemProvider:(id)arg1;
- (id)searchResultDomain;
- (id)searchResultIdentifier;
- (id)ui_bookmarkForExportWithError:(id*)arg1;
- (bool)ui_canOpenInPlace;
- (id)ui_downloadOperationForActivity:(id)arg1;
- (bool)ui_hasReadSandboxExtended;
- (bool)ui_hasSandboxExtendedForClass:(const char *)arg1;
- (bool)ui_isFileProviderURL;
- (bool)ui_isUnfulfilledPromiseURL;
- (id)ui_issueReadSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueReadWriteSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;
- (id)ui_resolveOnDiskBookmarkAndPromise;
- (void)ui_scheduleForCleanup;
- (void)ui_setIsFileProviderURL:(bool)arg1;
- (void)ui_setSourceIsManaged:(bool)arg1;
- (bool)ui_sourceIsManaged;

// Image: /System/Library/PrivateFrameworks/URLFormatting.framework/URLFormatting

+ (id)_lp_URLWithData:(id)arg1 baseURL:(id)arg2;
+ (id)_lp_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;

- (id)_lp_highLevelDomain;
- (bool)_lp_isHTTPFamilyURL;
- (id)_lp_originalData;
- (id)_lp_simplifiedDisplayString;
- (id)_lp_simplifiedStringForDisplayOnly:(bool)arg1;
- (id)_lp_userVisibleString;
- (bool)_lp_userVisibleStringUsesEncodedHost;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_web_URLWithData:(id)arg1;
+ (id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithUserTypedString:(id)arg1;
+ (id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_uniqueWebDataURL;
+ (id)_webkit_URLWithUserTypedString:(id)arg1;
+ (id)_webkit_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;

- (id)_web_URLByRemovingUserInfo;
- (const char *)_web_URLCString;
- (id)_web_dataForURLComponentType:(long long)arg1;
- (id)_web_hostData;
- (id)_web_hostString;
- (bool)_web_isEmpty;
- (id)_web_originalData;
- (id)_web_originalDataAsString;
- (id)_web_schemeData;
- (id)_web_schemeSeparatorWithoutColon;
- (id)_web_userVisibleString;
- (id)_webkit_URLByRemovingFragment;
- (id)_webkit_URLFromURLOrSchemelessFileURL;
- (id)_webkit_canonicalize;
- (bool)_webkit_isFileURL;
- (bool)_webkit_isJavaScriptURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;

@end
