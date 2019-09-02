/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly, copy) NSData *bitmapRepresentation;
@property (readonly, copy) NSCharacterSet *invertedSet;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLFragmentAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)URLUserAllowedCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)controlCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)illegalCharacterSet;
+ (void)initialize;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)newlineCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)punctuationCharacterSet;
+ (bool)supportsSecureCoding;
+ (id)symbolCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;

- (unsigned long long)_cfTypeID;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (id)_retainedBitmapRepresentation;
- (id)bitmapRepresentation;
- (bool)characterIsMember:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMemberInPlane:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)invertedSet;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isMutable;
- (bool)isSupersetOfSet:(id)arg1;
- (bool)longCharacterIsMember:(unsigned int)arg1;
- (void)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation

+ (id)_emojiCharacterSet;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)invalidCharactersForFileTransferName;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)phoneNumberSeparatorCharacterSet;
+ (id)phoneNumberSeparatorCharacterSet;

@end
