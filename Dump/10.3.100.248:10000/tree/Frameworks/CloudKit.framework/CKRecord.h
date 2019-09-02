/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecord : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {
    NSString * _baseToken;
    NSData * _chainParentPublicKeyID;
    CKEncryptedData * _chainPrivateKey;
    NSData * _chainProtectionInfo;
    NSArray * _conflictLoserEtags;
    CKContainerID * _containerID;
    NSDate * _creationDate;
    CKRecordID * _creatorUserRecordID;
    NSString * _displayedHostname;
    CKEncryptedRecordValueStore * _encryptedValueStore;
    NSString * _etag;
    bool  _hasUpdatedParent;
    bool  _hasUpdatedShare;
    bool  _knownToServer;
    CKRecordID * _lastModifiedUserRecordID;
    NSDate * _modificationDate;
    NSString * _modifiedByDevice;
    CKEncryptedData * _mutableEncryptedPSK;
    NSURL * _mutableURL;
    CKReference * _parent;
    NSData * _pcsKeyID;
    long long  _permission;
    NSDictionary * _pluginFields;
    CKReference * _previousParent;
    NSString * _previousProtectionEtag;
    NSString * _previousProtectionEtagFromUnitTest;
    CKReference * _previousShare;
    NSData * _protectionData;
    NSString * _protectionEtag;
    CKRecordID * _recordID;
    NSString * _recordType;
    NSString * _routingKey;
    bool  _serializeProtectionData;
    CKReference * _share;
    NSString * _shareEtag;
    NSArray * _tombstonedPublicKeyIDs;
    bool  _trackChanges;
    bool  _useLightweightPCS;
    CKRecordValueStore * _valueStore;
    bool  _wantsChainPCS;
    bool  _wantsPublicSharingKey;
    bool  _wasCached;
    NSString * _zoneProtectionEtag;
    NSData * _zoneishKeyID;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) unsigned long long assetDiskSize;
