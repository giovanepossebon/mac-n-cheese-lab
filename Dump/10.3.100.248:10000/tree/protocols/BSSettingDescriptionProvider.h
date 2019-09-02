/* Generated by RuntimeBrowser.
 */

@protocol BSSettingDescriptionProvider <NSObject>

@optional

- (NSString *)keyDescriptionForSetting:(unsigned long long)arg1;
- (NSString *)settings:(BSSettings *)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (NSString *)settings:(BSSettings *)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (NSString *)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
