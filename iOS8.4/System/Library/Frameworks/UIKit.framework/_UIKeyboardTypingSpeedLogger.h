/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _UIKeyboardTypingSpeedLogger : NSObject {

	long long _typingDelaySamples[7];
	long long _typingDelaySampleCount;

}
-(id)init;
-(void)logToAggregate;
-(void)recordTypingDelay:(double)arg1 ;
@end