@property (nonatomic, retain) NSString *baseToken;
@property (nonatomic, retain) NSData *chainParentPublicKeyID;
@property (nonatomic, retain) CKEncryptedData *chainPrivateKey;
@property (nonatomic, retain) NSData *chainProtectionInfo;
@property (nonatomic, retain) NSSet *changedKeysSet;
@property (nonatomic, retain) NSArray *conflictLoserEtags;
@property (nonatomic, copy) CKContainerID *containerID;
@property (nonatomic, readonly) bool containsAssetValues;
@property (nonatomic, readonly) bool containsPackageValues;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) CKRecordID *creatorUserRecordID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayedHostname;
@property (nonatomic, readonly) NSData *encryptedFullTokenData;
@property (nonatomic, readonly) NSData *encryptedPublicSharingKey;
@property (nonatomic, retain) CKEncryptedRecordValueStore *encryptedValueStore;
@property (nonatomic, readonly) <CKRecordKeyValueSetting> *encryptedValuesByKey;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) NSString *fullToken;
@property (nonatomic, readonly) bool hasEncryptedData;
@property (nonatomic, readonly) bool hasModifiedEncryptedData;
@property (nonatomic, readonly) bool hasModifiedPropertiesRequiringEncryption;
@property (nonatomic, readonly) bool hasPropertiesRequiringDecryption;
@property (nonatomic, readonly) bool hasPropertiesRequiringEncryption;
@property (nonatomic) bool hasUpdatedParent;
@property (nonatomic) bool hasUpdatedShare;
@property (readonly) unsigned long long hash;
@property (getter=isKnownToServer, nonatomic) bool knownToServer;
@property (nonatomic, copy) CKRecordID *lastModifiedUserRecordID;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *modifiedByDevice;
@property (nonatomic, retain) CKEncryptedData *mutableEncryptedPSK;
@property (nonatomic, retain) CKEncryptedData *mutableEncryptedPublicSharingKey;
@property (nonatomic, retain) NSData *mutableEncryptedPublicSharingKeyData;
@property (nonatomic, copy) NSURL *mutableURL;
@property (nonatomic, readonly) NSDictionary *originalValues;
@property (nonatomic, copy) CKReference *parent;
@property (nonatomic, retain) NSData *pcsKeyID;
@property long long permission;
@property (nonatomic, copy) NSDictionary *pluginFields;
@property (nonatomic, retain) CKReference *previousParent;
@property (nonatomic, retain) NSString *previousProtectionEtag;
@property (nonatomic, retain) NSString *previousProtectionEtagFromUnitTest;
@property (nonatomic, retain) CKReference *previousShare;
@property (nonatomic, readonly) NSString *privateToken;
@property (nonatomic, retain) NSData *protectionData;
@property (nonatomic, retain) NSString *protectionEtag;
@property (nonatomic, readonly, copy) NSString *recordChangeTag;
@property (nonatomic, copy) CKRecordID *recordID;
@property (nonatomic, copy) NSString *recordType;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic) bool serializeProtectionData;
@property (nonatomic, copy) CKReference *share;
@property (nonatomic, retain) NSString *shareEtag;
@property (nonatomic, readonly) NSData *shortSharingTokenData;
@property (nonatomic, readonly) NSData *shortSharingTokenHashData;
@property (nonatomic, readonly) NSString *shortToken;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tombstonedPublicKeyIDs;
@property (nonatomic) bool trackChanges;
@property (nonatomic, readonly) NSURL *uncachedURL;
@property (nonatomic) bool useLightweightPCS;
@property (nonatomic, retain) CKRecordValueStore *valueStore;
@property (nonatomic, readonly) NSDictionary *values;
@property (nonatomic, readonly) <CKRecordKeyValueSetting> *valuesByKey;
@property (nonatomic) bool wantsChainPCS;
@property (nonatomic) bool wantsPublicSharingKey;
@property (nonatomic) bool wasCached;
@property (nonatomic, retain) NSString *zoneProtectionEtag;
@property (nonatomic, retain) NSData *zoneishKeyID;

