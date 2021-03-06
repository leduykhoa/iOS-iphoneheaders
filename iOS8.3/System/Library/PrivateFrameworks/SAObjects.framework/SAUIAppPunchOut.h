/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAddViews, NSString, SAUIImageResource, NSDictionary, NSURL;

@interface SAUIAppPunchOut : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIAddViews * alternativePunchOut; 
@property (assign,nonatomic) char appAvailableInStorefront; 
@property (nonatomic,copy) NSString * appDisplayName; 
@property (nonatomic,retain) SAUIImageResource * appIcon; 
@property (nonatomic,copy) NSDictionary * appIconMap; 
@property (assign,nonatomic) char appInstalled; 
@property (nonatomic,copy) NSURL * appStoreUri; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSString * providerId; 
@property (nonatomic,copy) NSString * punchOutName; 
@property (nonatomic,copy) NSURL * punchOutUri; 
+(id)appPunchOut;
+(id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)afui_punchOutFailureViews;
-(id)afui_punchOutAppNotAvailableViews;
-(void)afui_getInstallAppPunchoutWithCompletion:(/*^block*/id)arg1 ;
-(char)_afui_isUsefulUserResultCommand;
-(id)groupIdentifier;
-(NSString *)bundleId;
-(void)setAppInstalled:(char)arg1 ;
-(char)appInstalled;
-(void)setProviderId:(NSString *)arg1 ;
-(NSString *)providerId;
-(id)encodedClassName;
-(char)requiresResponse;
-(SAUIAddViews *)alternativePunchOut;
-(void)setAlternativePunchOut:(SAUIAddViews *)arg1 ;
-(char)appAvailableInStorefront;
-(void)setAppAvailableInStorefront:(char)arg1 ;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
-(SAUIImageResource *)appIcon;
-(void)setAppIcon:(SAUIImageResource *)arg1 ;
-(NSDictionary *)appIconMap;
-(void)setAppIconMap:(NSDictionary *)arg1 ;
-(NSURL *)appStoreUri;
-(void)setAppStoreUri:(NSURL *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)punchOutName;
-(void)setPunchOutName:(NSString *)arg1 ;
-(NSURL *)punchOutUri;
-(void)setPunchOutUri:(NSURL *)arg1 ;
@end

