/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPSetQueueQueueOrder : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL descending; 
@property (nonatomic,copy) NSString * mediaItemProperty; 
+(id)setQueueQueueOrder;
+(id)setQueueQueueOrderWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)mediaItemProperty;
-(void)setMediaItemProperty:(id)arg1 ;
-(BOOL)descending;
-(void)setDescending:(BOOL)arg1 ;
@end