+ (bool)accessInstanceVariablesDirectly;
+ (id)decryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)encryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)fullTokenFromBaseToken:(id)arg1 privateToken:(id)arg2;
+ (id)recordWithDuplicatedPackagesOfRecord:(id)arg1 error:(id*)arg2;
+ (id)shareURLWithShortToken:(id)arg1 shareTitle:(id)arg2 shareType:(id)arg3 containerID:(id)arg4 displayedHostname:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)URL;
- (id)_allStrings;
- (bool)_checkProperties:(bool)arg1 encryptedStore:(bool)arg2 withValueCheckBlock:(id /* block */)arg3;
- (id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2;
- (unsigned long long)_sizeOfRecordID:(id)arg1;
- (unsigned long long)_sizeOfRecordValue:(id)arg1 forKey:(id)arg2;
- (void)_validateRecordName:(id)arg1;
- (void)_validateRecordType:(id)arg1;
- (bool)_valueIsUsingCKEncryptedData:(id)arg1;
- (id)allKeys;
- (id)allTokens;
- (id)allValues;
- (unsigned long long)assetCount;
- (unsigned long long)assetDiskSize;
- (id)baseToken;
- (id)chainParentPublicKeyID;
- (id)chainPrivateKey;
- (id)chainProtectionInfo;
- (id)changedKeys;
- (id)changedKeysSet;
- (void)claimPackagesWithSuccessBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (id)conflictLoserEtags;
- (id)containerID;
- (bool)containsAssetValues;
- (bool)containsPackageValues;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)creatorUserRecordID;
- (id)debugDescription;
- (id)decryptFullToken:(id)arg1;
- (id)description;
- (id)displayedHostname;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedFullTokenData;
- (id)encryptedPublicSharingKey;
- (id)encryptedValueStore;
- (id)encryptedValuesByKey;
- (id)etag;
- (id)fullToken;
- (bool)hasEncryptedData;
- (bool)hasModifiedEncryptedData;
- (bool)hasModifiedPropertiesRequiringEncryption;
- (bool)hasPropertiesRequiringDecryption;
- (bool)hasPropertiesRequiringEncryption;
- (bool)hasUpdatedParent;
- (bool)hasUpdatedShare;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (bool)isKnownToServer;
- (id)lastModifiedUserRecordID;
- (id)modificationDate;
- (id)modifiedByDevice;
- (id)mutableEncryptedPSK;
- (id)mutableEncryptedPublicSharingKey;
- (id)mutableEncryptedPublicSharingKeyData;
- (id)mutableURL;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)originalValues;
- (id)parent;
- (id)pcsKeyID;
- (long long)permission;
- (id)pluginFields;
- (id)previousParent;
- (id)previousProtectionEtag;
- (id)previousProtectionEtagFromUnitTest;
- (id)previousShare;
- (id)privateToken;
- (id)protectionData;
- (id)protectionEtag;
- (id)recordChangeTag;
- (id)recordID;
- (id)recordType;
- (void)releasePackages;
- (void)removePackages;
- (void)resetChangedKeys;
- (id)routingKey;
- (bool)serializeProtectionData;
- (void)setBaseToken:(id)arg1;
- (void)setChainParentPublicKeyID:(id)arg1;
- (void)setChainPrivateKey:(id)arg1;
- (void)setChainProtectionInfo:(id)arg1;
- (void)setChangedKeysSet:(id)arg1;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCreatorUserRecordID:(id)arg1;
- (void)setDisplayedHostname:(id)arg1;
- (void)setEncryptedValueStore:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasUpdatedParent:(bool)arg1;
- (void)setHasUpdatedShare:(bool)arg1;
- (void)setKnownToServer:(bool)arg1;
- (void)setLastModifiedUserRecordID:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setModifiedByDevice:(id)arg1;
- (void)setMutableEncryptedPSK:(id)arg1;
- (void)setMutableEncryptedPublicSharingKey:(id)arg1;
- (void)setMutableEncryptedPublicSharingKeyData:(id)arg1;
- (void)setMutableURL:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setParentReferenceFromRecord:(id)arg1;
- (void)setParentReferenceFromRecordID:(id)arg1;
- (void)setPcsKeyID:(id)arg1;
- (void)setPermission:(long long)arg1;
- (void)setPluginFields:(id)arg1;
- (void)setPreviousParent:(id)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setPreviousProtectionEtagFromUnitTest:(id)arg1;
- (void)setPreviousShare:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setSerializeProtectionData:(bool)arg1;
- (void)setShare:(id)arg1;
- (void)setShareEtag:(id)arg1;
- (void)setTombstonedPublicKeyIDs:(id)arg1;
- (void)setTrackChanges:(bool)arg1;
- (void)setUseLightweightPCS:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValueStore:(id)arg1;
- (void)setWantsChainPCS:(bool)arg1;
- (void)setWantsPublicSharingKey:(bool)arg1;
- (void)setWasCached:(bool)arg1;
- (void)setZoneProtectionEtag:(id)arg1;
- (void)setZoneishKeyID:(id)arg1;
- (id)share;
- (id)shareEtag;
- (id)shortSharingToken;
- (id)shortSharingTokenData;
- (id)shortSharingTokenHashData;
- (id)shortToken;
- (unsigned long long)size;
- (id)tombstonedPublicKeyIDs;
- (bool)trackChanges;
- (id)uncachedURL;
- (bool)useLightweightPCS;
- (id)valueForKey:(id)arg1;
- (id)valueStore;
- (id)values;
- (id)valuesByKey;
- (bool)wantsChainPCS;
- (bool)wantsPublicSharingKey;
- (bool)wasCached;
- (id)zoneProtectionEtag;
- (id)zoneishKeyID;

@end