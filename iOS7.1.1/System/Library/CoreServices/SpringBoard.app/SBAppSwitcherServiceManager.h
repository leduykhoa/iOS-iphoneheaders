/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBAppSwitcherServices;

@interface SBAppSwitcherServiceManager : NSObject {

	SBAppSwitcherServices* _services;

}
+(id)sharedInstance;
-(void)unregisterService:(id)arg1 ;
-(id)registeredServicesSnapshot;
-(void)dealloc;
-(void)registerService:(id)arg1 ;
@end

