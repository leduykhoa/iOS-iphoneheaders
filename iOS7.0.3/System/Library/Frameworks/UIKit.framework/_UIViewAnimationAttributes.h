/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {

	double _duration;
	double _delay;
	unsigned _options;
	int _curve;

}

@property (getter=_duration,nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
@property (getter=_delay,nonatomic,readonly) double delay;                    //@synthesize delay=_delay - In the implementation block
@property (getter=_curve,nonatomic,readonly) int curve;                       //@synthesize curve=_curve - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_duration;
-(double)_delay;
-(int)_curve;
-(int)curve;
@end

