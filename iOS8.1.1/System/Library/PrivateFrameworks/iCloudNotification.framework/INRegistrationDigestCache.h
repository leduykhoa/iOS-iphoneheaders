/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface INRegistrationDigestCache : NSObject {

	int _unlockNotifyToken;
	NSObject*<OS_dispatch_queue> _keychainQueue;

}
+(id)sharedInstance;
+(BOOL)isAvailable;
-(id)registrationDigestForAccount:(id)arg1 withError:(id*)arg2 ;
-(BOOL)removeRegistrationDigestForAccount:(id)arg1 withError:(id*)arg2 ;
-(BOOL)updateRegistrationDigest:(id)arg1 forAccount:(id)arg2 withError:(id*)arg3 ;
-(void)dealloc;
-(id)init;
@end

