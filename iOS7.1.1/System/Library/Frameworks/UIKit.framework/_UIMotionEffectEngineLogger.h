/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _UIMotionEffectEngineLogger : NSObject {

	long long _motionLevelSamples[8];
	long long _sampleCount;
	long long _updateFreqency;
	double _lastUpdateTimeStamp;

}
-(id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2 ;
-(double)lastRecordedTimestamp;
-(void)recordMotionMagnitude:(double)arg1 atTimestamp:(double)arg2 ;
-(void)_dumpToAggregated;
@end

