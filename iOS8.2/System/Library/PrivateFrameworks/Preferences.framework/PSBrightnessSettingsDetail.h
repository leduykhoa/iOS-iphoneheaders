/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSettingsDetail.h>

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setValue:(float)arg1 ;
+(id)iconImage;
+(id)preferencesURL;
+(float)incrementedBrightnessValue:(float)arg1 ;
+(void)incrementBrightnessValue:(float)arg1 ;
+(void)beginBrightnessAdjustmentTransaction;
+(void)endBrightnessAdjustmentTransaction;
+(void)beginObservingExternalBrightnessChanges:(/*^block*/id)arg1 changedAction:(/*^block*/id)arg2 ;
+(void)endObservingExternalBrightnessChanges;
+(char)deviceSupportsAutoBrightness;
+(void)setAutoBrightnessEnabled:(char)arg1 ;
+(char)autoBrightnessEnabled;
+(float)currentValue;
@end

