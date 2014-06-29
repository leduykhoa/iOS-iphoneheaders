/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSLock;

@interface GEONetworkObserver : NSObject {

	NSLock* _lock;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	CFDictionaryRef _networkObservers;
	bool _networkNotified;
	bool _networkReachable;

}
+(id)sharedNetworkObserver;
-(void)dealloc;
-(id)init;
-(bool)isNetworkReachable;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(void)initializeIfNecessary;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(void)_networkObserversInitialize;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(bool)isCellConnection;
@end
