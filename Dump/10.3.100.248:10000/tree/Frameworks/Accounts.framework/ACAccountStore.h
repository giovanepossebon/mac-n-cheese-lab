/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountStore : NSObject {
    NSMutableDictionary * _accountCache;
    NSString * _clientBundleID;
    id  _daemonAccountStoreDidChangeObserver;
    ACRemoteAccountStoreSession * _remoteAccountStoreSession;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) NSArray *accounts;
@property (getter=ams_isActiveAccountCombined, nonatomic, readonly) bool ams_activeAccountCombined;
@property (nonatomic, readonly) ACAccount *ams_activeiCloudAccount;
@property (nonatomic, readonly) ACAccount *ams_activeiTunesAccount;
@property (nonatomic, readonly) NSArray *ams_iTunesAccounts;
@property (nonatomic, readonly) ACAccount *ams_localiTunesAccount;
@property (nonatomic, readonly) NSString *ams_mediaType;
@property (readonly) NSString *effectiveBundleID;
@property (nonatomic, retain) ACRemoteAccountStoreSession *remoteAccountStoreSession;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
+ (bool)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_connectionFailureError;
- (id)_createSMTPAccountForServerAccount:(id)arg1;
- (void)_removeObsoleteAccountsInternal:(id)arg1 completion:(id /* block */)arg2;
- (id)_removeObsoleteOSXServerAccountForMacOS:(id)arg1;
- (void)_removeObsoleteOSXServerAccountForiOS:(id)arg1;
- (id)_sanitizeOptionsDictionary:(id)arg1;
- (void)_saveAccount:(id)arg1 verify:(bool)arg2 dataclassActions:(id)arg3 completion:(id /* block */)arg4;
- (id)_unsanitizeError:(id)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)accountWithIdentifier:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)accountWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)accounts;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(id /* block */)arg2;
- (id)accountsWithAccountType:(id)arg1;
- (void)accountsWithAccountType:(id)arg1 completion:(id /* block */)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 error:(id*)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(id /* block */)arg3;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 error:(id*)arg3;
- (bool)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)allAccountTypes;
- (id)allCredentialItems;
- (id)allDataclasses;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)cachedAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 error:(id*)arg2;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)clientTokenForAccount:(id)arg1;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (id)credentialForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1 error:(id*)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id*)arg3;
- (id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1 error:(id*)arg2;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)disconnectFromRemoteAccountStore;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)effectiveBundleID;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1 error:(id*)arg2;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (void)handleURL:(id)arg1;
- (bool)hasAccountWithDescription:(id)arg1;
- (id)init;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)insertCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1 error:(id*)arg2;
- (bool)isPushSupportedForAccount:(id)arg1;
- (bool)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(id /* block */)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(bool)arg4 completion:(id /* block */)arg5;
- (id)parentAccountForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1 error:(id*)arg2;
- (bool)permissionForAccountType:(id)arg1;
- (void)preloadDataclassOwnersWithCompletion:(id /* block */)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1 error:(id*)arg2;
- (id)remoteAccountStoreSession;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAccount:(id)arg1 withDeleteSync:(bool)arg2 completion:(id /* block */)arg3;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeAccountsFromPairedDeviceWithCompletion:(id /* block */)arg1;
- (void)removeCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeObsoleteAccounts:(id /* block */)arg1;
- (void)renewCredentialsForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)renewCredentialsForAccount:(id)arg1 force:(bool)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id /* block */)arg3;
- (void)reportTelemetryForLandmarkEvent:(id /* block */)arg1;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id /* block */)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(bool)arg3 completion:(id /* block */)arg4;
- (void)saveCredentialItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)saveVerifiedAccount:(id)arg1 error:(id*)arg2;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id*)arg4;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setPermissionGranted:(bool)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (void)setRemoteAccountStoreSession:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (void)triggerKeychainMigrationIfNecessary:(id /* block */)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id /* block */)arg2;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)aa_accountsEnabledForDataclass:(id)arg1;
- (id)aa_appleAccountType;
- (id)aa_appleAccountWithAltDSID:(id)arg1;
- (id)aa_appleAccountWithPersonID:(id)arg1;
- (id)aa_appleAccountWithUsername:(id)arg1;
- (id)aa_appleAccounts;
- (void)aa_appleAccountsWithCompletion:(id /* block */)arg1;
- (id)aa_authKitAccountForAltDSID:(id)arg1;
- (id)aa_grandSlamAccountForAltDSID:(id)arg1;
- (id)aa_grandSlamAccountForiCloudAccount:(id)arg1;
- (bool)aa_isUsingiCloud;
- (id)aa_primaryAppleAccount;
- (void)aa_primaryAppleAccountWithCompletion:(id /* block */)arg1;
- (id)aa_primaryAppleAccountWithPreloadedDataclasses;
- (id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1;
- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(id /* block */)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 usingCookieHeaders:(id)arg2 completion:(id /* block */)arg3;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)accountWithAppleID:(id)arg1;
- (id)accountsWithAccountType:(id)arg1 appleID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication

