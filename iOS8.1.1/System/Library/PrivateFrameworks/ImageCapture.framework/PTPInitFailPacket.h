/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTPInitFailPacket : NSObject {

	unsigned _reason;

}
-(id)description;
-(unsigned)reason;
-(id)initWithReason:(unsigned)arg1 ;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(void)setReason:(unsigned)arg1 ;
@end
