/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIDate : NSObject

+ (id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2;
+ (id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3;
+ (id)currentCalendarGMT;
+ (id)dateByNormalizingToGMT:(id)arg1;
+ (id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;
+ (id)gregorianCalendarGMT;
+ (void)initialize;
+ (bool)isYearlessComponents:(id)arg1;
+ (void)localeDidChange:(id)arg1;
+ (id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2;
+ (id)yearlessComponentsFromGMTDate:(id)arg1;

@end
