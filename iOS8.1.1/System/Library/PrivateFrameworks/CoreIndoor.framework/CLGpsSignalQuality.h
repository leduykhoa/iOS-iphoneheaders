/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/NSSecureCoding.h>

@interface CLGpsSignalQuality : NSObject <NSSecureCoding> {

	int _quality;

}

@property (assign,nonatomic) int quality;              //@synthesize quality=_quality - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithSignalQuality:(int)arg1 ;
-(int)quality;
-(void)setQuality:(int)arg1 ;
@end

