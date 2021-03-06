/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:24 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSCoding.h>

@interface NSPort : NSObject <NSCopying, NSCoding>

@property (getter=isValid,readonly) char valid; 
@property (readonly) unsigned reservedSpaceLength; 
+(id)portWithMachPort:(unsigned)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)port;
-(id)replacementObjectForCoder:(id)arg1 ;
-(unsigned)machPort;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(char)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned)arg4 ;
-(unsigned)reservedSpaceLength;
-(Class)classForPortCoder;
-(char)sendBeforeDate:(id)arg1 msgid:(unsigned)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)invalidate;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
@end

