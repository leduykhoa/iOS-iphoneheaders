/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PSInternationalStatistics : NSObject
+(void)clearScalar:(id)arg1 ;
+(id)keyForReplaceLanguageViaDeviceLanguageSelection;
+(id)keyForReplaceLanguageViaOtherLanguageSelection;
+(void)incrementScalarForKey:(id)arg1 ;
+(void)setScalarValue:(long long)arg1 forKey:(id)arg2 ;
+(id)keyForLanguageUsed:(id)arg1 ;
+(void)setBoolean:(BOOL)arg1 forKey:(id)arg2 ;
+(id)keyForLanguageCount;
+(id)keyForTopLanguage:(id)arg1 AndLocale:(id)arg2 ;
+(id)keyForCalendar:(id)arg1 ;
+(id)keyForDeviceLanguage:(id)arg1 ;
+(id)keyForLocaleLanguageMatching;
+(void)addScalarValue:(long long)arg1 forKey:(id)arg2 ;
+(void)substractScalarValue:(long long)arg1 forKey:(id)arg2 ;
+(void)decrementScalarForKey:(id)arg1 ;
+(void)logInternationalStatistics;
@end
