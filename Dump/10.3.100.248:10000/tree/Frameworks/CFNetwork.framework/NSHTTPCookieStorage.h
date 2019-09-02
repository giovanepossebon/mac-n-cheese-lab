/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPCookieStorage : NSObject {
    bool  __overrideSessionCookieAcceptPolicy;
    NSHTTPCookieStorageInternal * _internal;
}

@property (nonatomic) bool _overrideSessionCookieAcceptPolicy;
@property unsigned long long cookieAcceptPolicy;
@property (readonly, copy) NSArray *cookies;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)_csff:(id)arg1;
+ (id)_csfi:(id)arg1;
+ (id)_groupContainerCookieStorages;
+ (id)_groupContainerStoragesLock;
+ (void)_setSharedHTTPCookieStorage:(id)arg1;
+ (id)_sharedCookieStorageLock;
+ (id)sharedCookieStorageForGroupContainerIdentifier:(id)arg1;
+ (id)sharedHTTPCookieStorage;

- (struct OpaqueCFHTTPCookieStorage { }*)_CFHTTPCookieStorage;
- (struct OpaqueCFHTTPCookieStorage { }*)_cookieStorage;
- (id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2;
- (void)_getCookieStoragePartitionsCompletionHandler:(id /* block */)arg1;
- (void)_getCookiesForPartition:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(bool)arg2;
- (bool)_overrideSessionCookieAcceptPolicy;
- (void)_saveCookies;
- (void)_saveCookies:(id /* block */)arg1;
- (void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4;
- (void)_setPrivateBrowsingEnabled:(bool)arg1;
- (void)_testingOfStoringOfCookie:(id)arg1;
- (unsigned long long)cookieAcceptPolicy;
- (id)cookieRequestHeaderFieldsForURL:(id)arg1;
- (id)cookies;
- (id)cookiesForURL:(id)arg1;
- (void)dealloc;
- (void)deleteCookie:(id)arg1;
- (id)description;
- (void)getCookiesForTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)removeCookiesSinceDate:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setCookieAcceptPolicy:(unsigned long long)arg1;
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;
- (void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3;
- (void)set_overrideSessionCookieAcceptPolicy:(bool)arg1;
- (id)sortedCookiesUsingDescriptors:(id)arg1;
- (void)storeCookies:(id)arg1 forTask:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_icloudCookies;

@end
