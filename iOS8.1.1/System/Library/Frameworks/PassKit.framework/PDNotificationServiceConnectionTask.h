/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/passd-Structs.h>
#import <passd/PDNetworkConnectionTask.h>

@class PDNotificationService;

@interface PDNotificationServiceConnectionTask : PDNetworkConnectionTask {

	PDNotificationService* _notificationService;

}

@property (nonatomic,retain) PDNotificationService * notificationService;              //@synthesize notificationService=_notificationService - In the implementation block
+(BOOL)supportsSecureCoding;
-(PDNotificationService *)notificationService;
-(long long)actionForActiveTask:(id)arg1 ;
-(unsigned long long)numberOfBackoffLevels;
-(const SCD_Struct_PD2*)backoffLevels;
-(id)endpointComponents;
-(id)queryFields;
-(BOOL)matchesTask:(id)arg1 ;
-(id)initWithNotificationService:(id)arg1 ;
-(void)setNotificationService:(PDNotificationService *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)request;
-(id)method;
-(id)bodyDictionary;
-(id)headerFields;
@end
