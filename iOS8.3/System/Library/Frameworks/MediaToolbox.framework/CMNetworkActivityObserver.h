/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:58:41 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CMNetworkActivityMonitor;

@interface CMNetworkActivityObserver : NSObject {

	char _valid;
	char _registered;
	int _cmActivityToken;
	int _cmActivityPollingToken;
	CMNetworkActivityMonitor* _activityMonitor;

}

@property (nonatomic,readonly) CMNetworkActivityMonitor * activityMonitor; 
+(id)registeredObserverForActivityMonitor:(id)arg1 ;
-(void)unregisterObservations;
-(CMNetworkActivityMonitor *)activityMonitor;
-(void)_pollWithInterval:(double)arg1 networkActivityDidCompleteBlock:(/*^block*/id)arg2 ;
-(void)registerObservations;
-(id)initForActivityMonitor:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

