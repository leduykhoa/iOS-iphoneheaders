/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:01:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKEventStore, NSObject;

@interface CKNanoEventManager : NSObject {

	char _accessToEventsGranted;
	EKEventStore* _eventStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) EKEventStore * eventStore;                       //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char accessToEventsGranted;                      //@synthesize accessToEventsGranted=_accessToEventsGranted - In the implementation block
+(id)sharedInstance;
-(EKEventStore *)eventStore;
-(void)dealloc;
-(id)init;
-(void)requestAccessToEventStore:(/*^block*/id)arg1 ;
-(void)setAccessToEventsGranted:(char)arg1 ;
-(char)accessToEventsGranted;
-(id)eventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(id)accessError;
-(id)eventsSortedByStartDateBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(void)fetchCurrentNextFreeAndLastEventWithHandler:(/*^block*/id)arg1 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
