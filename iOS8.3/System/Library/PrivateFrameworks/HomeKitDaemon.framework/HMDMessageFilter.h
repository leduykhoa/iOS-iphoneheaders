/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:01:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface HMDMessageFilter : NSObject {

	NSString* _name;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)resetConfiguration;
-(char)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(char)shouldCloudSyncData;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end
