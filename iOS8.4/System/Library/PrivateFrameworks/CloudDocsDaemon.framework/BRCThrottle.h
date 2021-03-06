/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCThrottleBase.h>

@class NSMutableDictionary, BRCMinHeap;

@interface BRCThrottle : BRCThrottleBase {

	NSMutableDictionary* _retryCounters;
	BRCMinHeap* _retryHeap;

}
+(long long)throttleHashFormat:(id)arg1 ;
+(long long)throttleHashBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)incrementRetryCount:(long long)arg1 ;
-(long long)nsecsToNextRetry:(long long)arg1 now:(long long)arg2 ;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(void)_cleanupStaleCounters:(long long)arg1 ;
-(void)logFirstBackoffTimes:(unsigned)arg1 ;
@end

