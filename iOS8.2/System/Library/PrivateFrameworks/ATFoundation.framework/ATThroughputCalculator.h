/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject {

	char _suspended;
	double _lastUpdate;
	double _startTime;
	double _currentValue;
	ATMovingAverage* _average;

}

@property (nonatomic,readonly) double throughput; 
-(id)init;
-(void)suspend;
-(void)resume;
-(char)update:(double)arg1 ;
-(double)throughput;
@end

