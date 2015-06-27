/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:44:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <syncdefaultsd/syncdefaultsd-Structs.h>
@class NSDictionary;

@interface SYDDeviceInfo : NSObject {

	NSDictionary* systemDictionary;
	NSDictionary* frameworkDictionary;

}
+(id)productVersion;
+(id)userAgentHeader;
+(id)osVersion;
+(id)clientInfoHeader;
+(id)udid;
-(id)frameworkIdentifier;
-(id)frameworkVersion;
-(id)gestaltValueForKey:(CFStringRef)arg1 ;
-(id)systemInfoDictionary;
-(id)frameworkInfoDictionary;
-(void)dealloc;
-(id)init;
-(id)buildVersion;
-(id)osName;
-(id)wifiMacAddress;
-(id)productVersion;
-(id)serialNumber;
-(id)osVersion;
-(id)udid;
-(id)productType;
@end