- (id)_primaryiCloudAccount;
- (id)aida_AppleIDAuthenticationAccountType;
- (id)aida_AppleIDAuthenticationAccounts;
- (id)aida_accountForPrimaryiCloudAccount;
- (id)aida_accountForiCloudAccount:(id)arg1;
- (id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(id /* block */)arg3;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(bool)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)_getSetGlobalCookiesForResponse:(id)arg1;
+ (id)_getSetUserCookiesForResponse:(id)arg1;
+ (id)_secureTokenForIdentifier:(id)arg1;
+ (id)ams_accountTypeIdentifierForMediaType:(id)arg1;
+ (id)ams_sharedAccountStore;
+ (id)ams_sharedAccountStoreForMediaType:(id)arg1;
+ (id)ams_sharedAccountStoreForProcessInfo:(id)arg1;

- (bool)_addGlobalCookiesForResponse:(id)arg1 error:(id*)arg2;
- (bool)_addUserCookiesForResponse:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (id)_allCommerceiTunesAccounts;
- (id)_alliTunesAccounts;
- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2;
- (void)_createLocalAccount;
- (id)ams_IDMSAccountForAccount:(id)arg1;
- (id)ams_activeiCloudAccount;
- (id)ams_activeiTunesAccount;
- (bool)ams_addCookiesForResponse:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (bool)ams_addCookiesForResponse:(id)arg1 request:(id)arg2 account:(id)arg3 error:(id*)arg4;
- (id)ams_cookiesForURL:(id)arg1;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3;
- (id)ams_iTunesAccountWithDSID:(id)arg1;
- (id)ams_iTunesAccountWithUsername:(id)arg1;
- (id)ams_iTunesAccounts;
- (id)ams_iTunesSandboxAccounts;
- (bool)ams_isActiveAccountCombined;
- (id)ams_localiTunesAccount;
- (id)ams_mediaType;
- (bool)ams_removeCookiesMatchingProperties:(id)arg1 error:(id*)arg2;
- (id)ams_saveAccount:(id)arg1 verifyCredentials:(bool)arg2;
- (id)ams_secureTokenForAccount:(id)arg1;
- (bool)ams_setSecureToken:(id)arg1 forAccount:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

+ (id)_accountTypesCache;

- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2 error:(id*)arg3;
- (id)_ss_IDMSAccountForAccount:(id)arg1 error:(id*)arg2;
- (id)_ss_accountTypeWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)_ss_appleAuthenticationAccountForAccount:(id)arg1 error:(id*)arg2;
- (id)_ss_iCloudAccountForAccount:(id)arg1 error:(id*)arg2;
- (id)_ss_iTunesAccountForAccount:(id)arg1 error:(id*)arg2;

@end
