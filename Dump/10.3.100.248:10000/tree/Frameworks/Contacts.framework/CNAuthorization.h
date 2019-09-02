/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNAuthorization : NSObject

+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (bool)isAccessRestrictedForEntityType:(long long)arg1;
+ (bool)requestAccessForEntityType:(long long)arg1;
+ (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
+ (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
+ (bool)requestAccessForEntityType:(long long)arg1 timeout:(double)arg2 error:(id*)arg3;

@end