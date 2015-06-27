/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:02:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NEConfigurationLegacySupport.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NSString;

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	char _overridePrimary;
	int _configMethod;
	NSString* _address;
	NSString* _subnetMask;
	NSString* _router;

}

@property (assign) int configMethod;                  //@synthesize configMethod=_configMethod - In the implementation block
@property (copy) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (copy) NSString * subnetMask;               //@synthesize subnetMask=_subnetMask - In the implementation block
@property (copy) NSString * router;                   //@synthesize router=_router - In the implementation block
@property (assign) char overridePrimary;              //@synthesize overridePrimary=_overridePrimary - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(int)configMethod;
-(NSString *)subnetMask;
-(NSString *)router;
-(char)overridePrimary;
-(void)setConfigMethod:(int)arg1 ;
-(void)setSubnetMask:(NSString *)arg1 ;
-(void)setRouter:(NSString *)arg1 ;
-(void)setOverridePrimary:(char)arg1 ;
-(NSString *)address;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
@end
