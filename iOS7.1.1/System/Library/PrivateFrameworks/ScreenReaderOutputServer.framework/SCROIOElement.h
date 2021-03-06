/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutput/SCROIOElementProtocol.h>
#import <CoreFoundation/NSCopying.h>

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying> {

	unsigned _ioObject;
	int _identifier;

}
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)identifier;
-(int)transport;
-(id)initWithIOObject:(unsigned)arg1 ;
-(unsigned)ioObject;
@end

