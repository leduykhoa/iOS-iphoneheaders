/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:32:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/NSCoding.h>
#import <AVKit/NSCopying.h>
#import <AVKit/NSMutableCopying.h>

@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying>

@property (nonatomic,readonly) double currentValue; 
@property (nonatomic,readonly) double anchorValue; 
@property (nonatomic,readonly) double anchorTimeStamp; 
@property (nonatomic,readonly) double rate; 
+(double)currentTimeStamp;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(SCD_Struct_AV1)_timing;
-(char)isEqualToValueTiming:(id)arg1 ;
-(id)initWithValueTiming:(id)arg1 ;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(double)valueForTimeStamp:(double)arg1 ;
-(double)timeStampForValue:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)rate;
-(double)currentValue;
@end

