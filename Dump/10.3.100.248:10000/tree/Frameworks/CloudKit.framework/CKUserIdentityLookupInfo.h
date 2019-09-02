/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUserIdentityLookupInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _emailAddress;
    NSData * _encryptedPersonalInfo;
    NSString * _phoneNumber;
    bool  _shouldReportMissingIdentity;
    CKRecordID * _userRecordID;
}

@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, retain) NSData *encryptedPersonalInfo;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic) bool shouldReportMissingIdentity;
@property (nonatomic, copy) CKRecordID *userRecordID;

+ (id)lookupInfosWithEmails:(id)arg1;
+ (id)lookupInfosWithPhoneNumbers:(id)arg1;
+ (id)lookupInfosWithRecordIDs:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKPropertiesDescription;
- (void)_stripPersonalInfo;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPersonalInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)lookupField;
- (id)lookupValue;
- (id)phoneNumber;
- (void)setEmailAddress:(id)arg1;
- (void)setEncryptedPersonalInfo:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setShouldReportMissingIdentity:(bool)arg1;
- (void)setUserRecordID:(id)arg1;
- (bool)shouldReportMissingIdentity;
- (id)userRecordID;

@end
