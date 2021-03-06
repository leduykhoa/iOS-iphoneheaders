/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPNowPlayingQueuePosition : AceObject <SAAceSerializable>

@property (assign,nonatomic) int index; 
@property (assign,nonatomic) int queueSize; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nowPlayingQueuePosition;
+(id)nowPlayingQueuePositionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(int)index;
-(void)setIndex:(int)arg1 ;
-(id)encodedClassName;
-(int)queueSize;
-(void)setQueueSize:(int)arg1 ;
@end

