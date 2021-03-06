/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:15:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/NSCopying.h>
#import <CoreSuggestions/NSSecureCoding.h>

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding> {

	double _start;
	double _end;
	char _floating;
	int _startUTCOffsetSeconds;
	int _endUTCOffsetSeconds;

}

@property (nonatomic,readonly) double start;                                 //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double end;                                   //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) int startUTCOffsetSeconds;                    //@synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds - In the implementation block
@property (nonatomic,readonly) int endUTCOffsetSeconds;                      //@synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds - In the implementation block
@property (getter=isFloating,nonatomic,readonly) char floating;              //@synthesize floating=_floating - In the implementation block
+(char)supportsSecureCoding;
+(char)hasYearMonthDayComponents:(id)arg1 ;
+(char)isAllDayComponents:(id)arg1 ;
+(id)dateFromGregorianComponents:(id)arg1 ;
+(id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 ;
+(id)utcRangeWithStart:(double)arg1 end:(double)arg2 ;
+(double)fromFloatingTime:(double)arg1 ;
+(id)rangeWithStart:(double)arg1 duration:(double)arg2 timeZone:(id)arg3 ;
+(id)utcRangeWithStart:(double)arg1 duration:(double)arg2 ;
+(id)rangeWithStart:(double)arg1 end:(double)arg2 timeZone:(id)arg3 ;
+(id)floatingRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(double)toFloatingTime:(double)arg1 ;
+(id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2 ;
+(id)floatingRangeWithStart:(double)arg1 end:(double)arg2 ;
+(id)rangeWithStart:(double)arg1 startTimeZone:(id)arg2 end:(double)arg3 endTimeZone:(id)arg4 ;
-(char)isFloating;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)start;
-(double)end;
-(id)initWithStart:(double)arg1 startUTCOffsetSeconds:(int)arg2 end:(double)arg3 endUTCOffsetSeconds:(int)arg4 ;
-(id)initFloatingWithStart:(double)arg1 end:(double)arg2 ;
-(char)isEqualToSimpleTimeRange:(id)arg1 ;
-(id)stableStringRepresentation;
-(int)startUTCOffsetSeconds;
-(int)endUTCOffsetSeconds;
-(id)absoluteRange;
@end

